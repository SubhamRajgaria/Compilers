%{
#include <stdio.h>
#include <iostream>
extern int yylex();
#include "ass4_15CS10061_translator.h"
#include <string.h>
#include <sstream>
void yyerror(const char* s);
%}

%union{
	int intVal;
	char charVal;	
	double doubleVal;
	char* strVal;
	struct identifierAttr idAttr;
  	struct expressionAttr expAttr;
  	struct varDeclaration varAttr;
  	union initializerAttr initAttr;
  	quadEnum unaryOpAttr;
  	int instr;
  	struct listNode *NAttr;
  	struct listParam *paramAttr;
}

//%start translation_unit

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
%token <idAttr> IDENTIFIER
%token <intVal> INT_NO
%token <doubleVal> FLOAT_NO
%token <charVal> CHARACTER
%token <strVal> STRING
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
%token TRANSPOSE
%token NEWLINE
%token UNKNOWN

%type<expAttr> primary_expression;
%type<expAttr> expression expression_opt;
%type<expAttr> postfix_expression;
%type<expAttr> constant_expression;
%type<expAttr> statement;
%type<expAttr> compound_statement;
%type<expAttr> selection_statement;
%type<expAttr> iteration_statement;
%type<expAttr> jump_statement;
%type<expAttr> block_item_list block_item_list_opt;
%type<expAttr> block_item;
%type<expAttr> expression_statement;
%type<expAttr> unary_expression;
%type<expAttr> cast_expression;
%type<expAttr> multiplicative_expression;
%type<expAttr> additive_expression;
%type<expAttr> shift_expression;
%type<expAttr> relational_expression;
%type<expAttr> equality_expression;
%type<expAttr> AND_expression;
%type<expAttr> exclusive_or_expression;
%type<expAttr> inclusive_or_expression;
%type<expAttr> logical_AND_expression;
%type<expAttr> logical_OR_expression;
%type<expAttr> conditional_expression;
%type<expAttr> assignment_expression;
%type<varAttr> type_specifier;
%type<varAttr> declaration_specifiers;
%type<varAttr> direct_declarator;
%type<varAttr> declarator;
%type<varAttr> parameter_declaration;
%type<varAttr> init_declarator;
%type<initAttr> initializer;
%type<initAttr> initializer_row_list;
%type<initAttr> initializer_row;
%type<varAttr> init_declarator_list;
%type<varAttr> pointer;
%type<unaryOpAttr> unary_operator;
%type<instr> M;
%type<NAttr> N;
%type<paramAttr> argument_expression_list;


%nonassoc IF_CONFLICT;
%nonassoc ELSE;

%start translation_unit;

%%


M: %empty { $$ = nextInstr;};

N: %empty{ $$ = makelist(nextInstr);
	quad_array->emit(_GOTO,0,0,0, 0,0,0);
};


primary_expression:IDENTIFIER {
	$1.loc = currentSymTable->lookup($1.var);
	if(!($1.loc))
		$1.loc = globalSymTable->lookup($1.var);
	$$.loc = $1.loc;
	$$.type = ($1.loc)->Type;
	$$.array = $$.loc;
	$$.loc1 = 0;
}
| INT_NO {
	$$.val.intData = $1;
	$$.type = newNode(_INT,-1);
	$$.loc = currentSymTable->gentemp(_INT);
	char *arg1 = new char[10];
	sprintf(arg1,"%d",$1);
	char *res = strdup(($$.loc)->name);
	quad_array->emit(res, arg1, 0, $$.loc);	
}
| FLOAT_NO {
		$$.val.doubleData = $1;
		$$.type = newNode(_DOUBLE,-1);
		$$.loc = currentSymTable->gentemp(_DOUBLE);
	  	char *arg1 = new char[10];
	  	sprintf(arg1,"%lf",$1);
	  	char *res = strdup(($$.loc)->name);
	  	quad_array->emit(res, arg1, 0, $$.loc);	
}
| CHARACTER {
		$$.val.charData = $1;
	  	$$.type = newNode(_CHAR,-1);
	  	$$.loc = currentSymTable->gentemp(_CHAR);
	  	char *arg1 = new char[10];
	  	sprintf(arg1,"%c",$1);
	  	char *res = strdup(($$.loc)->name);
	  	quad_array->emit(res, arg1, 0, $$.loc);	
}
| STRING {printf("It is a string literal\n");}
| LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE {$$=$2;};

postfix_expression:primary_expression {$$=$1;	}
/*| postfix_expression LEFT_SQUARE_BRACE expression RIGHT_SQUARE_BRACE {
		$$.array = $1.array;
	  	$$.type = ($1.type)->right;
	  	if(!($1.loc1)){
	  		$$.loc1 = currentSymTable->gentemp(_INT);
	  		int m = compute_width(($1.type)->right);
	  		char *arg1 = strdup(($3.loc)->name);
	  		char *arg2 = new char[10];
	  		sprintf(arg2,"%d",m);
	  		char *res = strdup(($$.loc1)->name);
	  		quad_array->emit(INTO, res, arg1, arg2,$3.loc,0,$$.loc1);
	  	}
	  	else{
	  		symbolTableRow *temp = currentSymTable->gentemp(_INT);
		  	$$.loc1 = currentSymTable->gentemp(_INT);
		  	int n = compute_width($$.type);
		  	char *arg1 = strdup(($3.loc)->name);
		  	char *arg2 = new char[10];
		  	sprintf(arg2,"%d",n);
		  	char *res = strdup(temp->name);
		  	quad_array->emit(INTO, res, arg1, arg2,$3.loc,0,temp);
		  	arg1 = strdup(($1.loc1)->name);
		  	arg2 = strdup(temp->name);
		  	res = strdup(($$.loc1)->name);
		  	quad_array->emit(PLUS, res, arg1, arg2,$1.loc1,temp,$$.loc1);
	  	}
	  	flag_array = 1;
}*/
| primary_expression LEFT_SQUARE_BRACE expression RIGHT_SQUARE_BRACE LEFT_SQUARE_BRACE expression RIGHT_SQUARE_BRACE{
		$$.matrix = $1.matrix;
		cout << "Hello" << endl;
	  	$$.type = ($1.type);
	  	if($1.type->middle != _MATRIX){
	  		cout << "Not a matrix type " <<endl;
			exit(-1);
		}
	  	else{
			$$=$1;
			symbolTableRow *temp = currentSymTable->gentemp(_INT);
			char *arg2 = strdup("");
			sprintf(arg2, "%d", $1.type->cols);
			quad_array->emit(INTO, temp->name, $3.loc->name, arg2, $3.loc,  $1.loc, temp);
			quad_array->emit(PLUS, temp->name, temp->name, $6.loc->name, temp,  $6.loc, temp);
			$$.loc = temp;
			$$.loc2 = $1.loc;
			$$.type = newNode(_DOUBLE,-1);
			$$.isMatrix = true;																
		}
		flag_matrix = 1;
}
| postfix_expression LEFT_ROUND_BRACE RIGHT_ROUND_BRACE {
		int count = 0;
	  	symbolTableRow *t = globalSymTable->lookup(($1.loc)->name);
	  	$$.loc = currentSymTable->gentemp(((((t->nestedTable)->table)[count]).Type)->middle);
	  	char *res = strdup(($$.loc)->name);
	  	char *arg1 = strdup(($1.loc)->name);
	  	char *arg2 = new char[10];
	  	sprintf(arg2,"%d",count);
	  	quad_array->emit(call, res, arg1, arg2,$1.loc,0,$$.loc);
	  	$$.type = ($$.loc)->Type;
}
| postfix_expression LEFT_ROUND_BRACE argument_expression_list RIGHT_ROUND_BRACE{
		listParam *temp = $3;
	  	int count = 0;
	  	//printf("Yo\n");
	  	while(temp){
	  		char *arg1 = strdup((temp->parameter)->name);
	  		quad_array->emit(PARAM, 0, arg1, temp->parameter,0);
	  		count++;
	  		temp = temp->next;
	  	}
	  	symbolTableRow *t = globalSymTable->lookup(($1.loc)->name);
	  	$$.loc = currentSymTable->gentemp(((((t->nestedTable)->table)[count]).Type)->middle);
	  	char *res = strdup(($$.loc)->name);
	  	char *arg1 = strdup(($1.loc)->name);
	  	char *arg2 = new char[10];
	  	sprintf(arg2,"%d",count);
	  	quad_array->emit(call, res, arg1, arg2,$1.loc,0,$$.loc );
	  	$$.type = ($$.loc)->Type;
	  	//printf("Yo\n");
}
| postfix_expression PERIOD IDENTIFIER{printf ("postfix-expression.identifier\n");}
| postfix_expression ARROW IDENTIFIER{printf ("postfix-expression->identifier\n");}
| postfix_expression INCREMENT{
		$$.loc = currentSymTable->gentemp(($1.type)->middle);
	  	char *arg1 = strdup(($1.loc)->name);
	  	char *res = strdup(($$.loc)->name);
	  	quad_array->emit(res, arg1, $1.loc, $$.loc);
	  	arg1 = strdup(($1.loc)->name);
	  	char *arg2 = new char[10];
	  	sprintf(arg2,"1");
	  	res = strdup(($1.loc)->name);
	  	quad_array->emit(PLUS, res, arg1, arg2,$1.loc,0,$1.loc );
	  	$$.type = $1.type;
}
| postfix_expression DECREMENT{
		$$.loc = currentSymTable->gentemp(($1.type)->middle);
	  	char *arg1 = strdup(($1.loc)->name);
	  	char *res = strdup(($$.loc)->name);
	  	quad_array->emit(res, arg1, $1.loc, $$.loc);
	  	arg1 = strdup(($1.loc)->name);
	  	char *arg2 = new char[10];
	  	sprintf(arg2,"1");
	  	res = strdup(($1.loc)->name);
	  	quad_array->emit(MINUS, res, arg1, arg2,$1.loc,0,$1.loc );
	  	$$.type = $1.type;
}
| postfix_expression TRANSPOSE{
	$$.loc = currentSymTable->gentemp(($1.type)->middle);
	char *arg1 = strdup(($1.loc)->name);
	char *res = strdup(($$.loc)->name);
	quad_array->emit(TRANS, res, arg1, $1.loc, $$.loc);
	$$.type = $1.type;
	($$.type)->rows = $1.type->cols;
	($$.type)->cols = $1.type->rows;
};

//argument_expression_list_opt: %empty {printf("argument_expression_list ->  null\n");}
//					| argument_expression_list {printf("argument_optional->argument_expression_list\n");};

argument_expression_list: assignment_expression {
		//printf("%s\n",($1.loc)->name);
	  	$$ = makeParamList($1.loc);
}
| argument_expression_list COMMA assignment_expression {
	$$ = mergeParamList($1,makeParamList($3.loc));
};

unary_expression: postfix_expression {
		$$ = $1;
	  	if($1.loc2){
	  		$$.loc = currentSymTable->gentemp(($1.type)->middle);
	  		char *arg1 = strdup(($1.matrix)->name);
	  		char *arg2 = strdup(($1.loc2)->name);
	  		char *res = strdup(($$.loc)->name);
	  		quad_array->emit(EQ_BRACKET, res, arg1, arg2,$1.loc,$1.loc2,$$.loc);
	  		//$$.loc1 = 0;
	  	}
}
| INCREMENT unary_expression {
		if($2.isMatrix){
			$$.loc = currentSymTable->gentemp(_DOUBLE);
			$$.type = newNode(_DOUBLE,-1);
		}
		else{
			$$.loc = currentSymTable->gentemp(($2.type)->middle);
			$$.type = $2.type;
		}
	  	char *arg1 = strdup(($2.loc)->name);
	  	char *arg2 = new char[10];
	  	sprintf(arg2,"1");
	  	char *res = strdup(($2.loc)->name);
	  	quad_array->emit(PLUS, res, arg1, arg2,$2.loc,0,$2.loc);
	  	arg1 = strdup(($2.loc)->name);
	  	res = strdup(($$.loc)->name);
	  	quad_array->emit(res, arg1,$2.loc,$$.loc);
		$$.isMatrix = false;
}
| DECREMENT unary_expression {
		if($2.isMatrix)
			$$.loc = currentSymTable->gentemp(_DOUBLE);
		else
			$$.loc = currentSymTable->gentemp(($2.type)->middle);
	  	char *arg1 = strdup(($2.loc)->name);
	  	char *arg2 = new char[10];
	  	sprintf(arg2,"1");
	  	char *res = strdup(($2.loc)->name);
	  	quad_array->emit(MINUS, res, arg1, arg2,$2.loc,0,$2.loc );
	  	arg1 = strdup(($2.loc)->name);
	  	res = strdup(($$.loc)->name);
	  	quad_array->emit(res, arg1,$2.loc,$$.loc);
	  	$$.type = $2.type;
}
| unary_operator cast_expression {
		if($2.isMatrix)
			$$.loc = currentSymTable->gentemp(_DOUBLE);
		else
			$$.loc = currentSymTable->gentemp(($2.type)->middle);
	  	char *arg1 = strdup(($2.loc)->name);
	  	char *res = strdup(($$.loc)->name);
	  	quad_array->emit($1, res, arg1, 0, $2.loc,0,$$.loc);
	  	$$.type = $2.type;
		$$.isMatrix = false;
};

unary_operator: AMPERSAND {$$ = U_ADDR;}
				| MULTIPLY {$$ = U_STAR;}
				| ADD {$$ = U_PLUS;}
				| SUBTRACT {$$ = U_MINUS;};

cast_expression: unary_expression {$$=$1;};

multiplicative_expression: cast_expression {$$ = $1;
	if($1.isMatrix==true){
		$$.loc = currentSymTable->gentemp(_DOUBLE);
		quad_array->emit(EQ_BRACKET, $$.loc->name, $1.matrix->name, $1.loc->name, $1.loc, $1.loc, $$.loc);
		$$.type = newNode(_DOUBLE,-1);
		$$.isMatrix = false;
	}
}
| multiplicative_expression MULTIPLY cast_expression {
		if(typecheck($1.type, $3.type)==1){
			cout << "Hi"<<endl;
	  		$$.loc = currentSymTable->gentemp(($1.type)->middle);
	  		char *arg1 = strdup(($1.loc)->name);
	  		char *arg2 = strdup(($3.loc)->name);
	  		char *res = strdup(($$.loc)->name);
	  		quad_array->emit(INTO, res, arg1, arg2,$1.loc,$3.loc,$$.loc);
	  		$$.type = $1.type;
	  	}
		else if(typecheck($1.type, $3.type)==3)
		{
			$$.loc = currentSymTable->gentemp(_MATRIX);
	  		char *arg1 = strdup(($1.loc)->name);
	  		char *arg2 = strdup(($3.loc)->name);
	  		char *res = strdup(($$.loc)->name);
	  		quad_array->emit(INTO, res, arg1, arg2,$1.loc,$3.loc,$$.loc);
	  		$$.type = $1.type;
			($$.type)->rows = $1.type->rows;
			($$.type)->cols = $3.type->cols;	
		}
		else if(typecheck($1.type, $3.type)==4){
			($1.type)->middle = _DOUBLE;
			$1.isMatrix = false;
			symbolTableRow *temp1, *temp2;
	  			if(($1.type)->middle == _INT && ($3.type)->middle == _DOUBLE){
		  			temp1 = currentSymTable->gentemp(_DOUBLE);
		  			char *arg1 = new char[100];
		  			sprintf(arg1,"int2dbl(%s)",($1.loc)->name);
		  			char *res = strdup(temp1->name);
		  			quad_array->emit(res, arg1,$1.loc,temp1 );
		  			temp2 = currentSymTable->gentemp(_DOUBLE);
		  			arg1 = strdup(temp1->name);
		  			char *arg2 = strdup(($3.loc)->name);
		  			res = strdup(temp2->name);
		  			quad_array->emit(INTO, res, arg1, arg2,temp1,$3.loc,temp2);
		  			$$.type = $3.type;
	  			}
	  			else if(($1.type)->middle == _INT && ($3.type)->middle == _CHAR){
		  			temp1 = currentSymTable->gentemp(_INT);
		  			char *arg1 = new char[100];
		  			sprintf(arg1,"char2int(%s)",($3.loc)->name);
		  			char *res = strdup(temp1->name);
		  			quad_array->emit(res, arg1,$3.loc,temp1);
		  			temp2 = currentSymTable->gentemp(_INT);
		  			arg1 = strdup(($1.loc)->name);
		  			char *arg2 = strdup(temp1->name);
		  			res = strdup(temp2->name);
		  			quad_array->emit(INTO, res, arg1, arg2,$1.loc,temp1,temp2);
		  			$$.type = $1.type;
	  			}
			  	else if(($1.type)->middle == _DOUBLE && ($3.type)->middle == _INT){
						cout << "Doub to int"<<endl;
			  			temp1 = currentSymTable->gentemp(_DOUBLE);
			  			char *arg1 = new char[100];
			  			sprintf(arg1,"int2dbl(%s)",($3.loc)->name);
			  			char *res = strdup(temp1->name);
			  			quad_array->emit(res, arg1,$3.loc,temp1);
			  			temp2 = currentSymTable->gentemp(_DOUBLE);
			  			arg1 = strdup(($1.loc)->name);
			  			char *arg2 = strdup(temp1->name);
			  			res = strdup(temp2->name);
			  			quad_array->emit(INTO, res, arg1, arg2 ,$1.loc,temp1,temp2);
			  			$$.type = $1.type;
			  	}
			  	else if(($1.type)->middle == _CHAR && ($3.type)->middle == _INT){
			  			temp1 = currentSymTable->gentemp(_INT);
			  			char *arg1 = new char[100];
			  			sprintf(arg1,"char2int(%s)",($1.loc)->name);
			  			char *res = strdup(temp1->name);
			  			quad_array->emit(res, arg1, $1.loc,temp1);
			  			temp2 = currentSymTable->gentemp(_INT);
			  			arg1 = strdup(temp1->name);
			  			char *arg2 = strdup(($3.loc)->name);
			  			res = strdup(temp2->name);
			  			quad_array->emit(INTO, res, arg1, arg2,temp1,$3.loc,temp2 );
			  			$$.type = $3.type;
			  	}
	  	$$.loc = temp2;
		}
		else if(typecheck($1.type, $3.type)==5){
			($3.type)->middle = _DOUBLE;
			$3.isMatrix = false;
			symbolTableRow *temp1, *temp2;
	  			if(($1.type)->middle == _INT && ($3.type)->middle == _DOUBLE){
		  			temp1 = currentSymTable->gentemp(_DOUBLE);
		  			char *arg1 = new char[100];
		  			sprintf(arg1,"int2dbl(%s)",($1.loc)->name);
		  			char *res = strdup(temp1->name);
		  			quad_array->emit(res, arg1,$1.loc,temp1 );
		  			temp2 = currentSymTable->gentemp(_DOUBLE);
		  			arg1 = strdup(temp1->name);
		  			char *arg2 = strdup(($3.loc)->name);
		  			res = strdup(temp2->name);
		  			quad_array->emit(INTO, res, arg1, arg2,temp1,$3.loc,temp2);
		  			$$.type = $3.type;
	  			}
	  			else if(($1.type)->middle == _INT && ($3.type)->middle == _CHAR){
		  			temp1 = currentSymTable->gentemp(_INT);
		  			char *arg1 = new char[100];
		  			sprintf(arg1,"char2int(%s)",($3.loc)->name);
		  			char *res = strdup(temp1->name);
		  			quad_array->emit(res, arg1,$3.loc,temp1);
		  			temp2 = currentSymTable->gentemp(_INT);
		  			arg1 = strdup(($1.loc)->name);
		  			char *arg2 = strdup(temp1->name);
		  			res = strdup(temp2->name);
		  			quad_array->emit(INTO, res, arg1, arg2,$1.loc,temp1,temp2);
		  			$$.type = $1.type;
	  			}
			  	else if(($1.type)->middle == _DOUBLE && ($3.type)->middle == _INT){
						cout << "Doub to int"<<endl;
			  			temp1 = currentSymTable->gentemp(_DOUBLE);
			  			char *arg1 = new char[100];
			  			sprintf(arg1,"int2dbl(%s)",($3.loc)->name);
			  			char *res = strdup(temp1->name);
			  			quad_array->emit(res, arg1,$3.loc,temp1);
			  			temp2 = currentSymTable->gentemp(_DOUBLE);
			  			arg1 = strdup(($1.loc)->name);
			  			char *arg2 = strdup(temp1->name);
			  			res = strdup(temp2->name);
			  			quad_array->emit(INTO, res, arg1, arg2 ,$1.loc,temp1,temp2);
			  			$$.type = $1.type;
			  	}
			  	else if(($1.type)->middle == _CHAR && ($3.type)->middle == _INT){
			  			temp1 = currentSymTable->gentemp(_INT);
			  			char *arg1 = new char[100];
			  			sprintf(arg1,"char2int(%s)",($1.loc)->name);
			  			char *res = strdup(temp1->name);
			  			quad_array->emit(res, arg1, $1.loc,temp1);
			  			temp2 = currentSymTable->gentemp(_INT);
			  			arg1 = strdup(temp1->name);
			  			char *arg2 = strdup(($3.loc)->name);
			  			res = strdup(temp2->name);
			  			quad_array->emit(INTO, res, arg1, arg2,temp1,$3.loc,temp2 );
			  			$$.type = $3.type;
			  	}
	  			$$.loc = temp2;
		}
		else{
	  			symbolTableRow *temp1, *temp2;
	  			if(($1.type)->middle == _INT && ($3.type)->middle == _DOUBLE){
		  			temp1 = currentSymTable->gentemp(_DOUBLE);
		  			char *arg1 = new char[100];
		  			sprintf(arg1,"int2dbl(%s)",($1.loc)->name);
		  			char *res = strdup(temp1->name);
		  			quad_array->emit(res, arg1,$1.loc,temp1 );
		  			temp2 = currentSymTable->gentemp(_DOUBLE);
		  			arg1 = strdup(temp1->name);
		  			char *arg2 = strdup(($3.loc)->name);
		  			res = strdup(temp2->name);
		  			quad_array->emit(INTO, res, arg1, arg2,temp1,$3.loc,temp2);
		  			$$.type = $3.type;
	  			}
	  			else if(($1.type)->middle == _INT && ($3.type)->middle == _CHAR){
		  			temp1 = currentSymTable->gentemp(_INT);
		  			char *arg1 = new char[100];
		  			sprintf(arg1,"char2int(%s)",($3.loc)->name);
		  			char *res = strdup(temp1->name);
		  			quad_array->emit(res, arg1,$3.loc,temp1);
		  			temp2 = currentSymTable->gentemp(_INT);
		  			arg1 = strdup(($1.loc)->name);
		  			char *arg2 = strdup(temp1->name);
		  			res = strdup(temp2->name);
		  			quad_array->emit(INTO, res, arg1, arg2,$1.loc,temp1,temp2);
		  			$$.type = $1.type;
	  			}
			  	else if(($1.type)->middle == _DOUBLE && ($3.type)->middle == _INT){
						cout << "Doub to int"<<endl;
			  			temp1 = currentSymTable->gentemp(_DOUBLE);
			  			char *arg1 = new char[100];
			  			sprintf(arg1,"int2dbl(%s)",($3.loc)->name);
			  			char *res = strdup(temp1->name);
			  			quad_array->emit(res, arg1,$3.loc,temp1);
			  			temp2 = currentSymTable->gentemp(_DOUBLE);
			  			arg1 = strdup(($1.loc)->name);
			  			char *arg2 = strdup(temp1->name);
			  			res = strdup(temp2->name);
			  			quad_array->emit(INTO, res, arg1, arg2 ,$1.loc,temp1,temp2);
			  			$$.type = $1.type;
			  	}
			  	else if(($1.type)->middle == _CHAR && ($3.type)->middle == _INT){
			  			temp1 = currentSymTable->gentemp(_INT);
			  			char *arg1 = new char[100];
			  			sprintf(arg1,"char2int(%s)",($1.loc)->name);
			  			char *res = strdup(temp1->name);
			  			quad_array->emit(res, arg1, $1.loc,temp1);
			  			temp2 = currentSymTable->gentemp(_INT);
			  			arg1 = strdup(temp1->name);
			  			char *arg2 = strdup(($3.loc)->name);
			  			res = strdup(temp2->name);
			  			quad_array->emit(INTO, res, arg1, arg2,temp1,$3.loc,temp2 );
			  			$$.type = $3.type;
			  	}
	  	$$.loc = temp2;
	}
}
| multiplicative_expression DIVIDE cast_expression {
		if(typecheck($1.type, $3.type)==1){
	  		$$.loc = currentSymTable->gentemp(($1.type)->middle);
	  		char *arg1 = strdup(($1.loc)->name);
	  		char *arg2 = strdup(($3.loc)->name);
	  		char *res = strdup(($$.loc)->name);
	  		quad_array->emit(DIV, res, arg1, arg2,$1.loc,$3.loc,$$.loc);
	  		$$.type = $1.type;
	  	}
		else if(typecheck($1.type, $3.type)==4){
			($1.type)->middle = _DOUBLE;
			$1.isMatrix = false;
			symbolTableRow *temp1, *temp2;
	  		if(($1.type)->middle == _INT && ($3.type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$1.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(($3.loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,$3.loc,temp2);
	  			$$.type = $3.type;
	  		}
	  		else if(($1.type)->middle == _INT && ($3.type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$3.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(($1.loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,$1.loc,temp1,temp2);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->middle == _DOUBLE && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$3.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(($1.loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2, $1.loc,temp1,temp2);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->middle == _CHAR && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$1.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(($3.loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,$3.loc,temp2);
	  			$$.type = $3.type;
	  		}
	  		$$.loc = temp2;
		}
		else if(typecheck($1.type, $3.type)==5){
			($3.type)->middle = _DOUBLE;
			$3.isMatrix = false;
			symbolTableRow *temp1, *temp2;
	  		if(($1.type)->middle == _INT && ($3.type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$1.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(($3.loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,$3.loc,temp2);
	  			$$.type = $3.type;
	  		}
	  		else if(($1.type)->middle == _INT && ($3.type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$3.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(($1.loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,$1.loc,temp1,temp2);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->middle == _DOUBLE && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$3.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(($1.loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2, $1.loc,temp1,temp2);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->middle == _CHAR && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$1.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(($3.loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,$3.loc,temp2);
	  			$$.type = $3.type;
	  		}
	  		$$.loc = temp2;
		}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		if(($1.type)->middle == _INT && ($3.type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$1.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(($3.loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,$3.loc,temp2);
	  			$$.type = $3.type;
	  		}
	  		else if(($1.type)->middle == _INT && ($3.type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$3.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(($1.loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,$1.loc,temp1,temp2);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->middle == _DOUBLE && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$3.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(($1.loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2, $1.loc,temp1,temp2);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->middle == _CHAR && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$1.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(($3.loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,$3.loc,temp2);
	  			$$.type = $3.type;
	  		}
	  		$$.loc = temp2;
	  	}
}
| multiplicative_expression PERCENTILE cast_expression  {
		if(typecheck($1.type, $3.type)==1){
	  		$$.loc = currentSymTable->gentemp(($1.type)->middle);
	  		char *arg1 = strdup(($1.loc)->name);
	  		char *arg2 = strdup(($3.loc)->name);
	  		char *res = strdup(($$.loc)->name);
	  		quad_array->emit(PERCENT, res, arg1, arg2,$1.loc,$3.loc,$$.loc);
	  		$$.type = $1.type;
	  	}
		else if(typecheck($1.type, $3.type)==4){
			($1.type)->middle = _DOUBLE;
			$1.isMatrix = false;
			symbolTableRow *temp1, *temp2;
	  		if(($1.type)->middle == _INT && ($3.type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$1.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(($3.loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,$3.loc,temp2);
	  			$$.type = $3.type;
	  		}
	  		else if(($1.type)->middle == _INT && ($3.type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$3.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(($1.loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,$1.loc,temp1,temp2);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->middle == _DOUBLE && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$3.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(($1.loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2, $1.loc,temp1,temp2);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->middle == _CHAR && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$1.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(($3.loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,$3.loc,temp2);
	  			$$.type = $3.type;
	  		}
	  		$$.loc = temp2;
		}
		else if(typecheck($1.type, $3.type)==5){
			($3.type)->middle = _DOUBLE;
			$3.isMatrix = false;
			symbolTableRow *temp1, *temp2;
	  		if(($1.type)->middle == _INT && ($3.type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$1.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(($3.loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,$3.loc,temp2);
	  			$$.type = $3.type;
	  		}
	  		else if(($1.type)->middle == _INT && ($3.type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$3.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(($1.loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,$1.loc,temp1,temp2);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->middle == _DOUBLE && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$3.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(($1.loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2, $1.loc,temp1,temp2);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->middle == _CHAR && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$1.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(($3.loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,$3.loc,temp2);
	  			$$.type = $3.type;
	  		}
	  		$$.loc = temp2;
		}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		if(($1.type)->middle == _INT && ($3.type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, $1.loc, temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(($3.loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(PERCENT, res, arg1, arg2,temp1,$3.loc,temp2);
	  			$$.type = $3.type;
	  		}
	  		else if(($1.type)->middle == _INT && ($3.type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, $3.loc, temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(($1.loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(PERCENT, res, arg1, arg2,$1.loc,temp1,temp2);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->middle == _DOUBLE && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, $3.loc, temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(($1.loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(PERCENT, res, arg1, arg2,$1.loc,temp1,temp2);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->middle == _CHAR && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, $1.loc, temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(($3.loc)->name);
	  			res = strdup(temp2->name);

	  			quad_array->emit(PERCENT, res, arg1, arg2,temp1,$3.loc,temp2);
	  			$$.type = $3.type;
	  		}
	  		$$.loc = temp2;
	  	}
};

additive_expression: multiplicative_expression {$$=$1;}
| additive_expression ADD multiplicative_expression {
		cout << "Adding...."<<endl;
		if(typecheck($1.type, $3.type)==1){
			cout << $1.type <<"  " << $3.type << endl;
	  		//printf("Help me\n");
	  		$$.loc = currentSymTable->gentemp(($1.type)->middle);
	  		char *arg1 = strdup(($1.loc)->name);
	  		char *arg2 = strdup(($3.loc)->name);
	  		char *res = strdup(($$.loc)->name);
	  		quad_array->emit(PLUS, res, arg1, arg2,$1.loc,$3.loc,$$.loc );
	  		//printf("Help me\n");
	  		$$.type = $1.type;
	  	}
		else if(typecheck($1.type, $3.type)==2){
			$$.loc = currentSymTable->gentemp(($1.type)->middle);
	  		char *arg1 = strdup(($1.loc)->name);
	  		char *arg2 = strdup(($3.loc)->name);
	  		char *res = strdup(($$.loc)->name);
	  		quad_array->emit(PLUS, res, arg1, arg2,$1.loc,$3.loc,$$.loc );
	  		//printf("Help me\n");
	  		$$.type = $1.type;
		}
		else if(typecheck($1.type, $3.type)==4){
			($1.type)->middle = _DOUBLE;
			$1.isMatrix = false;
			symbolTableRow *temp1, *temp2;
	  		if(($1.type)->middle == _INT && ($3.type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$1.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(($3.loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,$3.loc,temp2);
	  			$$.type = $3.type;
	  		}
	  		else if(($1.type)->middle == _INT && ($3.type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$3.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(($1.loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,$1.loc,temp1,temp2);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->middle == _DOUBLE && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$3.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(($1.loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2, $1.loc,temp1,temp2);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->middle == _CHAR && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$1.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(($3.loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,$3.loc,temp2);
	  			$$.type = $3.type;
	  		}
	  		$$.loc = temp2;
		}
		else if(typecheck($1.type, $3.type)==5){
			($3.type)->middle = _DOUBLE;
			$3.isMatrix = false;
			symbolTableRow *temp1, *temp2;
	  		if(($1.type)->middle == _INT && ($3.type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$1.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(($3.loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,$3.loc,temp2);
	  			$$.type = $3.type;
	  		}
	  		else if(($1.type)->middle == _INT && ($3.type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$3.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(($1.loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,$1.loc,temp1,temp2);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->middle == _DOUBLE && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$3.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(($1.loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2, $1.loc,temp1,temp2);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->middle == _CHAR && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$1.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(($3.loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,$3.loc,temp2);
	  			$$.type = $3.type;
	  		}
	  		$$.loc = temp2;
		}
		else{
	  			symbolTableRow *temp1, *temp2;
	  			if(($1.type)->middle == _INT && ($3.type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$1.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(($3.loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(PLUS, res, arg1, arg2,temp1,$3.loc,temp2);
	  			$$.type = $3.type;
	  	}
	  	else if(($1.type)->middle == _INT && ($3.type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, $3.loc, temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(($1.loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(PLUS, res, arg1, arg2,$1.loc,temp1,temp2);
	  			$$.type = $1.type;
	  	}
	  	else if(($1.type)->middle == _DOUBLE && ($3.type)->middle == _INT){
				cout << "Double to Int"<<endl;
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, $3.loc, temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(($1.loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(PLUS, res, arg1, arg2,$1.loc,temp1,temp2);
	  			$$.type = $1.type;
	  	}
	  	else if(($1.type)->middle == _CHAR && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, $1.loc, temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(($3.loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(PLUS, res, arg1, arg2,temp1,$3.loc,temp2);
	  			$$.type = $3.type;
	  	}
	  	$$.loc = temp2;
	}
}
| additive_expression SUBTRACT multiplicative_expression {
		if(typecheck($1.type, $3.type)==1){
	  		//printf("Help me\n");
	  		$$.loc = currentSymTable->gentemp(($1.type)->middle);
	  		char *arg1 = strdup(($1.loc)->name);
	  		char *arg2 = strdup(($3.loc)->name);
	  		char *res = strdup(($$.loc)->name);
	  		quad_array->emit(MINUS, res, arg1,arg2,$1.loc,$3.loc,$$.loc);
	  		//printf("Help me\n");
	  		$$.type = $1.type;
	  	}
		else if(typecheck($1.type, $3.type)==2){
			$$.loc = currentSymTable->gentemp(($1.type)->middle);
	  		char *arg1 = strdup(($1.loc)->name);
	  		char *arg2 = strdup(($3.loc)->name);
	  		char *res = strdup(($$.loc)->name);
	  		quad_array->emit(MINUS, res, arg1,arg2,$1.loc,$3.loc,$$.loc);
			$$.type = $1.type;
		}
		else if(typecheck($1.type, $3.type)==4){
			($1.type)->middle = _DOUBLE;
			$1.isMatrix = false;
			symbolTableRow *temp1, *temp2;
	  		if(($1.type)->middle == _INT && ($3.type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$1.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(($3.loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,$3.loc,temp2);
	  			$$.type = $3.type;
	  		}
	  		else if(($1.type)->middle == _INT && ($3.type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$3.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(($1.loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,$1.loc,temp1,temp2);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->middle == _DOUBLE && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$3.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(($1.loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2, $1.loc,temp1,temp2);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->middle == _CHAR && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$1.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(($3.loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,$3.loc,temp2);
	  			$$.type = $3.type;
	  		}
	  		$$.loc = temp2;
		}
		else if(typecheck($1.type, $3.type)==5){
			($3.type)->middle = _DOUBLE;
			$3.isMatrix = false;
			symbolTableRow *temp1, *temp2;
	  		if(($1.type)->middle == _INT && ($3.type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$1.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(($3.loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,$3.loc,temp2);
	  			$$.type = $3.type;
	  		}
	  		else if(($1.type)->middle == _INT && ($3.type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$3.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(($1.loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,$1.loc,temp1,temp2);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->middle == _DOUBLE && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$3.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(($1.loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2, $1.loc,temp1,temp2);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->middle == _CHAR && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$1.loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(($3.loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,$3.loc,temp2);
	  			$$.type = $3.type;
	  		}
	  		$$.loc = temp2;
		}
		else{
	  			symbolTableRow *temp1, *temp2;
	  			if(($1.type)->middle == _INT && ($3.type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, $1.loc, temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(($3.loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(MINUS, res, arg1, arg2,temp1,$3.loc,temp2);
	  			$$.type = $3.type;
	  	}
	  	else if(($1.type)->middle == _INT && ($3.type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, $3.loc, temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(($1.loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(MINUS, res, arg1, arg2,$1.loc,temp1,temp2);
	  			$$.type = $1.type;
	  	}
	  	else if(($1.type)->middle == _DOUBLE && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, $3.loc, temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(($1.loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(MINUS, res, arg1, arg2,$1.loc,temp1,temp2);
	  			$$.type = $1.type;
	  	}
	  	else if(($1.type)->middle == _CHAR && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, $1.loc, temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(($3.loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(MINUS, res, arg1, arg2,temp1,$3.loc,temp2);
	  			$$.type = $3.type;
	  	}
	  		$$.loc = temp2;
	}
};

shift_expression:additive_expression {$$=$1;}
| shift_expression LEFT_SHIFT additive_expression {
	if(typecheck($1.type, $3.type)==1){
	  		$$.loc = currentSymTable->gentemp(($1.type)->middle);
	  		char *arg1 = strdup(($1.loc)->name);
	  		char *arg2 = strdup(($3.loc)->name);
	  		char *res = strdup(($$.loc)->name);
	  		quad_array->emit(SL, res, arg1, arg2,$1.loc,$3.loc,$$.loc);
	  		$$.type = $1.type;
	  	}
}
| shift_expression RIGHT_SHIFT additive_expression {
	if(typecheck($1.type, $3.type)){
	  		$$.loc = currentSymTable->gentemp(($1.type)->middle);
	  		char *arg1 = strdup(($1.loc)->name);
	  		char *arg2 = strdup(($3.loc)->name);
	  		char *res = strdup(($$.loc)->name);
	  		quad_array->emit(SR, res, arg1, arg2,$1.loc,$3.loc,$$.loc);
	  		$$.type = $1.type;
	  	}
};

relational_expression: shift_expression{$$=$1;}
| relational_expression LESS_THAN shift_expression {
		$$.TL = makelist(nextInstr);
	  	char *arg1 = strdup(($1.loc)->name);
	  	char *arg2 = strdup(($3.loc)->name);
	  	quad_array->emit(goto_LT, 0, arg1, arg2,$1.loc,$3.loc,0);
	  	$$.FL = makelist(nextInstr);
	  	quad_array->emit(_GOTO, 0, 0, 0, 0);
	  	$$.type = newNode(_BOOL,-1);	
}
| relational_expression GREATER_THAN shift_expression {
		$$.TL = makelist(nextInstr);
	  	char *arg1 = strdup(($1.loc)->name);
	  	char *arg2 = strdup(($3.loc)->name);
	  	quad_array->emit(goto_GT, 0, arg1, arg2,$1.loc,$3.loc,0);
	  	$$.FL = makelist(nextInstr);
	  	quad_array->emit(_GOTO, 0, 0, 0, 0);
	  	$$.type = newNode(_BOOL,-1);
}
| relational_expression GREATER_THAN_EQUALTO shift_expression {
		$$.TL = makelist(nextInstr);
	  	char *arg1 = strdup(($1.loc)->name);
	  	char *arg2 = strdup(($3.loc)->name);
	  	quad_array->emit(goto_GTE, 0, arg1, arg2,$1.loc,$3.loc,0);
	  	$$.FL = makelist(nextInstr);
	  	quad_array->emit(_GOTO, 0, 0, 0, 0);
	  	$$.type = newNode(_BOOL,-1);
}
| relational_expression LESS_THAN_EQUALTO shift_expression {
		$$.TL = makelist(nextInstr);
	  	char *arg1 = strdup(($1.loc)->name);
	  	char *arg2 = strdup(($3.loc)->name);
	  	quad_array->emit(goto_LTE, 0, arg1, arg2,$1.loc,$3.loc,0);
	  	$$.FL = makelist(nextInstr);
	  	quad_array->emit(_GOTO, 0, 0, 0, 0);
	  	$$.type = newNode(_BOOL,-1);
};

equality_expression: relational_expression {$$=$1;} 
| equality_expression DOUBLE_EQUAL relational_expression {
		$$.TL = makelist(nextInstr);
	  	char *arg1 = strdup(($1.loc)->name);
	  	char *arg2 = strdup(($3.loc)->name);
	  	quad_array->emit(goto_EQ, 0, arg1, arg2, $1.loc,$3.loc,0);
	  	$$.FL = makelist(nextInstr);
	  	quad_array->emit(_GOTO, 0, 0, 0, 0);
	  	$$.type = newNode(_BOOL,-1);
}
| equality_expression NOT_EQUAL relational_expression {
		$$.TL = makelist(nextInstr);
	  	char *arg1 = strdup(($1.loc)->name);
	  	char *arg2 = strdup(($3.loc)->name);
	  	quad_array->emit(goto_NEQ, 0, arg1, arg2, $1.loc,$3.loc,0);
	  	$$.FL = makelist(nextInstr);
	  	quad_array->emit(_GOTO, 0, 0, 0, 0);
	  	$$.type = newNode(_BOOL,-1);
};


AND_expression: equality_expression {$$=$1;}
| AND_expression AMPERSAND equality_expression {
		if(typecheck($1.type, $3.type)){
	  		$$.loc = currentSymTable->gentemp(($1.type)->middle);
	  		char *arg1 = strdup(($1.loc)->name);
	  		char *arg2 = strdup(($3.loc)->name);
	  		char *res = strdup(($$.loc)->name);
	  		quad_array->emit(BW_AND, res, arg1, arg2,$1.loc,$3.loc,$$.loc);
	  		$$.type = $1.type;
	  	}
};

exclusive_or_expression: AND_expression {$$=$1;}
| exclusive_or_expression XOR AND_expression {
		if(typecheck($1.type, $3.type)){
	  		$$.loc = currentSymTable->gentemp(($1.type)->middle);
	  		char *arg1 = strdup(($1.loc)->name);
	  		char *arg2 = strdup(($3.loc)->name);
	  		char *res = strdup(($$.loc)->name);
	  		quad_array->emit(BW_XOR, res, arg1, arg2,$1.loc,$3.loc,$$.loc);
	  		$$.type = $1.type;
	  	}
};

inclusive_or_expression: exclusive_or_expression {$$=$1;}
| inclusive_or_expression OR exclusive_or_expression {
		if(typecheck($1.type, $3.type)){
	  		$$.loc = currentSymTable->gentemp(($1.type)->middle);
	  		char *arg1 = strdup(($1.loc)->name);
	  		char *arg2 = strdup(($3.loc)->name);
	  		char *res = strdup(($$.loc)->name);
	  		quad_array->emit(BW_INOR, res, arg1, arg2,$1.loc,$3.loc,$$.loc);
	  		$$.type = $1.type;
	  	}
};

logical_AND_expression: inclusive_or_expression {$$=$1;}
|  logical_AND_expression BINARY_AND M inclusive_or_expression {
		backpatch($1.TL,$3);
	  	$$.FL = merge($1.FL, $4.FL);
	  	$$.TL = $4.TL;
	  	$$.type = newNode(_BOOL,-1);
};

logical_OR_expression: logical_AND_expression {$$=$1;}
| logical_OR_expression BINARY_OR M logical_AND_expression {
		backpatch($1.FL,$3);
	  	$$.TL = merge($1.TL,$4.TL);
	  	$$.FL = $4.FL;
	  	$$.type = newNode(_BOOL,-1);
};

conditional_expression: logical_OR_expression {$$=$1;}
| logical_OR_expression N QUESTION_MARK M expression N COLON M conditional_expression {
		$$.loc = currentSymTable->gentemp(($5.type)->middle);
	  	$$.type = $5.type;
	  	char *res = strdup(($$.loc)->name);
	  	char *arg1 = strdup(($9.loc)->name);
	  	quad_array->emit(res, arg1,$9.loc,$$.loc);
	  	listNode *l = makelist(nextInstr);
	  	quad_array->emit(_GOTO, 0, 0, 0,0);
	  	backpatch($6,nextInstr);
	  	res = strdup(($$.loc)->name);
	  	arg1 = strdup(($5.loc)->name);
	  	quad_array->emit(res, arg1,$5.loc,$$.loc);
	  	l = merge(l,makelist(nextInstr));
	  	quad_array->emit(_GOTO, 0, 0, 0,0);
	  	backpatch($2,nextInstr);
	  	conv2Bool(&$1);
	  	backpatch($1.TL,$4);
	  	backpatch($1.FL,$8);
	  	backpatch(l,nextInstr);
};

assignment_expression: conditional_expression {$$=$1;}
| unary_expression assignment_operator assignment_expression {
		if(typecheck($1.type,$3.type)==1){
	  		if($1.loc1){
		  		//printf("%s\n",($1.loc)->name);
		  		char *arg1 = strdup(($1.array)->name);
		  		char *arg2 = strdup(($1.loc1)->name);
		  		char *res = strdup(($3.loc)->name);
		  		quad_array->emit(BRACKET_EQ, res, arg1, arg2,$1.loc,$1.loc1,$3.loc);
	  		}
	  		else{
		  		char *arg1 = strdup(($3.loc)->name);
			  	char *res = strdup(($1.loc)->name);
			  	quad_array->emit(res, arg1,$3.loc,$1.loc);
	  		}
	  	}
		if(typecheck($1.type,$3.type)==4){
			($1.type)->middle = _DOUBLE;
			$1.isMatrix = false;
			symbolTableRow *temp1, *temp2;
	  		if(($1.type)->middle == _INT && ($3.type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"dbl2int(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, $3.loc, temp1);
	  		}
	  		else if(($1.type)->middle == _INT && ($3.type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_CHAR);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2char(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, $1.loc, temp1);
	  			
	  		}
	  		else if(($1.type)->middle == _DOUBLE && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"dbl2int(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$1.loc,temp1);
	  		}
	  		else if(($1.type)->middle == _CHAR && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_CHAR);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2char(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, $3.loc, temp1);
	  		}
		}
		else if(typecheck($1.type,$3.type)==5){
			($3.type)->middle = _DOUBLE;
			$3.isMatrix = false;
			symbolTableRow *temp1, *temp2;
	  		if(($1.type)->middle == _INT && ($3.type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"dbl2int(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, $3.loc, temp1);
	  		}
	  		else if(($1.type)->middle == _INT && ($3.type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_CHAR);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2char(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, $1.loc, temp1);
	  			
	  		}
	  		else if(($1.type)->middle == _DOUBLE && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"dbl2int(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$1.loc,temp1);
	  		}
	  		else if(($1.type)->middle == _CHAR && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_CHAR);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2char(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, $3.loc, temp1);
	  		}
		}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		if(($1.type)->middle == _INT && ($3.type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"dbl2int(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, $3.loc, temp1);
	  		}
	  		else if(($1.type)->middle == _INT && ($3.type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_CHAR);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2char(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, $1.loc, temp1);
	  			
	  		}
	  		else if(($1.type)->middle == _DOUBLE && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"dbl2int(%s)",($1.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,$1.loc,temp1);
	  		}
	  		else if(($1.type)->middle == _CHAR && ($3.type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_CHAR);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2char(%s)",($3.loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, $3.loc, temp1);
	  		}
	  		if($1.loc1){
		  		//printf("%s\n",($1.loc)->name);
		  		char *arg1 = strdup(($1.array)->name);
		  		char *arg2 = strdup(($1.loc1)->name);
		  		char *res = strdup((temp1)->name);
		  		quad_array->emit(BRACKET_EQ,res, arg1, arg2,$1.loc,$1.loc1,$3.loc );
	  		}
	  		else{
		  		char *arg1 = strdup((temp1)->name);
			  	char *res = strdup(($1.loc)->name);
			  	quad_array->emit(res, arg1,$3.loc,$1.loc);
	  		}
	  	}
};

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

expression: assignment_expression {$$=$1;}
| expression COMMA assignment_expression {printf("expression -> expression assignment-expression\n");};

constant_expression: conditional_expression {printf("constant-expression -> conditional_expression\n");};




declaration: declaration_specifiers SEMI_COLON {}
|declaration_specifiers init_declarator_list SEMI_COLON {
		if(flag1 == 1 && flag2 == 0){
	  		treeNodeType *temp = newNode(($1.type)->middle,-1);
	  		char *temp1 = strdup("retVal");
	  		symbolTableRow x(temp1,temp,0,$1.width,-1,0);
	  		tempUseSymTable->insert(x);
	  		temp = newNode(_FUNC,-1);
	  		symbolTableRow y($2.var,temp,0,0,-1,tempUseSymTable);
	  		globalSymTable->insert(y);
	  	}
	  	flag1 = 0;
	  	flag2 = 0;
	  	c = 0;
};

declaration_specifiers: type_specifier {
		printf("Declaration-> type_specifier\n");
		if(flag1 == 0 || flag2 == 0){
	  		$$.type = $1.type;
	  		$$.width = $1.width;
	  		t = $$.type;
	  		w = $$.width;
	  	}
}
| type_specifier declaration_specifiers {printf("declaration-specifiers -> type-specifier declaration_specifiers_optional\n");};

init_declarator_list: init_declarator {
	if(flag1 == 1 && flag2 == 0)
	  		$$.var = $1.var;
}
| 	init_declarator_list COMMA init_declarator {printf("init-declarator-list ->init-declarator-list init-declarator\n");};

init_declarator: declarator {
		if(flag1 == 0){
	  		treeNodeType *temp = newNode(t->middle,-1);
	  		temp = mergeNode($1.type,temp);
	  		int temp_size;
	  		if(temp->middle == _PTR)
	  			temp_size = SIZE_OF_PTR;
	  		else{
		  		switch(t->middle){
		  			case _INT : temp_size = SIZE_OF_INT;
		  					   break;
		  			case _DOUBLE : temp_size = SIZE_OF_DOUBLE;
		  						  break;
		  			case _CHAR   : temp_size = SIZE_OF_CHAR;
		  						  break;
					case _MATRIX : cout << $1.type->rows<<endl; 
							temp_size = 1;
						break; 	
	  			}
	  		}
	  		temp_size = temp_size * $1.width;
	  		symbolTableRow x($1.var,temp,0,temp_size,-1,0);
	  		currentSymTable->insert(x);
	  		//currentSymTableprint_table();
	  	}
	  	else if(flag1 == 1 && flag2 == 0){
	  		$$.var = $1.var;
	  	}
}
| 	declarator EQUAL initializer {
		if(flag1 == 0){
	  		treeNodeType *temp = newNode(t->middle,-1);
	  		temp = mergeNode($1.type,temp);
	  		void *value;
	  		int *v1;
	  		double *v2;
	  		char *v3;
			double matrixInit[10000];
	  		int temp_size;
	  		switch(t->middle){
	  			case _INT : v1 = (int *)malloc(sizeof(int));
	  					   (*v1) = $3.intData; 	
	  					   value = (void *)v1;
	  					   temp_size = SIZE_OF_INT;
	  					   break;
	  			case _DOUBLE : v2 = (double *)malloc(sizeof(double));
		  					   (*v2) = $3.doubleData;
		  					   //printf("%lf\n",$3.doubleData); 	
		  					   value = (void *)v2;
		  					   //printf("%lf\n",*v2);
		  					   temp_size = SIZE_OF_DOUBLE;
		  					   break;
	  			case _CHAR   :v3 = (char *)malloc(sizeof(char));
	  					   (*v3) = $3.charData; 	
	  					   value = (void *)v3;
	  					   temp_size = SIZE_OF_CHAR;
	  					   break;
				case _MATRIX : int i;
								/*for(i=0;i<$3.matrixI;i++)
									matrixInit[i] = ($3.entries)[i];*/
								temp_size = 1;
								value = (void *)matrixInit;
								break;
	  			default     : value = 0; 	
	  		}
	  		temp_size = temp_size * $1.width;
	  		symbolTableRow x($1.var,temp,value,temp_size,-1,0);
	  		currentSymTable->insert(x);
	  	}	
};

type_specifier: VOID {
	if(flag2 == 0 || flag1 == 0){
	  		$$.type = newNode(_VOID,-1);
	  		$$.width = 0;
	 }
}
| CHAR {
		if(flag2 == 0 || flag1 == 0){
	  		$$.type = newNode(_CHAR,-1);
	  		$$.width = 0;
	  	}	
}
| SHORT {printf("type-specifier -> short\n");}
| INT {	printf("INT\n");
		if(flag2 == 0 || flag1 == 0){
	  		$$.type = newNode(_INT,-1);
	  		$$.width = 0;
	  	}
}
| LONG {printf("type-specifier -> long\n");}
| FLOAT {printf("type-specifier -> float\n");}
| DOUBLE {
		if(flag2 == 0 || flag1 == 0){
	  		$$.type = newNode(_DOUBLE,-1);
	  		$$.width = SIZE_OF_DOUBLE;
	  	}
}
| MATRIX {
		cout << "type->matrix"<<endl;
		if(flag2 == 0 || flag1 == 0){
	  		$$.type = newNode(_MATRIX,-1);
	  		$$.width = $$.width+2*SIZE_OF_INT;
	  	}
}
| SIGNED {printf("type-specifier -> signed\n");}
| UNSIGNED {printf("type-specifier -> unsigned\n");}
| BOOL {printf("type-specifier -> Bool\n");};

declarator: pointer direct_declarator {
	printf(" Decl -> ptr delarator\n");
	if(flag1 == 0 || flag2 == 0){
	  	$$.type = mergeNode($2.type,$1.type);
	  	$$.width = $2.width;
	  	$$.var = $2.var;
	  	//printf("%d\n",($$.type)->middle);
	  	//printf("%d\n",$$.width);
	}
}
|direct_declarator{	
			printf(" Decl -> declarator\n");
			$$.type = $1.type;
	  		$$.var = $1.var;
	  		$$.width = $1.width;
};

direct_declarator: IDENTIFIER {
		cout << "Direct_decl->identifier"<<endl;
		if(flag1 == 0 || flag2 == 0){
	  		$$.var = $1.var;
		  	$$.type = 0;
		  	$$.width = 1;
		  	if(c == 0){
		  		//printf("DD->Id me load hai kya?\n");
		  		symbolTableRow *t = currentSymTable->lookup($1.var);
			  	if(t){
			  		flag2 = 1;
			  		tempUseSymTable = (t->nestedTable);	// Set flag to handle multiple declaration
			  		//printf("%s\n",(t->nestedTable)[0].table->name);
			  		//printf("%p\n",tempUseSymTable);
			  		//printf("%p\n",t->nestedTable);
			  		//if(!temp_use)
			  		//printf("Null hai\n");
			  		//printf("%d\n",temp_use->curr_length);
			  		//printf("%s\n",(temp_use->table)[0].name);
			  		//temp_use->print_table();
			  		//printf("Type casting ka load nahi hai\n");
			  	}												// (to be used in other actions)		
			  	else                                            
			  		flag2 = 0; 
			  	c++;	
		  	}
	  	}		
}
| LEFT_ROUND_BRACE declarator RIGHT_ROUND_BRACE {printf("direct_declarator -> (declarator)\n");}
| direct_declarator LEFT_SQUARE_BRACE assignment_expression RIGHT_SQUARE_BRACE {
	
	if(flag1 == 0 || flag2 == 0){
	  	treeNodeType *temp = newNode(_ARR, $3.val.intData);
	  	$$.type = mergeNode($1.type,temp);
	  	$$.width = $1.width * $3.val.intData;
	  	$$.var = $1.var;
	}
}
| direct_declarator LEFT_SQUARE_BRACE assignment_expression RIGHT_SQUARE_BRACE LEFT_SQUARE_BRACE assignment_expression RIGHT_SQUARE_BRACE  {
	printf("New Rule \n");
	if((flag1 ==0 || flag2 == 0)){
		printf("Hello\n");
		treeNodeType *temp = newNode(_MATRIX, -1);
	  	$$.type = mergeNode($1.type,temp);
		//$$.type = $1.type;
		cout << $1.width << endl;
	  	$$.width = $1.width * $3.val.intData;
	  	$$.var = $1.var;
		printf("Yes\n");
		cout << $3.val.intData<<endl;
		$$.type->rows = $3.val.intData;
		$$.type->cols = $6.val.intData;
	  	$$.width = $$.width * $6.val.intData * SIZE_OF_DOUBLE;
		$$.width = $$.width + 2*SIZE_OF_INT;
		cout << $$.width <<endl;
	  	$$.var = $1.var;
	}
	else{
		treeNodeType *temp = newNode(_ARR, $3.val.intData);
	  	$$.type = mergeNode($1.type,temp);
	  	$$.width = $1.width * $3.val.intData;
		temp = newNode(_ARR, $6.val.intData);
	  	$$.type = mergeNode($$.type,temp);
	  	$$.width = $$.width * $6.val.intData;
	  	$$.var = $1.var;
	}
}
| direct_declarator LEFT_SQUARE_BRACE RIGHT_SQUARE_BRACE {
		if(flag1 == 0 || flag2 == 0){
	  		$$.var = $1.var;
		  	$$.type = $1.type;
		  	$$.width = $1.width;
	  	}
}
| direct_declarator LEFT_ROUND_BRACE parameter_type_list RIGHT_ROUND_BRACE {
		flag1 = 1;										// Flag1 is set for variable declaration
	  	$$.var = $1.var;
	  	$$.type = 0;
	  	$$.width = 1;
}
| direct_declarator LEFT_ROUND_BRACE identifier_list RIGHT_ROUND_BRACE {}
| direct_declarator LEFT_ROUND_BRACE RIGHT_ROUND_BRACE{
		flag1 = 1;
	  	if(flag2 == 0)
	  		tempUseSymTable = createSymbolTable();
	  	$$.var = $1.var;
	  	$$.type = 0;
	  	$$.width = 1;
} 

pointer: MULTIPLY {$$.type = newNode(_PTR,-1);}
| MULTIPLY pointer{
		treeNodeType *temp = newNode(_PTR,-1);
	  	$$.type = mergeNode($2.type,temp);
};

parameter_type_list: parameter_list {printf("parameter_type_list-> parameter-list\n");};

parameter_list: parameter_declaration {
		if(flag2 == 0){										// An indication of the fact that function has not been
	  		tempUseSymTable = createSymbolTable();				// declared previously
	  		symbolTableRow x($1.var,$1.type,0,$1.width,-1,0); //Insert in sym tab of function(offset comp.in insert)
	  		tempUseSymTable->insert(x);
	  	}
} 
| parameter_list COMMA parameter_declaration {
		if(flag2 == 0){
	  		symbolTableRow x($3.var,$3.type,0,$3.width,-1,0); //Insert in sym tab of function(offset comp. in insert)
	  		tempUseSymTable->insert(x);
	  	}
};

parameter_declaration: declaration_specifiers declarator{
		if(flag2 == 0){										// An indication that function has not been declared prev
	  		$$.type = mergeNode($2.type,$1.type);
	  		$$.var = $2.var;
	  		$$.width = $1.width*$2.width;
	  	}	
}
| declaration_specifiers{printf("parameter_declaration -> declaration-specifiers\n");};

identifier_list: IDENTIFIER {printf("identifier-list -> identifier\n");}
|  identifier_list COMMA IDENTIFIER {printf("identifier-list ->identifier-list identifier\n");};

initializer: assignment_expression {$$ = $1.val;}
| LEFT_CURLY_BRACE initializer_row_list RIGHT_CURLY_BRACE {$$=$2;};

initializer_row_list: initializer_row {$$=$1;}
|  initializer_row_list SEMI_COLON initializer_row {};

initializer_row: designation initializer {}
			| initializer {$$.matrixI =0;
	//($$.entries)[$$.matrixI] = $1.doubleData;
	$$.matrixI++;}
			| initializer_row COMMA initializer{/*($$.entries)[$$.matrixI] = $3.doubleData;*/}
			|  initializer_row COMMA designation initializer{};

//designation_opt:  %empty {printf("designation-optional -> empty\n");}
//| designation {printf("designation-optional -> designation\n");};

designation: designator_list EQUAL {printf("designation -> designation-list\n");};

designator_list: designator {printf("designation-list -> designator\n");}
| designator_list designator {printf("designation-list -> designation-list designator\n");};

designator: LEFT_SQUARE_BRACE constant_expression RIGHT_SQUARE_BRACE {printf("designator -> [constant-expression\n]");}
|PERIOD IDENTIFIER {printf("designator -> .identifier\n");};

statement:labeled_statement {printf("statement -> labeled statement\n");}
|compound_statement {$$=$1;}
|expression_statement {$$=$1;}
|selection_statement {$$=$1;}
|iteration_statement {$$=$1;}
|jump_statement {$$=$1;};

labeled_statement:IDENTIFIER COLON statement {printf("labeled-statement -> identifier:statement\n");}
|CASE constant_expression COLON statement {printf("labeled-statement ->case constant-expression:statement\n");}
|DEFAULT COLON statement {printf("labeled-statement ->default :statement\n");};

compound_statement: LEFT_CURLY_BRACE block_item_list_opt RIGHT_CURLY_BRACE {$$=$2;};

block_item_list_opt: %empty {printf("block-item-list-optional -> empty\n");}
| block_item_list {$$=$1;};

block_item_list: block_item {$$=$1;}
| block_item_list M block_item {
		backpatch($1.NL,$2);
		$$ = $3;
};

block_item: declaration {printf("block-item -> declaration\n");}
| statement {$$=$1;};

expression_statement: expression SEMI_COLON {$$=$1;};

selection_statement: IF LEFT_ROUND_BRACE expression N RIGHT_ROUND_BRACE M statement N %prec IF_CONFLICT {
		backpatch($4,nextInstr);
	  	conv2Bool(&$3);
	  	backpatch($3.TL,$6);
	  	$$.NL = merge($7.NL,$3.FL);
	  	$$.NL = merge($$.NL,$8);
}
| IF LEFT_ROUND_BRACE expression N RIGHT_ROUND_BRACE M statement N ELSE M statement{
		listNode *l = 0;
	  	if(($3.type)->middle!=BOOL){
	  		l = makelist(nextInstr);
	  		quad_array->emit(_GOTO, 0, 0, 0,0);
	  	}
	  	backpatch($4,nextInstr);
	  	conv2Bool(&$3);
	  	backpatch($3.TL,$6);
	  	backpatch($3.FL,$10);
	  	listNode *temp = merge($8,$7.NL);
	  	$$.NL = merge(temp,$11.NL);
	  	$$.NL = merge($$.NL,l);
}
| SWITCH LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE statement{printf("expression-statement-> switch(expression)statement\n");};

iteration_statement: WHILE M LEFT_ROUND_BRACE expression N RIGHT_ROUND_BRACE M statement {
		char *res = new char[10];
	  	sprintf(res,"%d",$2);
	  	quad_array->emit(_GOTO, res, 0,0,0);
	  	backpatch($5,nextInstr);
	  	conv2Bool(&$4);
	  	backpatch($8.NL,$2);
	  	backpatch($4.TL,$7);
	  	$$.NL = $4.FL;
}
| DO M statement M WHILE LEFT_ROUND_BRACE expression N RIGHT_ROUND_BRACE SEMI_COLON {
		backpatch($8,nextInstr);
	  	conv2Bool(&$7);
	  	backpatch($7.TL,$2);
	  	backpatch($3.NL,$4);
	  	$$.NL = $7.FL;
}
| FOR LEFT_ROUND_BRACE expression_statement M expression_statement N M expression_opt N RIGHT_ROUND_BRACE M statement {
		backpatch($9,$4);
	  	listNode *l = makelist(nextInstr);
	  	quad_array->emit(_GOTO, 0, 0,0,0);
	  	$12.NL = merge($12.NL,l);
	  	backpatch($12.NL,$7);
	  	backpatch($6,nextInstr);
	  	conv2Bool(&$5);
	  	backpatch($5.TL,$11);
	  	$$.NL = $5.FL;
}
| FOR LEFT_ROUND_BRACE  declaration expression_statement expression_opt RIGHT_ROUND_BRACE statement{printf("iteration-statement -> for ( declaration_optional ;expression_optional)statement\n");};

jump_statement: GOTO IDENTIFIER SEMI_COLON {printf("jump-statement -> goto indentifier\n");}
| CONTINUE SEMI_COLON {printf("jump-statement -> continue;\n");}
| BREAK SEMI_COLON {printf("jump-statement ->  break;\n");}
| RETURN SEMI_COLON {
	  		quad_array->emit(_RETURN, 0, 0, 0, 0);
}
| RETURN expression  SEMI_COLON{
			char *arg1 = strdup(($2.loc)->name);
	  		quad_array->emit(RETURN_EXP, 0, arg1, $2.loc, 0);
}	;

expression_opt: %empty {printf("expression_optional -> null \n");}
| expression {$$=$1;};

translation_unit: external_declaration {printf("translation-unit -> external-declaration\n");}
				| translation_unit external_declaration {printf("translation-unit -> translation-unit external-declaration\n");};

external_declaration: function_definition {printf("external-declaration-> function-definition\n");}
					|  declaration {printf("external-declaration-> declaration\n");};

function_definition: declaration_specifiers declarator declaration_list compound_statement {}
| declaration_specifiers declarator O compound_statement{
	currentSymTable = globalSymTable;
};

declaration_list:declaration {printf("declaration-list -> declaration\n");}
				| declaration_list declaration {printf("declaration-list ->declaration-list declaration\n");};

O :%empty{
		currentSymTable = tempUseSymTable; // As we are entering the function current should point to symbol table of function
		//current->print_table();
		//printf("Yes\n");
		int i;
		char *t;
		for(i=0;i<=globalSymTable->curr_length;i++){
			if((((globalSymTable->table)[i]).nestedTable) == currentSymTable){
				t = strdup(((globalSymTable->table)[i]).name);
				break;
			}
		}
		quad_array->emit(Function, 0, t, 0,0);
		flag1 = 0;
		flag2 = 0;
		c = 0;
		//printf("Yes\n");
	;
};

%%

void yyerror(const char *s) {
    printf("Error occured due to : %s\n",s);
}
