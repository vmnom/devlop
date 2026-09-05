CC         := gcc 
FRAMEWORK  := find . -maxdepth 3 -name "*.c"

vmnomx:
	@ctags -R .
	gcc -Iframework $(shell $(FRAMEWORK)) -o /usr/local/bin/vmnomx -lsqlite3
	@vmnomx
	@echo

test:
	$(FRAMEWORK)

config:
	@echo alias l=make
	@echo alias ll=clear
