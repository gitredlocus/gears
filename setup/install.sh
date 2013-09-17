#!/bin/bash

#
# Master setup script that installs, AMP (apache, mysql, php) stack and Jenkins.
# Use/Enhance this script to perform all installations on top of base ubuntu image.
#
# FIXME: if something is already installed, verify the installation, and skip it.
#

sudo apt-get update

# install Apache
sudo apt-get install -y apache2

# install mysql
sudo apt-get install -y mysql-server
sudo mysql_install_db
sudo /usr/bin/mysql_secure_installation
sudo apt-get install -y libapache2-mod-auth-mysql php5-mysql

# install jenkins
sudo apt-get install -y openjdk-7-jdk
# update-java-alternatives -l
# sudo update-java-alternatives -s java-1.7.0-openjdk-amd64
sudo apt-get install -y jenkins

# install PHP
# apt-cache search php5- (and install pkgs that needed)
sudo apt-get install -y php5 libapache2-mod-php5 php5-mcrypt

# install python-mysql interface
sudo apt-get install python-mysqldb