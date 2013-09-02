#!/bin/bash

#
# This script copies redlocus boiler plate config xml files to /var/lib/jenkins
#

JENKINS_INSTALLATION_DIR=/var/lib/jenkins
REDLOCUS_JENKINS_DIR=/home/bmehta/redlocus/gears/setup/jenkins

# nuke default (empty) jobs and plugins directory
sudo rm -rf $JENKINS_INSTALLATION_DIR/jobs
sudo rm -rf $JENKINS_INSTALLATION_DIR/plugins

cd $JENKINS_INSTALLATION_DIR

# link redlocus jenkins config
sudo cp $REDLOCUS_JENKINS_DIR/config.xml .
sudo cp $REDLOCUS_JENKINS_DIR/hudson.plugins.analysis.core.GlobalSettings.xml .
sudo cp $REDLOCUS_JENKINS_DIR/hudson.plugins.git.GitSCM.xml .
sudo cp $REDLOCUS_JENKINS_DIR/hudson.plugins.git.GitTool.xml .
sudo cp $REDLOCUS_JENKINS_DIR/hudson.tasks.Ant.xml .
sudo cp $REDLOCUS_JENKINS_DIR/hudson.tasks.Mailer.xml .
sudo cp $REDLOCUS_JENKINS_DIR/hudson.tasks.Maven.xml .
sudo cp $REDLOCUS_JENKINS_DIR/hudson.tasks.Shell.xml .
sudo cp $REDLOCUS_JENKINS_DIR/hudson.triggers.SCMTrigger.xml .

sudo cp -R $REDLOCUS_JENKINS_DIR/users .
sudo cp -R $REDLOCUS_JENKINS_DIR/plugins .
sudo cp -R $REDLOCUS_JENKINS_DIR/jobs .

sudo chown -R jenkins:jenkins *

sudo service jenkins restart