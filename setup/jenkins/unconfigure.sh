#!/bin/bash

#
# This script removes redlocus boiler plate config xml file from /var/lib/jenkins
#

JENKINS_INSTALLATION_DIR=/var/lib/jenkins

sudo rm -f $JENKINS_INSTALLATION_DIR/config.xml
sudo rm -f $JENKINS_INSTALLATION_DIR/hudson.plugins.analysis.core.GlobalSettings.xml
sudo rm -f $JENKINS_INSTALLATION_DIR/hudson.plugins.git.GitSCM.xml
sudo rm -f $JENKINS_INSTALLATION_DIR/hudson.plugins.git.GitTool.xml
sudo rm -f $JENKINS_INSTALLATION_DIR/hudson.tasks.Ant.xml
sudo rm -f $JENKINS_INSTALLATION_DIR/hudson.tasks.Mailer.xml
sudo rm -f $JENKINS_INSTALLATION_DIR/hudson.tasks.Maven.xml
sudo rm -f $JENKINS_INSTALLATION_DIR/hudson.tasks.Shell.xml
sudo rm -f $JENKINS_INSTALLATION_DIR/hudson.triggers.SCMTrigger.xml

sudo rm -rf $JENKINS_INSTALLATION_DIR/users
sudo rm -rf $JENKINS_INSTALLATION_DIR/plugins
sudo rm -rf $JENKINS_INSTALLATION_DIR/jobs
