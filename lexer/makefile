all: lexer

test: all
	./lexer < input.txt

lexer: lex.yy.c
	gcc -o lexer lex.yy.c -ll

lex.yy.c:
	lex quicklexer.l

clean:
	$(RM) lexer lex.yy.c
