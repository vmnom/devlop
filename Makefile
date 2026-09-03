# /*
# * Makefile - minimal
# *
# */

x86_64:
	gcc -lsqlite3 -Iframework *.c -o /usr/local/bin/vmnomx
