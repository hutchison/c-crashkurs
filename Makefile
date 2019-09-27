.PHONY: clean slides.pdf

clean:
	$(RM) *.aux *.log *.fls *.out *.fdb_latexmk *.xdv *.tdo *.bbl *.blg *.nav *.snm *.toc

slides.pdf: slides.tex
	latexmk -pdf -xelatex -use-make -pvc -shell-escape $<

hello: hello.c
	$(CC) -o $@ $<
