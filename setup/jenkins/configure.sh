#!/bin/bash

#
# This script links redlocus boiler plate config xml file to /var/lib/jenkins
#

JENKINS_INSTALLATION_DIR=/var/lib/jenkins
REDLOCUS_JENKINS_DIR=/home/bmehta/redlocus/gears/setup/jenkins

cd $JENKINS_INSTALLATION_DIR
sudo ln -s $REDLOCUS_JENKINS_DIR/config.xml .
sudo ln -s $REDLOCUS_JENKINS_DIR/hudson.plugins.analysis.core.GlobalSettings.xml .
sudo ln -s $REDLOCUS_JENKINS_DIR/hudson.plugins.git.GitSCM.xml .
sudo ln -s $REDLOCUS_JENKINS_DIR/hudson.plugins.git.GitTool.xml .
sudo ln -s $REDLOCUS_JENKINS_DIR/hudson.tasks.Ant.xml .
sudo ln -s $REDLOCUS_JENKINS_DIR/hudson.tasks.Mailer.xml .
sudo ln -s $REDLOCUS_JENKINS_DIR/hudson.tasks.Maven.xml .
sudo ln -s $REDLOCUS_JENKINS_DIR/hudson.tasks.Shell.xml .
sudo ln -s $REDLOCUS_JENKINS_DIR/hudson.triggers.SCMTrigger.xml .

# update mysql db with login info
