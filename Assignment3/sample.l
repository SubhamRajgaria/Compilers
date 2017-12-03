%{
/* C declarations and Definitions */
%}

/* Regular expressions and Definitions */
INT		"int"
ID 		[a-z][a-z0-9]*
PUNC	[;]
CONST 	[0-9]+
WS 		[\t\n]

%%
{ID}	{printf("<ID %s>\n", yytext); /*Identifier Rule */}
{INT}	{printf("<KEYWORD, %s>\n", yytext); /*Identifier Rule */}
"+"		{printf("<OPERATOR, +>\n", yytext); /*Identifier Rule */}
"*"		{printf("<OPERATOR, *>\n", yytext); /*Identifier Rule */}
"="		{printf("<OPERATOR, =>\n", yytext); /*Identifier Rule */}
"{"		{printf("<SPECIAL SYMBOL, {>\n", yytext); /*Identifier Rule */}
%%