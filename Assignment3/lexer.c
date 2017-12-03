#include "myl.h"
#include <stdio.h>
#define KEYWORD 1
#define IDENTIFIER 2
#define CONSTANT 3
#define STRING 4
#define PUNC 5
#define COMMENT 6
#define ERROR 7
#define SPACE 8
#define LINE 9
extern int lines;
extern char* yytext;

int main()
{
	int token;
	while(token = yylex())
	{	
		//printf("%d",token) ;
		switch (token)
		{
			case KEYWORD: printf("<KEYWORD>");
			break;
			case IDENTIFIER: printf("<IDENTIFIER>");
			break;
			case CONSTANT: printf("<CONSTANT>");
			break;
			case STRING: printf("<STRING_LITERAL>");
			break;
			case PUNC: printf("<PUNCTUATOR>");
			break;
			case COMMENT: printf("<COMMENT>");
			break;
			case SPACE: printf(" ");
			break;
			case LINE: lines++;
			printf("\n");
			break;
			/*case ERROR: 
				printf("<ERROR in line no ");
				printf("%d ",lines);
				printf("because of %s",yytext);
				printf(">");
			break;*/
		}
	}
}
