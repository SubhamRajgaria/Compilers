%{
	#define YYSTYPE double
	#define YYDEBUG 1
	#include <ctype.h>
	#include <stdio.h>
	extern int yylex();
	void yyerror(char *s);
%}

%union{
	int intval
}
/* Bison Declaration */
%token <intval> IDENTIFIER
%token <intval> CONSTANT
%token <intval> STRING_LITERAL
%token <intval> PUNCTUATOR
%left ','':
%right '=' "*=" "/=" "%=" "+=" "-=" "<<=" ">>=" "&=" "^=" "|="
%left "&&" "||"
%left '&' '^'
%left "==" "!="
%left '<' "<=" '>' ">=" 
%left "<<"">>"
%left '-''+'
%left '*''/''%'
%left "++" "--"
%right PRE
%left POST NEG
%right POINT
%left '('')''['']''.'"->"
%start translation_unit

%%
primary_expression: IDENTIFIER{printf("It is an identifier\n");}
				| CONSTANT{printf("It is a constant\n");}
				| STRING_LITERAL{printf("It is a string literal\n");}
				| '(' expression ')'{printf("It is an expression\n ");}
				;
postfix_expression: primary_expression{printf ("postfix-expression -> primary_expression");}
					| postfix_expression '[' expression ']'{printf ("postfix-expression -> postfix_expression[expression]");}
					| postfix_expression '(' argument_expression_list_opt ')'{printf ("postfix-expression -> postfix_expression(expression)");}
					| postfix_expression '.' IDENTIFIER{printf ("postfix-expression.identifier");}
					| postfix_expression "->" IDENTIFIER{printf ("postfix-expression->identifier");}
					| postfix_expression "++"%prec POST{printf ("postfix-expression++");}
					| postfix_expression "--"{printf ("postfix-expression--");}
					| postfix_expression ".'"{printf ("postfix-expression.'");}
					;
argument_expression_list_opt: argument_expression_list{printf("argument_optional->argument_expression_list");}
							  | /* empty list */{printf("null");}
							  ;
argument_expression_list: assignment_expression {printf("argument_expression_list-> assignment_expression");}
						| argument_expression_list assignment_expression{printf("argument_expression_list->argument_expression_list   assignment_expression");}
						;
unary_expression: postfix_expression{printf("unary_expression-> postfix_expression");}
				| "++" unary_expression%prec PRE{printf("unary_expression-> ++unary_expression");}
				| '-' unary_expression%prec NEG{printf("unary_expression-> -unary_expression");}
				| unary_operator cast_expression{printf("unary_expression-> unary_operator cast_expression");}
				;
unary_operator: '&'{printf("unary_operator -> & ");}
				| '*'{printf("unary_operator -> * ");}
				| '+'{printf("unary_operator -> + ");}
				| '-'{printf("unary_operator -> - ");}
				;
cast_expression: unary_expression{printf("unary_operator -> & ");};
multiplicative_expression: cast_expression{printf("multiplicative-expression -> cast-expression");}
				| multiplicative_expression '*' cast_expression{printf("multiplicative-expression ->multiplicative-expression * cast-expression");}
				| multiplicative_expression '/' cast_expression{printf("multiplicative-expression ->multiplicative-expression / cast-expression");}
				| multiplicative_expression '%' cast_expression{printf("multiplicative-expression ->multiplicative-expression % cast-expression");}
				;
additive_expression: multiplicative_expression{printf("additive_expression-> multiplicative_expression");}
					| additive_expression '+' multiplicative_expression{printf("additive_expression-> additive-expression + multiplicative_expression");}
					| additive_expression '-' multiplicative_expression{printf("additive_expression-> additive-expression - multiplicative_expression");}
					;
shift_expression:additive_expression{printf("shift_expression -> additive_expression");}
				| shift_expression "<<" additive_expression{printf("shift_expression -> shift_expression << additive_expression");}
				| shift_expression ">>" additive_expression{printf("shift_expression -> shift_expression >> additive_expression");}
				;
relational_expression: shift_expression{printf("relational_expression -> shift_expression");}
					| relational_expression '<' shift_expression{printf("relational_expression -> relational-expression < shift_expression");}
					| relational_expression '>' shift_expression{printf("relational_expression -> relational-expression > shift_expression");}
					| relational_expression ">=" shift_expression{printf("relational_expression -> relational-expression >= shift_expression");}
					| relational_expression "<=" shift_expression{printf("relational_expression -> relational-expression <= shift_expression");}
					;
equality_expression: relational_expression {printf("equality_expression -> relational_expression");} 
					| equality_expression "==" relational_expression{printf("equality_expression -> equality_expression == relational_expression");}
					| equality_expression "!=" relational_expression{printf("equality_expression -> equality_expression != relational_expression");}
					;

AND_expression: equality_expression{printf("AND-expression -> equality_expression");}
				| AND_expression '&' equality_expression{printf("AND-expression ->AND-expression & equality_expression");}
				;
exclusive_or_expression: AND_expression{printf("exclusive_or_expression -> AND-expression");}
				| exclusive_or_expression '^' AND_expression{printf("exclusive_or_expression -> exclusive_or_expression ^ AND-expression");}
				;
inclusive_or_expression:
				exclusive_or_expression{printf("inclusive_or_expression -> exclusive_or_expression");}
				| inclusive_or_expression '|' exclusive_or_expression{printf("inclusive_or_expression -> inclusive_or_expression | exclusive_or_expression");}
				;
logical_AND_expression: inclusive_or_expression{printf("logical-and-expression -> inclusive_or_expression");}
				|  logical_AND_expression "&&" inclusive_or_expression{printf("logical-and-expression ->logical-and-expression && inclusive_or_expression");}
				;
logical_OR_expression: logical_AND_expression{printf("logical-or-expression ->logical-and-expression");}
				| logical_OR_expression "||" logical_AND_expression{printf("logical-or-expression -> logical-or-expression || logical-and-expression");}
				;
conditional_expression: logical_OR_expression{printf("conditional-expression -> logical-or-expression");}
				| logical_OR_expression '?' expression ':' conditional_expression{printf("conditional-expression -> logical-or-expression? expression : conditional_expression");}
				;
assignment_expression_opt: assignment_expression {printf("assignment_expression_opt -> assignment_expression");}
				| /*empty comment*/{printf("assignment_expression_opt -> empty");}
				;
assignment_expression: conditional_expression{printf("assignment_expression_opt -> conditional-expression");}
				| unary_expression assignment_operator assignment_expression{printf("assignment_expression -> unary_expression assignment_operator assignment-expression");}
				;
assignment_operator: '='{printf("assignment-operator -> =");}
				| "*="{printf("assignment-operator -> *=");}
				| "/="{printf("assignment-operator -> /=");}
				| "%="{printf("assignment-operator -> %=");}
				| "+="{printf("assignment-operator -> +=");}
				| "-="{printf("assignment-operator -> -=");}
				| "<<="{printf("assignment-operator -> <<=");}
				| ">>="{printf("assignment-operator -> >>=");}
				| "&="{printf("assignment-operator -> &=");}
				| "^="{printf("assignment-operator -> ^=");}
				| "|="{printf("assignment-operator -> |=");}
				;
expression_opt: expression {printf("expression-optional -> expression");}
			| /*empty comment */{printf("expression-optional -> empty");}
			;
expression: assignment_expression{printf("expression -> assignment-expression");}
			| expression assignment_expression{printf("expression -> expression assignment-expression");}
			;
constant_expression: conditional_expression{printf("constant-expression -> conditional_expression");};
declaration_specifiers_opt: declaration_specifiers{printf("declaration_specifiers_opt-> declaration_specifiers");}
			| /*empty comment */{printf("declaration_specifiers_opt-> empty ");}
			;
declaration: declaration_specifiers init_declarator_list_opt{printf("declaration -> declaration-specifiers init-declarator-list-optional");};
declaration_specifiers: type_specifier declaration_specifiers_opt{printf("declaration-specifiers -> type-specifier declaration_specifiers_optional"); };
init_declarator_list_opt: init_declarator_list {printf("init-declarator-list-optional -> init-declarator-list");} 
			| /*empty comment*/{printf("init-declarator-list-optional -> empty");} 
			;
init_declarator_list: init_declarator{printf("init-declarator-list -> init-declarator");}
			| 	init_declarator_list init_declarator{printf("init-declarator-list ->init-declarator-list init-declarator");}
			;
init_declarator: declarator{printf("init-declarator -> declarator");}
			| 	declarator '=' initializer{printf("init-declarator -> declarator=initializer");}
			;
type_specifier: "void"{printf("type-specifier -> void");}
			| "char"{printf("type-specifier -> char");}
			| "short"{printf("type-specifier -> short");}
			| "int"{printf("type-specifier -> int");}
			| "long"{printf("type-specifier -> long");}
			|"float"{printf("type-specifier -> float");}
			|"double"{printf("type-specifier -> double");}
			|"Matrix"{printf("type-specifier -> Matrix");}
			|"signed"{printf("type-specifier -> signed");}
			|"unsigned"{printf("type-specifier -> unsigned");}
			| "Bool"{printf("type-specifier -> Bool");}
			;
declarator: pointer_opt direct_declarator{printf("decalrator -> pointer_opt direct_declarator");};
direct_declarator: IDENTIFIER{printf("direct_declarator -> identifier");}
			| '(' declarator ')'{printf("direct_declarator -> (declarator)");}
			| direct_declarator'[' assignment_expression_opt ']'{printf("direct_declarator -> direct-declarator[assignment-expression-optional]");}
			| direct_declarator'(' parameter_type_list ')'{printf("direct_declarator -> direct-declarator(parameter-type-list)");}
			| direct_declarator'(' identifier_list_opt ')'{printf("direct_declarator -> direct-declarator(identifier-list-optional)");}
			;
pointer_opt: pointer {printf("pointer-optional -> pointer");}
			| /*empty comment */{printf("pointer-optional -> empty");}
			;
pointer: '*'pointer_opt%prec POINT{printf("pointer -> *pointer-optional");};
parameter_type_list: parameter_list{printf("parameter_type_list-> parameter-list");};
parameter_list: parameter_declaration{printf("parameter_list -> parameter_declaration");} 
			| parameter_list parameter_declaration{printf("parameter_list -> parameter-list parameter_declaration");}
			;
parameter_declaration: declaration_specifiers declarator{printf("parameter_declaration -> declaration-specifiers declarator");}
			| declaration_specifiers{printf("parameter_declaration -> declaration-specifiers");}
			;
identifier_list_opt: identifier_list{printf("identifier_list_optional -> identifier_list");}
			| /*empty comment*/{printf("identifier_list_optional -> empty");}
			;
identifier_list: IDENTIFIER{printf("identifier-list -> identifier");}
			|  identifier_list IDENTIFIER{printf("identifier-list ->identifier-list identifier");}
			;
initializer: assignment_expression{printf("initializer -> assignment-expression");}
			| '{' initializer_row_list '}'{printf("initializer -> initializer-row-list");}
			;
initializer_row_list: initializer_row{printf("initializer_row_list-> initializer_row");}
			|  initializer_row_list ';' initializer_row{printf("initializer_row_list -> initializer_row_list;initializer-row");}
			;
initializer_row: designation_opt initializer{printf("initializer-row -> designation-optional initializer");}
			| initializer_row',' designation_opt initializer{printf("initializer-row ->initializer-row, designation-optional initializer");}
			;
designation_opt: designation{printf("designation-optional -> designation");}
			| /*empty comment*/{printf("designation-optional -> empty");}
			;
designation: designation_list '='{printf("designation -> designation-list");};
designation_list: designator{printf("designation-list -> designator");}
			| designation_list designator{printf("designation-list -> designation-list designator");}
			;
designator: '[' constant_expression ']'{printf("designator -> [constant-expression]");}
			|'.'IDENTIFIER{printf("designator -> .identifier");}
			;
statement:labeled_statement{printf("statement -> labeled statement");}
		 	|compound_statement{printf("statement -> compound statement");}
		 	|expression_statement{printf("statement -> expression statement");}
		 	|selection_statement{printf("statement -> selection statement");}
		 	|iteration_statement{printf("statement -> iteration statement");}
		 	|jump_statement{printf("statement -> jump statement");}
		 	;
labeled_statement:IDENTIFIER ':' statement{printf("labeled-statement -> identifier:statement");}
				 |"case" constant_expression ':' statement{printf("labeled-statement ->case constant-expression:statement");}
				 |"default :" statement{printf("labeled-statement ->default :statement");}
				 ;
compound_statement: '{' block_item_list_opt '}'{printf("compound-statement -> {block-item-list-optional}");};
block_item_list_opt: block_item_list{printf("block-item-list-optional -> block-item-list");}
				| /* empty comment */{printf("block-item-list-optional -> empty");}
				;
block_item_list: block_item{printf("block-item-list -> block-item");}
				| block_item_list block_item{printf("block-item-list ->block-item-list block-item");}
				;
block_item: declaration{printf("block-item -> declaration");}
		  	|statement{printf("block-item -> statement");}
		  	;
expression_statement: expression_opt ';'{printf("expression-statement-> expression-optional");};
selection_statement: "if" '(' expression ')' statement{printf("expression-statement-> if(expression)statement");}
			| "if" '(' expression ')' statement "else" statement{printf("expression-statement-> if(expression)statement else statement");}
			| "switch" '(' expression ')' statement{printf("expression-statement-> switch(expression)statement");}
 			;
iteration_statement: "while" '(' expression ')' statement{printf("iteration-statement-> while(expression)statement");}
			| "do" statement "while" '(' expression ')'';'{printf("iteration-statement-> do statement while(expression);");}
			| "for" '(' expression_opt ';' expression_opt ';' expression_opt ')' statement{printf("iteration-statement -> for ( expression_optional ;expression_optional;expression_optional)statement");}
			| "for" '(' declaration expression_opt ';' expression_opt ')' statement{printf("iteration-statement -> for ( declaration_optional ;expression_optional)statement");}
			;
jump_statement: "goto" IDENTIFIER{printf("jump-statement -> goto indentifier");}
			| "continue" ';'{printf("jump-statement -> continue;");}
			| "break" ';'{printf("jump-statement ->  break;");}
			| "return" expression_opt ';'{printf("jump-statement -> return expression-optional;");}	
			;
 translation_unit: external_declaration{printf("translation-unit -> external-declaration");}
				|translation_unit external_declaration{printf("translation-unit -> translation-unit external-declaration");}
				;
external_declaration:function_definition {printf("external-declaration-> function-definition");}
					|declaration {printf("external-declaration-> declaration");}
					;
function_definition: declaration_specifiers declarator declaration_list_opt compound_statement{printf("function-definition -> decalration-specifiers declarator declaration-list-optional compound-statement");} 
				   ;
declaration_list_opt: declaration_list{printf("declaration-list-optional -> declaration-list");}
				| /*empty comment*/{printf("declaration-list-optional -> empty");}
				;
declaration_list:declaration{printf("declaration-list -> declaration");}
				|declaration_list declaration{printf("declaration-list ->declaration-list declaration");}
				;
%%
void yyerror(char *s) {
    printf("Error occured due to : %s\n",s);
}


