#!/usr/bin/env python

#
# example to run:
# python jenkins_project_master.py -p project-name -c config -j build -j all -j clang -j cpd -j ct -j lcov -j mcc -j sloc
#

import os
import sys
import logging
from multiprocessing import Process
from jenkinsapi.jenkins import Jenkins
from optparse import OptionParser

JENKINS_URL = os.getenv('JENKINS_URL', 'http://jenkins.redlocus.com:8080')
jo = Jenkins(JENKINS_URL, username="mzhang", password="Mzhang123")
jo.poll()

logging.basicConfig()


def parse_args():
    p = OptionParser()

    p.add_option("-p", "--project", dest="project", default=None,
                 type="string", help="Project name. (Required)")

    p.add_option("-j", "--jobs", dest="jobs", default=None,
                 action="append", type="string",
                 help="Jobs want to be created. (Required)")

    p.add_option("-c", "--config", dest="config", default="",
                 type="string", help="Path to config files. (Optional)")

    p.add_option("-d", "--delete", dest="delete", default=False,
                 action="store_true",
                 help="Delete specified jobs. (Optional)")

    p.add_option("-r", "--restore", dest="restore", default=False,
                 action="store_true",
                 help=("Restore to factory setup. "
                       "Mutual exclusive with --delete (Optional)"))

    opts, args = p.parse_args()

    if not opts.project or not opts.jobs:
        p.print_help()
        p.error("\nInvalid arguments. See help above.")

    if opts.delete and opts.restore:
        p.print_help()
        p.error("\nInvalid arguments. See help above.")
    return opts


def xml_to_string(xml_file):
    with open(xml_file) as f:
        data = f.read()

    return data


def create_jobs(opts):
    jobs = []
    procs = {}

    for job in opts.jobs:
        xml_file = opts.config + '/' + job + '_config.xml'
        config = xml_to_string(xml_file)
        job_name = opts.project + "-" + job

        p = Process(target=jo.create_job, args=(job_name, config))
        p.start()

        jobs.append(job_name)
        procs.update({p.pid: job_name})

    for p in procs.keys():
        pid, status = os.wait()
        if status != 0:
            print "Failed to create job %s" % procs[pid]
        else:
            print "Successfully created job %s" % procs[pid]

    return jobs


def create_view(opts):
    views = jo.views()
    new_view_name = views.create(view_name=opts.project)
    view = jo.get_view_by_url(JENKINS_URL + '/view/' +
                              str(new_view_name))
    return view


def add_job_to_view(view, jobs):
    for job in jobs:
        view.add_job(str_job_name=job)


def main():
    opts = parse_args()

    # create jobs
    jobs = create_jobs(opts)

    # create a new view
    view = create_view(opts)

    # add jobs into the new view
    add_job_to_view(view, jobs)

    return 0


if __name__ == "__main__":
    sys.exit(main())
