#!/bin/bash

#
# This script links redlocus boiler plate config xml file to /var/lib/jenkins
#

JENKINS_INSTALLATION_DIR=/var/lib/jenkins
REDLOCUS_JENKINS_DIR=/home/bmehta/redlocus/gears/setup/jenkins

# nuke default (empty) jobs and plugins directory
sudo rm -rf $JENKINS_INSTALLATION_DIR/jobs
sudo rm -rf $JENKINS_INSTALLATION_DIR/plugins

cd $JENKINS_INSTALLATION_DIR

# link redlocus jenkins config
sudo ln -s $REDLOCUS_JENKINS_DIR/config.xml .
sudo ln -s $REDLOCUS_JENKINS_DIR/hudson.plugins.analysis.core.GlobalSettings.xml .
sudo ln -s $REDLOCUS_JENKINS_DIR/hudson.plugins.git.GitSCM.xml .
sudo ln -s $REDLOCUS_JENKINS_DIR/hudson.plugins.git.GitTool.xml .
sudo ln -s $REDLOCUS_JENKINS_DIR/hudson.tasks.Ant.xml .
sudo ln -s $REDLOCUS_JENKINS_DIR/hudson.tasks.Mailer.xml .
sudo ln -s $REDLOCUS_JENKINS_DIR/hudson.tasks.Maven.xml .
sudo ln -s $REDLOCUS_JENKINS_DIR/hudson.tasks.Shell.xml .
sudo ln -s $REDLOCUS_JENKINS_DIR/hudson.triggers.SCMTrigger.xml .
sudo ln -s $REDLOCUS_JENKINS_DIR/users .
sudo ln -s $REDLOCUS_JENKINS_DIR/plugins .
sudo ln -s $REDLOCUS_JENKINS_DIR/jobs .
