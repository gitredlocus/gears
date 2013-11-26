gears
=====

language tools, jenkins scripts, conversion scripts, setup scripts

To install:
1) Get a linux box. (or a VM, or a Linode)
2) Clone the gears repo. (git clone git@github.com:gitredlocus/gears.git)
3) Run setup/install.sh (This installs Apache, Mysql, {PHP,} and Jenkins) (Choose root:root as login for mysql)
4) mysql -u root -p < setup/database/createdb.sql (enter password for root)
5) Run setup/jenkins/configure.sh (This configures jenkins jobs, users, and sets up tools for the jobs) (jenkins login: mzhang/Mzhang123)
6) sudo cp -R web/ /var/www
7) sudo service apache2 restart
8) sudo chmod a+w /var/www/web/protected/runtime
9) Run tools/configure.sh (This copies the tools binaries and parser scripts to redlocus installation directory)
10) Remove the gears repo

To uninstall:
1) Clone the gears repo on the linux box.
2) Remove tools: tools/unconfigure.sh
3) Remove jenkins: setup/jenkins/unconfigure.sh
4) mysql -u root -p < setup/database/deletedb.sql (enter password for root)
5) Run setup/uninstall.sh
6) sudo rm -rf /var/www/web
7) Remove gears repo