#include <stdio.h>
#include "lex.yy.c"
extern int lines;
int main()
{	
	int token;
	while(token = yylex())
	{
		if(token==NEWLINE)
			lines++;
		else if(token == COMMENT)
			printf("<COMMENT %s>", yytext);
		else if(token==BREAK|| token == CASE ||token == CHAR || token == CONTINUE||	
		token== DEFAULT || token== DO|| token== DOUBLE || token== SHORT || token==LONG
 	||token==ELSE || token== FLOAT || token== FOR || token==GOTO || token==IF || 
	token==INT || token==RETURN || token== SIGNED|| token==SWITCH || token==UNSIGNED||
	token==VOID || token==WHILE|| token==BOOL || token==MATRIX)
		{
			printf("<KEYWORD %s>", yytext);
		}
		else if(token == INT_NO || token==FLOAT_NO || token == CHARACTER)
			printf("<CONSTANT %s>", yytext);
		else if(token == STRING)
			printf("<STRING_LITERAL %s>", yytext);
		//else if(token == COMMENT)
		//	printf("<COMMENT>");
		else if(token == IDENTIFIER)
			printf("<IDENTIFIER %s>", yytext);
		else if(token == LEFT_SQUARE_BRACE || token == RIGHT_SQUARE_BRACE ||
			token == LEFT_ROUND_BRACE || token == RIGHT_ROUND_BRACE ||
			token == LEFT_CURLY_BRACE || token == RIGHT_CURLY_BRACE ||
			token == PERIOD || token == ARROW || token == INCREMENT ||
			token == DECREMENT || token == AMPERSAND || token == MULTIPLY ||
			token == ADD || token == SUBTRACT || token == TILDA || 
			token == NEGATION || token == DIVIDE || token == PERCENTILE ||
			token == LEFT_SHIFT || token == RIGHT_SHIFT || token == LESS_THAN
			|| token == GREATER_THAN || token == LESS_THAN_EQUALTO || 
			token == GREATER_THAN_EQUALTO || token == DOUBLE_EQUAL || 
			token == NOT_EQUAL || token == XOR || token == OR || 
			token == BINARY_AND || token == BINARY_OR || token == QUESTION_MARK
			|| token == COLON || token == SEMI_COLON || token == EQUAL || 
			token == STAR_EQUAL || token == SLASH_EQUAL || 
			token == PERCENTILE_EQUAL || token == PLUS_EQUAL || 
			token == MINUS_EQUAL || token == LEFT_SHIFT_EQUAL ||
			token == RIGHT_SHIFT_EQUAL || token == AND_EQUAL || 
			token == XOR_EQUAL || token == OR_EQUAL || token == COMMA || 
			token == HASH || token == SPECIAL)
		{
			printf("<PUNCTUATOR %s>", yytext);
		}
		else if(token == UNKNOWN)
			printf("Error in line no %d", lines );
		else
			printf("\n");
			
	}
	return 0;
}
