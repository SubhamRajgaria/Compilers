all: a.out 	quads.out
	chmod 755 compile
 
a.out: lex.yy.o y.tab.o ass5_15CS10061_translator.o ass5_15CS10061_target_translator.o 
	g++ lex.yy.o y.tab.o ass5_15CS10061_translator.o ass5_15CS10061_target_translator.o -lfl


y.tab.o:	y.tab.c
	g++ -c y.tab.c

lex.yy.o:	lex.yy.c
	g++ -c lex.yy.c

lex.yy.c:	ass5_15CS10061.l y.tab.c
	flex ass5_15CS10061.l

y.tab.c:	ass5_15CS10061.y
	yacc -dtv -Wother ass5_15CS10061.y

ass5_15CS10061_translator.o: ass5_15CS10061_translator.h ass5_15CS10061_translator.cxx
	g++ -c ass5_15CS10061_translator.cxx

ass5_15CS10061_target_translator.o: ass5_15CS10061_target_translator.cxx
	g++ -c ass5_15CS10061_target_translator.cxx 

clean:
	rm a.out y.tab.o lex.yy.o lex.yy.c y.tab.c y.tab.h y.output ass5_15CS10061_translator.o ass5_15CS10061_target_translator.o


