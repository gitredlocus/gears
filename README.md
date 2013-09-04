gears
=====

language tools, jenkins scripts, conversion scripts, setup scripts

To install:
1) Get a linux box. (or a VM, or a Linode)
2) Clone the gears repo.
3) Run setup/install.sh (This installs Apache, Mysql, PHP, and Jenkins)
4) Run setup/jenkins/configure.sh (This configures jenkins jobs, users, and sets up tools for the jobs)
5) Copy web/ to /var/www
6) Remove the gears repo

To uninstall:
1) Clone the gears repo on the linux box.
2) Run setup/jenkins/unconfigure.sh
3) Run setup/uninstall.sh
4) Delete web/ from /var/www/
5) Remove gears repo