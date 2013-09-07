gears
=====

language tools, jenkins scripts, conversion scripts, setup scripts

To install:
1) Get a linux box. (or a VM, or a Linode)
2) Clone the gears repo.
3) Run setup/install.sh (This installs Apache, Mysql, PHP, and Jenkins)
4) Run setup/jenkins/configure.sh (This configures jenkins jobs, users, and sets up tools for the jobs)
5) sudo cp -R web/ /var/www
6) sudo service apache2 restart
7) sudo chmod a+w /var/www/web/protected/runtime
8) Remove the gears repo

To uninstall:
1) Clone the gears repo on the linux box.
2) Run setup/jenkins/unconfigure.sh
3) Run setup/uninstall.sh
4) sudo rm -rf /var/www/web
5) Remove gears repo