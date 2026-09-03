CC       := gcc 
BINNARY  := vmnomx
EXTERNAL := -lsqlite3

$(BINNARY):
	$(CC) $(EXTERNAL) -Iframework $(find . -maxdepth 3 -name "*.c") -o /usr/local/bin/$(BINNARY)
