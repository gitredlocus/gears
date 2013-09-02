#!/bin/bash

#
# This script unlinks redlocus boiler plate config xml file from /var/lib/jenkins
#

JENKINS_INSTALLATION_DIR=/var/lib/jenkins

sudo unlink $JENKINS_INSTALLATION_DIR/config.xml
sudo unlink $JENKINS_INSTALLATION_DIR/hudson.plugins.analysis.core.GlobalSettings.xml
sudo unlink $JENKINS_INSTALLATION_DIR/hudson.plugins.git.GitSCM.xml
sudo unlink $JENKINS_INSTALLATION_DIR/hudson.plugins.git.GitTool.xml
sudo unlink $JENKINS_INSTALLATION_DIR/hudson.tasks.Ant.xml
sudo unlink $JENKINS_INSTALLATION_DIR/hudson.tasks.Mailer.xml
sudo unlink $JENKINS_INSTALLATION_DIR/hudson.tasks.Maven.xml
sudo unlink $JENKINS_INSTALLATION_DIR/hudson.tasks.Shell.xml
sudo unlink $JENKINS_INSTALLATION_DIR/hudson.triggers.SCMTrigger.xml
