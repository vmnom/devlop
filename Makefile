config:
	@echo alias l=make
	@echo alias ll=clear

git:
	more 403 > docs/Readme
	git add .
	git commit -m devlop
	git push --all
