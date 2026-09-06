config:
	@echo alias l=make
	@echo alias ll=clear

git:
	git add .
	git commit -m devlop
	git push --all


lib:
	gcc $(find vm -name *.c)
