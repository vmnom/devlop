CC         := gcc 
EXTERNAL   := -lsqlite3
FRAMEWORK  := find . -maxdepth 2 -name "*.c"

vmnomx:
	@$(CC) $(EXTERNAL) -Iframework $(shell $(FRAMEWORK)) -o /usr/local/bin/vmnomx
	@vmnomx
	@echo
	@ctags -R .

test:
	$(FRAMEWORK)

config:
	@echo alias l=make
	@echo alias ll=clear
