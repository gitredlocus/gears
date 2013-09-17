gears
=====

language tools, jenkins scripts, conversion scripts, setup scripts

To install:
1) Get a linux box. (or a VM, or a Linode)
2) Clone the gears repo.
3) Run setup/install.sh (This installs Apache, Mysql, PHP, and Jenkins) (Choose root:root as login for mysql)
4) mysql -u root -p < setup/database/createdb.sql (enter password for root)
5) Run setup/jenkins/configure.sh (This configures jenkins jobs, users, and sets up tools for the jobs)
6) sudo cp -R web/ /var/www
7) sudo service apache2 restart
8) sudo chmod a+w /var/www/web/protected/runtime
9) Remove the gears repo

To uninstall:
1) Clone the gears repo on the linux box.
2) Run setup/jenkins/unconfigure.sh
3) mysql -u root -p < setup/database/deletedb.sql (enter password for root)
4) Run setup/uninstall.sh
5) sudo rm -rf /var/www/web
6) Remove gears repo