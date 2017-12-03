%{
#include <stdio.h>
extern int yylex(void);
void yyerror(char *s);
%}

%start translation_unit

%token BREAK 
%token CASE 
%token CHAR
%token CONTINUE
%token DEFAULT
%token DO
%token DOUBLE
%token SHORT
%token LONG
%token ELSE
%token FLOAT
%token FOR
%token GOTO
%token IF
%token INT
%token RETURN
%token SIGNED
%token SWITCH
%token UNSIGNED
%token VOID
%token WHILE
%token BOOL
%token MATRIX
%token COMMENT
%token IDENTIFIER
%token INT_NO
%token FLOAT_NO
%token CHARACTER
%token STRING
%token LEFT_SQUARE_BRACE
%token RIGHT_SQUARE_BRACE
%token LEFT_ROUND_BRACE
%token RIGHT_ROUND_BRACE
%token LEFT_CURLY_BRACE
%token RIGHT_CURLY_BRACE
%token PERIOD
%token ARROW
%token INCREMENT
%token DECREMENT
%token AMPERSAND
%token MULTIPLY
%token ADD
%token SUBTRACT
%token TILDA
%token NEGATION
%token DIVIDE
%token PERCENTILE
%token LEFT_SHIFT
%token RIGHT_SHIFT
%token LESS_THAN
%token GREATER_THAN
%token LESS_THAN_EQUALTO
%token GREATER_THAN_EQUALTO
%token DOUBLE_EQUAL
%token NOT_EQUAL
%token XOR
%token OR
%token BINARY_AND
%token BINARY_OR
%token QUESTION_MARK
%token COLON
%token SEMI_COLON
%token EQUAL
%token STAR_EQUAL
%token SLASH_EQUAL
%token PERCENTILE_EQUAL
%token PLUS_EQUAL
%token MINUS_EQUAL
%token LEFT_SHIFT_EQUAL
%token RIGHT_SHIFT_EQUAL
%token AND_EQUAL
%token XOR_EQUAL
%token OR_EQUAL
%token COMMA
%token HASH
%token SPECIAL
%token UNKNOWN

%%

primary_expression:IDENTIFIER {printf("It is an identifier\n");}
| INT_NO {printf("It is a constant\n");}
| FLOAT_NO {printf("It is a constant\n");}
| CHARACTER {printf("It is a constant\n");}
| STRING {printf("It is a string literal\n");}
| LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE {printf("It is an expression\n ");};

postfix_expression:primary_expression {printf ("postfix-expression -> primary_expression\n");}
| postfix_expression LEFT_SQUARE_BRACE expression RIGHT_SQUARE_BRACE {printf ("postfix-expression -> postfix_expression[expression]\n");}
| postfix_expression LEFT_ROUND_BRACE  argument_expression_list_opt RIGHT_ROUND_BRACE {printf ("postfix-expression -> postfix_expression(expression)\n");}
| postfix_expression PERIOD IDENTIFIER{printf ("postfix-expression.identifier\n");}
| postfix_expression ARROW IDENTIFIER{printf ("postfix-expression->identifier\n");}
| postfix_expression INCREMENT{printf ("postfix-expression++\n");}
| postfix_expression DECREMENT{printf ("postfix-expression--\n");}
| postfix_expression SPECIAL{printf ("postfix-expression.'\n");};

argument_expression_list_opt: %empty {printf("argument_expression_list ->  null\n");}
					| argument_expression_list {printf("argument_optional->argument_expression_list\n");};

argument_expression_list: assignment_expression {printf("argument_expression_list-> assignment_expression\n");}
						| argument_expression_list COMMA assignment_expression {printf("argument_expression_list->argument_expression_list   assignment_expression\n");};

unary_expression: postfix_expression {printf("unary_expression-> postfix_expression\n");}
				| INCREMENT unary_expression {printf("unary_expression-> ++unary_expression\n");}
				| DECREMENT unary_expression {printf("unary_expression-> -unary_expression\n");}
				| unary_operator cast_expression {printf("unary_expression-> unary_operator cast_expression\n");};

unary_operator: AMPERSAND {printf("unary_operator -> & \n");}
				| MULTIPLY {printf("unary_operator -> * \n");}
				| ADD {printf("unary_operator -> + \n");}
				| SUBTRACT {printf("unary_operator -> - \n");};

cast_expression: unary_expression {printf("cast_expression -> unary_expression \n");};

multiplicative_expression: cast_expression {printf("multiplicative-expression -> cast-expression\n");}
| multiplicative_expression MULTIPLY cast_expression {printf("multiplicative-expression ->multiplicative-expression * cast-expression\n");}
| multiplicative_expression DIVIDE cast_expression {printf("multiplicative-expression ->multiplicative-expression / cast-expression\n");}
| multiplicative_expression PERCENTILE cast_expression  {printf("multiplicative-expression ->multiplicative-expression mod cast-expression\n");};

additive_expression: multiplicative_expression {printf("additive_expression-> multiplicative_expression\n");}
| additive_expression ADD multiplicative_expression {printf("additive_expression-> additive-expression + multiplicative_expression\n");}
| additive_expression SUBTRACT multiplicative_expression {printf("additive_expression-> additive-expression - multiplicative_expression\n");};

shift_expression:additive_expression {printf("shift_expression -> additive_expression\n");}
| shift_expression LEFT_SHIFT additive_expression {printf("shift_expression -> shift_expression << additive_expression\n");}
| shift_expression RIGHT_SHIFT additive_expression {printf("shift_expression -> shift_expression >> additive_expression\n");};

relational_expression: shift_expression{printf("relational_expression -> shift_expression\n");}
| relational_expression LESS_THAN shift_expression {printf("relational_expression -> relational-expression < shift_expression\n");}
| relational_expression GREATER_THAN shift_expression {printf("relational_expression -> relational-expression > shift_expression\n");}
| relational_expression GREATER_THAN_EQUALTO shift_expression {printf("relational_expression -> relational-expression >= shift_expression\n");}
| relational_expression LESS_THAN_EQUALTO shift_expression {printf("relational_expression -> relational-expression <= shift_expression\n");};

equality_expression: relational_expression {printf("equality_expression -> relational_expression\n");} 
| equality_expression DOUBLE_EQUAL relational_expression {printf("equality_expression -> equality_expression == relational_expression\n");}
| equality_expression NOT_EQUAL relational_expression {printf("equality_expression -> equality_expression != relational_expression\n");};


AND_expression: equality_expression {printf("AND-expression -> equality_expression\n");}
| AND_expression AMPERSAND equality_expression {printf("AND-expression ->AND-expression & equality_expression\n");};

exclusive_or_expression: AND_expression {printf("exclusive_or_expression -> AND-expression\n");}
| exclusive_or_expression XOR AND_expression {printf("exclusive_or_expression -> exclusive_or_expression ^ AND-expression\n");};

inclusive_or_expression: exclusive_or_expression {printf("inclusive_or_expression -> exclusive_or_expression\n");}
| inclusive_or_expression OR exclusive_or_expression {printf("inclusive_or_expression -> inclusive_or_expression | exclusive_or_expression\n");};

logical_AND_expression: inclusive_or_expression {printf("logical-and-expression -> inclusive_or_expression\n");}
|  logical_AND_expression BINARY_AND inclusive_or_expression {printf("logical-and-expression ->logical-and-expression && inclusive_or_expression\n");};

logical_OR_expression: logical_AND_expression {printf("logical-or-expression ->logical-and-expression\n");}
| logical_OR_expression BINARY_OR logical_AND_expression {printf("logical-or-expression -> logical-or-expression || logical-and-expression\n");};

conditional_expression: logical_OR_expression {printf("conditional-expression -> logical-or-expression\n");}
| logical_OR_expression QUESTION_MARK expression COLON conditional_expression {printf("conditional-expression -> logical-or-expression? expression : conditional_expression\n");};

assignment_expression: conditional_expression {printf("assignment_expression_opt -> conditional-expression\n");}
| unary_expression assignment_operator assignment_expression {printf("assignment_expression -> unary_expression assignment_operator assignment-expression\n");};

assignment_operator: EQUAL {printf("assignment-operator -> =\n");}
| STAR_EQUAL {printf("assignment-operator -> *=\n");}
| SLASH_EQUAL {printf("assignment-operator -> /=\n");}
| PERCENTILE_EQUAL {printf("assignment-operator -> mod \n");}
| PLUS_EQUAL {printf("assignment-operator -> +=\n");}
| MINUS_EQUAL {printf("assignment-operator -> -=\n");}
| LEFT_SHIFT_EQUAL {printf("assignment-operator -> <<=\n");}
| RIGHT_SHIFT_EQUAL {printf("assignment-operator -> >>=\n");}
| AND_EQUAL {printf("assignment-operator -> &=\n");}
| XOR_EQUAL {printf("assignment-operator -> ^=\n");}
| OR_EQUAL {printf("assignment-operator -> |=\n");};

expression: assignment_expression {printf("expression -> assignment-expression\n");}
| expression COMMA assignment_expression {printf("expression -> expression assignment-expression\n");};

constant_expression: conditional_expression {printf("constant-expression -> conditional_expression\n");};




declaration: declaration_specifiers init_declarator_list_opt SEMI_COLON {printf("declaration -> declaration-specifiers init-declarator-list-optional\n");};

declaration_specifiers: type_specifier {printf("\ndeclaration_specs => type_spec\n");}
| type_specifier declaration_specifiers {printf("declaration-specifiers -> type-specifier declaration_specifiers_optional\n");};

init_declarator_list_opt: init_declarator_list {printf("init-declarator-list-optional -> init-declarator-list\n");} 
| %empty {printf("init-declarator-list-optional -> empty\n");} ;

init_declarator_list: init_declarator {printf("init-declarator-list -> init-declarator\n");}
| 	init_declarator_list COMMA init_declarator {printf("init-declarator-list ->init-declarator-list init-declarator\n");};

init_declarator: declarator {printf("init-declarator -> declarator\n");}
| 	declarator EQUAL initializer {printf("init-declarator -> declarator=initializer\n");};

type_specifier: VOID {printf("type-specifier -> void\n");}
| CHAR {printf("type-specifier -> char\n");}
| SHORT {printf("type-specifier -> short\n");}
| INT {printf("type-specifier -> int\n");}
| LONG {printf("type-specifier -> long\n");}
| FLOAT {printf("type-specifier -> float\n");}
| DOUBLE {printf("type-specifier -> double\n");}
| MATRIX {printf("type-specifier -> Matrix\n");}
| SIGNED {printf("type-specifier -> signed\n");}
| UNSIGNED {printf("type-specifier -> unsigned\n");}
| BOOL {printf("type-specifier -> Bool\n");};

declarator: pointer_opt direct_declarator {printf("decalrator -> pointer_opt direct_declarator\n");};

direct_declarator: IDENTIFIER {printf("direct_declarator -> identifier\n");}
| LEFT_ROUND_BRACE declarator RIGHT_ROUND_BRACE {printf("direct_declarator -> (declarator)\n");}
| direct_declarator LEFT_SQUARE_BRACE assignment_expression_opt RIGHT_SQUARE_BRACE {printf("direct_declarator -> direct-declarator[assignment-expression-optional]\n");}
| direct_declarator LEFT_ROUND_BRACE parameter_type_list RIGHT_ROUND_BRACE {printf("direct_declarator -> direct-declarator(parameter-type-list)\n");}
| direct_declarator LEFT_ROUND_BRACE identifier_list_opt RIGHT_ROUND_BRACE {printf("direct_declarator -> direct-declarator(identifier-list-optional)\n");};

pointer: MULTIPLY pointer_opt {printf("pointer -> * pointer_opt\n");};

pointer_opt: %empty {printf("pointer-optional -> empty\n");}
			| pointer {printf("pointer-optional -> pointer\n");};

parameter_type_list: parameter_list {printf("parameter_type_list-> parameter-list\n");}

parameter_list: parameter_declaration {printf("parameter_list -> parameter_declaration\n");} 
			| parameter_list COMMA parameter_declaration {printf("parameter_list -> parameter-list parameter_declaration\n");};

parameter_declaration: declaration_specifiers declarator{printf("parameter_declaration -> declaration-specifiers declarator\n");}
			| declaration_specifiers{printf("parameter_declaration -> declaration-specifiers\n");};

assignment_expression_opt: %empty {printf("assgn_expr_opt => empty\n");}
			| assignment_expression {printf("assgn_expr_opt => assgn_expr\n");};


identifier_list_opt: %empty{printf("identifier_list_optional -> empty\n");}
			|identifier_list {printf("identifier_list_optional -> identifier_list\n");};


identifier_list: IDENTIFIER {printf("identifier-list -> identifier\n");}
			|  identifier_list COMMA IDENTIFIER {printf("identifier-list ->identifier-list identifier\n");};

initializer: assignment_expression {printf("initializer -> assignment-expression\n");}
			| LEFT_CURLY_BRACE initializer_row_list RIGHT_CURLY_BRACE {printf("initializer -> initializer-row-list\n");};

initializer_row_list: initializer_row {printf("initializer_row_list-> initializer_row\n");}
			|  initializer_row_list SEMI_COLON initializer_row {printf("initializer_row_list -> initializer_row_list;initializer-row\n");};

initializer_row: designation_opt initializer {printf("initializer-row -> designation-optional initializer\n");}
			| initializer_row COMMA designation_opt initializer{printf("initializer-row ->initializer-row, designation-optional initializer\n");};

designation_opt:  %empty {printf("designation-optional -> empty\n");}
			| designation {printf("designation-optional -> designation\n");};

designation: designator_list EQUAL {printf("designation -> designation-list\n");};

designator_list: designator {printf("designation-list -> designator\n");}
			| designator_list designator {printf("designation-list -> designation-list designator\n");};

designator: LEFT_SQUARE_BRACE constant_expression RIGHT_SQUARE_BRACE {printf("designator -> [constant-expression\n]");}
			|PERIOD IDENTIFIER {printf("designator -> .identifier\n");};

statement:labeled_statement {printf("statement -> labeled statement\n");}
		 	|compound_statement {printf("statement -> compound statement\n");}
		 	|expression_statement {printf("statement -> expression statement\n");}
		 	|selection_statement {printf("statement -> selection statement\n");}
		 	|iteration_statement {printf("statement -> iteration statement\n");}
		 	|jump_statement {printf("statement -> jump statement\n");};

labeled_statement:IDENTIFIER COLON statement {printf("labeled-statement -> identifier:statement\n");}
				 |CASE constant_expression COLON statement {printf("labeled-statement ->case constant-expression:statement\n");}
				 |DEFAULT COLON statement {printf("labeled-statement ->default :statement\n");};

compound_statement: LEFT_CURLY_BRACE block_item_list_opt RIGHT_CURLY_BRACE {printf("compound-statement -> {block-item-list-optional}\n");};

block_item_list_opt: %empty {printf("block-item-list-optional -> empty\n");}
			| block_item_list {printf("block-item-list-optional -> block-item-list\n");};

block_item_list: block_item {printf("block-item-list -> block-item\n");}
				| block_item_list block_item {printf("block-item-list ->block-item-list block-item\n");};

block_item: declaration {printf("block-item -> declaration\n");}
		  	| statement {printf("block-item -> statement\n");};

expression_statement: expression_opt SEMI_COLON {printf("expression-statement-> expression-optional\n");}

selection_statement: IF LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE statement{printf("expression-statement-> if(expression)statement\n");}
			| IF LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE statement ELSE statement{printf("expression-statement-> if(expression)statement else statement\n");}
			| SWITCH LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE statement{printf("expression-statement-> switch(expression)statement\n");};

iteration_statement: WHILE LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE statement {printf("iteration-statement-> while(expression)statement\n");}
			| DO statement WHILE LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE SEMI_COLON {printf("iteration-statement-> do statement while(expression);\n");}
			| FOR LEFT_ROUND_BRACE expression_opt SEMI_COLON expression_opt SEMI_COLON expression_opt RIGHT_ROUND_BRACE statement {printf("iteration-statement -> for ( expression_optional ;expression_optional;expression_optional)statement\n");}
			| FOR LEFT_ROUND_BRACE  declaration expression_opt SEMI_COLON expression_opt RIGHT_ROUND_BRACE statement{printf("iteration-statement -> for ( declaration_optional ;expression_optional)statement\n");};

jump_statement: GOTO IDENTIFIER SEMI_COLON {printf("jump-statement -> goto indentifier\n");}
			| CONTINUE SEMI_COLON {printf("jump-statement -> continue;\n");}
			| BREAK SEMI_COLON {printf("jump-statement ->  break;\n");}
			| RETURN expression_opt SEMI_COLON {printf("jump-statement -> return expression-optional;\n");}	;

expression_opt: %empty {printf("expression_optional -> null \n");}
| expression {printf(" expression-optional -> expression\n");};

translation_unit: external_declaration {printf("translation-unit -> external-declaration\n");}
				| translation_unit external_declaration {printf("translation-unit -> translation-unit external-declaration\n");};

external_declaration: function_definition {printf("external-declaration-> function-definition\n");}
					|  declaration {printf("external-declaration-> declaration\n");};

function_definition: declaration_specifiers declarator declaration_list_opt compound_statement {printf("function-definition -> decalration-specifiers declarator declaration-list-optional compound-statement\n");} ;

declaration_list_opt: declaration_list {printf("declaration-list-optional -> declaration-list\n");}
				| %empty {printf("declaration-list-optional -> empty\n");};

declaration_list:declaration {printf("declaration-list -> declaration\n");}
				| declaration_list declaration {printf("declaration-list ->declaration-list declaration\n");};

%%

void yyerror(char *s) {
    printf("Error occured due to : %s\n",yytext);
}
