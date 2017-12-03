all : lexer.out parser.out
lexer.out : ass3_15CS10061_lexer.c lex.yy.c
	gcc ./ass3_15CS10061_lexer.c -lfl -o ./lexer.out

parser.out : ass3_15CS10061_parser.c lex.yy.c lexer.out
	gcc ./ass3_15CS10061_parser.c -lfl -o ./parser.out	

lex.yy.c : ass3_15CS10061.l y.tab.c
	flex ./ass3_15CS10061.l

y.tab.c : ass3_15CS10061.y
	yacc ass3_15CS10061.y --output='y.tab.c'

clean :
	rm -f ./*~ ./lex.yy.c ./y.tab.c ./parser.out ./lexer.out
