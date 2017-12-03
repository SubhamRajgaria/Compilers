all: a.out

a.out: lex.yy.o y.tab.o ass4_15CS10061_translator.o 
	g++ -g lex.yy.o y.tab.o ass4_15CS10061_translator.o -lfl


y.tab.o:	y.tab.c
	g++ -c y.tab.c

lex.yy.o:	lex.yy.c
	g++ -c lex.yy.c

lex.yy.c:	ass4_15CS10061.l y.tab.c
	flex ass4_15CS10061.l

y.tab.c:	ass4_15CS10061.y
	yacc -dtv ass4_15CS10061.y

ass4_15CS10061_translator.o: ass4_15CS10061_translator.h ass4_15CS10061_translator.cxx
	g++ -c ass4_15CS10061_translator.cxx

clean:
	rm a.out y.tab.o lex.yy.o lex.yy.c y.tab.c y.tab.h y.output ass4_15CS10061_translator.o

