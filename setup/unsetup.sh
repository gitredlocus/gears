#!/bin/bash

#
# Master setup script that removes AMP (apache, mysql, php) stack and Jenkins.
# (in reverse order of installation)
# Use/Enhance this script to perform all cleanups from top of base ubuntu image.
#

sudo apt-get update

# remove PHP
# apt-cache search php5- (and install pkgs that needed)
sudo apt-get remove -y php5 libapache2-mod-php5 php5-mcrypt

# remove jenkins
sudo apt-get remove -y jenkins
sudo apt-get remove -y openjdk-7-jdk

# remove mysql
sudo apt-get remove -y mysql-server
sudo apt-get remove -y --purge mysql-server mysql-client mysql-common
sudo apt-get remove -y libapache2-mod-auth-mysql php5-mysql

# remove Apache
sudo apt-get remove -y apache2

sudo apt-get autoremove -y