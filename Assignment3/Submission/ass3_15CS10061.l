%{
	#include <stdio.h>
	#include <math.h>
	#include <string.h>
	#include "y.tab.c"
	int lines =1;
%}
IDENTIFIER    			[a-zA-Z_][a-zA-Z_0-9]*
ZERO_CONSTANT 			[0]
INTEGER_CONSTANT 		[1-9][0-9]*
DIGIT_SEQUENCE 			[0-9]+
SIGN 					[+-]
EXPONENT_PART			[eE]{SIGN}?{DIGIT_SEQUENCE}
FRACTIONAL_CONSTANT 	{DIGIT_SEQUENCE}?"."{DIGIT_SEQUENCE}|{DIGIT_SEQUENCE}"."
FLOATING_CONSTANT 		{FRACTIONAL_CONSTANT}{EXPONENT_PART}?|{DIGIT_SEQUENCE}{EXPONENT_PART}
ESCAPE_SEQUENCE			("\\'"|"\\\""|"\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\r"|"\\t"|"\\v")
C_CHAR					[^\'\\\n]|{ESCAPE_SEQUENCE}
C_CHAR_SEQUENCE			{C_CHAR}+
CHARACTER_CONSTANT		(\'{C_CHAR_SEQUENCE}\')
CONSTANT 				{INTEGER_CONSTANT}|{FLOATING_CONSTANT}|{ZERO_CONSTANT}|{CHARACTER_CONSTANT}
S_CHAR					{C_CHAR}
S_CHAR_SEQUENCE 		{S_CHAR}+
STRING_LITERAL			(\"{S_CHAR_SEQUENCE}*?\")
SINGLE_COMMENT 			\/\/.*
MULTILINE_COMMENT 		\/\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*\/
COMMENT					{SINGLE_COMMENT}|{MULTILINE_COMMENT}
WS						[ \t]
UNKNOWN 				.
%%
"break"					{return BREAK;}
"case"					{return CASE;}
"char"					{return CHAR;}
"continue"			{return CONTINUE;}
"default"			{return DEFAULT;}
"do"				{return DO;}
"double"			{return DOUBLE;}
"short" 			{return SHORT;}
"long"				{return LONG;}
"else"				{return ELSE;}
"float"				{return FLOAT;}
"for"				{return FOR;}
"goto"				{return GOTO;}
"if"				{return IF;}
"int"				{return INT;}
"return"			{return RETURN;}
"signed"			{return SIGNED;}
"switch"			{return SWITCH;}
"unsigned"			{return UNSIGNED;}
"void"				{return VOID;}
"while"				{return WHILE;}
"Bool"				{return BOOL;}
"Matrix"			{return MATRIX;}
{COMMENT}			{}
{IDENTIFIER}		{return IDENTIFIER;}
{ZERO_CONSTANT}		{return INT_NO;}
{INTEGER_CONSTANT}	{return INT_NO;}
{FLOATING_CONSTANT}	{return FLOAT_NO;}
{CHARACTER_CONSTANT}	{return CHARACTER;}
{STRING_LITERAL}	{return STRING;}
"["					{return LEFT_SQUARE_BRACE;}
"]"					{return RIGHT_SQUARE_BRACE;}
"("					{return LEFT_ROUND_BRACE;}
")"					{return RIGHT_ROUND_BRACE;}
"{"					{return LEFT_CURLY_BRACE;}
"}"					{return RIGHT_CURLY_BRACE;}
"."					{return PERIOD;}
"->"				{return ARROW;}
"++"				{return INCREMENT;}
"--"				{return DECREMENT;}
"&"					{return AMPERSAND;}
"*"					{return MULTIPLY;}
"+"					{return ADD;}
"-"					{return SUBTRACT;}
"~"					{return TILDA;}
"!"					{return NEGATION;}
"/"					{return DIVIDE;}
\%					{return PERCENTILE;}
"<<"				{return LEFT_SHIFT;}
">>"				{return RIGHT_SHIFT;}
"<"					{return LESS_THAN;}
">"					{return GREATER_THAN;}
"<="				{return LESS_THAN_EQUALTO;}
">="				{return GREATER_THAN_EQUALTO;}
"=="				{return DOUBLE_EQUAL;}
"!="				{return NOT_EQUAL;}
"^"					{return XOR;}
"|"					{return OR;}
"&&"				{return BINARY_AND;}
"||"				{return BINARY_OR;}
\?					{return QUESTION_MARK;}
":"					{return COLON;}
"="					{return EQUAL;}
"*="				{return STAR_EQUAL;}
"/="				{return SLASH_EQUAL;}
"%="				{return PERCENTILE_EQUAL;}
"+="				{return PLUS_EQUAL;}
"-="				{return MINUS_EQUAL;}
"<<="				{return LEFT_SHIFT_EQUAL;}
">>="				{return RIGHT_SHIFT_EQUAL;}
"&="				{return AND_EQUAL;}
"^="				{return XOR_EQUAL;}
"|="				{return OR_EQUAL;}
\,					{return COMMA;}
\#				{return HASH;}
".'"				{return SPECIAL;}
";"					{return SEMI_COLON;}
{WS}				{}
\f			{}
\r			{}
{UNKNOWN}			{return UNKNOWN;}		
%%

