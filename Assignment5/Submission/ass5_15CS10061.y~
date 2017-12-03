%{
#include <stdio.h>
#include <iostream>
extern int yylex();
#include "ass5_15CS10061_translator.h"
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
%type<initAttr> initializer_row;
%type<initAttr> initializer_row_list;
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


M: %empty { $$ = nextInstr;}; // will lead to next instruction

N: %empty{ $$ = makelist(nextInstr);	// lead to next instruction and print value
	quad_array->emit(_GOTO,0,0,0, 0,0,0);
};


primary_expression:IDENTIFIER {
	$1.loc = currentSymTable->lookup($1.var);	// check if in current symbol table
	if(!($1.loc))	
		$1.loc = globalSymTable->lookup($1.var);	// check if in global symbol table
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
		floats.push_back($1);	
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
| STRING {
		toc[countToc] = strdup($1);
	  	char *temp = new char[10];
	  	sprintf(temp,".LC%d",countToc);
	  	countToc++;
	  	$$.loc = new symbolTableRow(temp);
}
| LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE {$$=$2;};

postfix_expression:primary_expression {$$=$1;}
| postfix_expression LEFT_SQUARE_BRACE expression RIGHT_SQUARE_BRACE {
		$$.array = $1.array;
	  	$$.type = ($1.type)->right;
	  	// Only one square brace encountered
	  	if(!($1.loc1)){
	  		$$.loc1 = currentSymTable->gentemp(_INT);
			symbolTableRow *u = currentSymTable->gentemp(_INT);
	  		int m = compute_width(($1.type)->right);
			char *arg1 = new char[10];
			sprintf(arg1,"%d", m);
			char *res = strdup(u->name);
			quad_array->emit(res, arg1, 0, u);
	  		arg1 = strdup(($3.loc)->name);
	  		char *arg2 = strdup(u->name);
	  		res = strdup(($$.loc1)->name);
	  		// Calculate offset from base address
	  		quad_array->emit(INTO, res, arg1, arg2,$3.loc,u,$$.loc1);
	  	}
	  	// Two square braces encountered
	  	else{
	  		symbolTableRow *temp = currentSymTable->gentemp(_INT);
		  	$$.loc1 = currentSymTable->gentemp(_INT);
			symbolTableRow *u = currentSymTable->gentemp(_INT);
		  	int n = compute_width($$.type);
			char *arg1 = new char[10];
		  	sprintf(arg1,"%d",n);
		  	char *res = strdup(u->name);
			quad_array->emit(res, arg1, 0, u);
		  	arg1 = strdup(($3.loc)->name);
		  	char *arg2 = strdup(u->name);
		  	res = strdup(temp->name);
		  	quad_array->emit(INTO, res, arg1, arg2,$3.loc,u,temp);
		  	arg1 = strdup(($1.loc1)->name);
		  	arg2 = strdup(temp->name);
		  	res = strdup(($$.loc1)->name);
		  	// Calculate final offset from base address of matrix/ array
		  	quad_array->emit(PLUS, res, arg1, arg2,$1.loc1,temp,$$.loc1);
		  	//cout << "Convert kar diya "<<endl;
		  	// If it was a matrix type, convert it into double as we are now accessing one of its elements
		  	if(($1.type)->middle ==3)
	  			$$.type = newNode(_DOUBLE,-1);
	  		$$.isMatrix = true;
	  	}
	  	flag_array = 1;
}
| postfix_expression LEFT_ROUND_BRACE RIGHT_ROUND_BRACE {
		int count = 0;
	  	symbolTableRow *t = globalSymTable->lookup(($1.loc)->name);
	  	$$.loc = currentSymTable->gentemp(((((t->nestedTable)->table)[count]).Type)->middle);
	  	char *res = strdup(($$.loc)->name);
	  	char *arg1 = strdup(($1.loc)->name);
	  	char *arg2 = new char[10];
	  	sprintf(arg2,"%d",count);
	  	if((($$.loc)->Type)->middle == _VOID)
	  		quad_array->emit(call_void, 0, arg1, arg2,$1.loc,0,$$.loc);
	  	else
	  		quad_array->emit(call, res, arg1, arg2,$1.loc,0,$$.loc);
	  	$$.type = ($$.loc)->Type;
}
| postfix_expression LEFT_ROUND_BRACE argument_expression_list RIGHT_ROUND_BRACE{
		listParam *temp = $3;
	  	int count = 0;
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
	  	if((($$.loc)->Type)->middle == _VOID)
	  		quad_array->emit(call_void, 0, arg1, arg2,$1.loc,0,$$.loc);
	  	else
	  		quad_array->emit(call, res, arg1, arg2,$1.loc,0,$$.loc);
	  	$$.type = ($$.loc)->Type;
	  	//printf("Yo\n");
}
| postfix_expression PERIOD IDENTIFIER{}
| postfix_expression ARROW IDENTIFIER{}
| postfix_expression INCREMENT{
		$$.loc = currentSymTable->gentemp(($1.type)->middle);
	  	char *arg1 = strdup(($1.loc)->name);
	  	char *res = strdup(($$.loc)->name);
	  	quad_array->emit(res, arg1, $1.loc, $$.loc);
		symbolTableRow *u = currentSymTable->gentemp(_INT);
	  	arg1 = new char[10];
		sprintf(arg1,"1");
		res = strdup(u->name);
		quad_array->emit(res,arg1,0,u);
		arg1 = strdup(($1.loc)->name);
	  	char *arg2 = strdup(u->name);
	  	res = strdup(($1.loc)->name);
	  	quad_array->emit(PLUS, res, arg1, arg2,$1.loc,u,$1.loc );
	  	$$.type = $1.type;
}
| postfix_expression DECREMENT{
		$$.loc = currentSymTable->gentemp(($1.type)->middle);
	  	char *arg1 = strdup(($1.loc)->name);
	  	char *res = strdup(($$.loc)->name);
	  	quad_array->emit(res, arg1, $1.loc, $$.loc);
		symbolTableRow *u = currentSymTable->gentemp(_INT);
	  	arg1 = new char[10];
		sprintf(arg1,"1");
		res = strdup(u->name);
		quad_array->emit(res,arg1,0,u);
		arg1 = strdup(($1.loc)->name);
	  	char *arg2 = strdup(u->name);
	  	res = strdup(($1.loc)->name);
	  	quad_array->emit(MINUS, res, arg1, arg2,$1.loc,u,$1.loc );
	  	$$.type = $1.type;
}
| postfix_expression TRANSPOSE{
	symbolTableRow *temp = currentSymTable->gentemp(($1.type)->middle);
	//cout << *($1.type->left)<<" transposing" <<  *($1.type->right->left)<< endl;
	temp->Type->left = $1.type->right->left;	// Assign cols of original matrix to rows of new one
	temp->Type->right = newNode(_INT,-1);		
	temp->Type->right->left = $1.type->left;	// Assign rows of original matrix to cols of new one
	int m = *($1.type->left);
	int n = *($1.type->right->left);
	temp->size = m*n*8+8;					// Calculate size of the new matrix
	$$.loc = temp;
	//cout << temp->Type;
	$$.isMatrix = true;
	char *arg1 = strdup(($1.loc)->name);
	char *res = strdup(temp->name);
	quad_array->emit(TRANS, res, arg1, $1.loc, temp);
	$$.type = newNode(_MATRIX,-1);
	//$$.type->rows = n;
	//$$.type->cols = m;
};

//argument_expression_list_opt: %empty {printf("argument_expression_list ->  null\n");}
//					| argument_expression_list {printf("argument_optional->argument_expression_list\n");};

argument_expression_list: assignment_expression {
	  	$$ = makeParamList($1.loc);
}
| argument_expression_list COMMA assignment_expression {
	$$ = mergeParamList($1,makeParamList($3.loc));
};

unary_expression: postfix_expression {
		$$ = $1;
	  	if($1.loc1){
	  		$$.loc = currentSymTable->gentemp(($1.type)->middle);
	  		char *arg1 = strdup(($1.array)->name);
	  		char *arg2 = strdup(($1.loc1)->name);
	  		char *res = strdup(($$.loc)->name);
	  		quad_array->emit(EQ_BRACKET, res, arg1, arg2,$1.loc,$1.loc1,$$.loc);
	  		//$$.loc1 = 0;
	  	}
}
| INCREMENT unary_expression {
		$$.loc = currentSymTable->gentemp(($2.type)->middle);
		symbolTableRow *u = currentSymTable->gentemp(_INT);
		char *arg1 = new char[10];
		sprintf(arg1,"1");
		char *res = strdup(u->name);
		quad_array->emit(res,arg1, 0, u);
	  	arg1 = strdup(($2.loc)->name);
	  	char *arg2 = strdup(u->name);
	  	if($2.isMatrix){
			$$.type = newNode(_DOUBLE,-1);
			//quad_array->emit(EQ_BRACKET, $$.loc->name, $2.loc1->name, $2.loc->name, $2.loc1, $2.loc, $$.loc );
			$$.loc->Type = $$.type;
			$$.loc->size = compute_width($$.type);
			quad_array->emit(PLUS, $2.loc->name, $2.loc->name, arg2, $2.loc, u, $2.loc );
			quad_array->emit($$.loc->name,$2.loc->name, $2.loc, $$.loc);
		}
		else{
		  	res = strdup(($2.loc)->name);
		  	quad_array->emit(PLUS, res, arg1, arg2,$2.loc,u,$2.loc);
		  	arg1 = strdup(($2.loc)->name);
		  	res = strdup(($$.loc)->name);
		  	quad_array->emit(res, arg1,$2.loc,$$.loc);
		  	$$.type = $2.type;
		}
}
| DECREMENT unary_expression {
		$$.loc = currentSymTable->gentemp(($2.type)->middle);
		symbolTableRow *u = currentSymTable->gentemp(_INT);
		char *arg1 = new char[10];
		sprintf(arg1,"1");
		char *res = strdup(u->name);
		quad_array->emit(res,arg1, 0, u);
	  	arg1 = strdup(($2.loc)->name);
	  	char *arg2 = strdup(u->name);
	  	if($2.isMatrix){
			$$.type = newNode(_DOUBLE,-1);
			//quad_array->emit(EQ_BRACKET, $$.loc->name, $2.loc1->name, $2.loc->name, $2.loc1, $2.loc, $$.loc );
			$$.loc->Type = $$.type;
			$$.loc->size = compute_width($$.type);
			quad_array->emit(MINUS, $2.loc->name, $2.loc->name, arg2, $2.loc, u, $2.loc );
			quad_array->emit($$.loc->name,$2.loc->name, $2.loc, $$.loc);
		}
		else{
		  	res = strdup(($2.loc)->name);
		  	quad_array->emit(MINUS, res, arg1, arg2,$2.loc,u,$2.loc);
		  	arg1 = strdup(($2.loc)->name);
		  	res = strdup(($$.loc)->name);
		  	quad_array->emit(res, arg1,$2.loc,$$.loc);
		  	$$.type = $2.type;
		}
	  	
}
| unary_operator cast_expression {
		/*if($1 == U_ADDR){
			$$=$2;
			$$.type = newNode(_PTR,-1);
			$$.type->right = newNode(($2.type)->middle,-1);
			$$.loc = currentSymTable->gentemp(($$.type)->middle);
			if($2.isMatrix = false)
				quad_array->emit($1, ($$.loc)->name, ($2.loc)->name, 0, $2.loc,0,$$.loc);
			else{
				quad_array->emit(PLUS, $2.loc->name, $$.loc->name, $2.loc1->name, $$.loc, $2.loc1, $2.loc);
				$$.isMatrix = false;
			}
		}
		else if($1 == U_STAR){
			$$ = $2;
			$$.type = newNode($2.type->right->middle, -1);
		}
		else if($1 == U_PLUS){
			$$=$2;
			if($2.isMatrix){
				$$.isMatrix = false;
				symbolTableRow *temp = currentSymTable->gentemp(_DOUBLE);
				quad_array->emit(EQ_BRACKET, temp->name, $2.loc1->name, $2.loc->name, $2.loc1, $2.loc, temp);
				$$.loc = temp;
				$$.type = newNode(_DOUBLE,-1);
			}
			else{
				$$.loc = currentSymTable->gentemp(($2.type)->middle);
				char *arg1 = strdup(($2.loc)->name);
	  			char *res = strdup(($$.loc)->name);
	  			quad_array->emit($1, res, arg1, 0, $2.loc,0,$$.loc);
	  			$$.type = $2.type;
			}
		}
		else if($1== U_MINUS){
			$$=$2;
			if($2.isMatrix){
				$$.isMatrix = false;
				symbolTableRow *temp = currentSymTable->gentemp(_DOUBLE);
				quad_array->emit(EQ_BRACKET, temp->name, $2.loc1->name, $2.loc->name, $2.loc1, $2.loc, temp);
				$$.loc = temp;
				$$.type = newNode(_DOUBLE,-1);
			}
			else{
				$$.loc = currentSymTable->gentemp(($2.type)->middle);
				char *arg1 = strdup(($2.loc)->name);
	  			char *res = strdup(($$.loc)->name);
	  			quad_array->emit($1, res, arg1, 0, $2.loc,0,$$.loc);
	  			$$.type = $2.type;
			}
		}*/
		/*if($1== U_ADDR)
		{
			$$.loc = currentSymTable->gentemp(_PTR);
			$$.loc->Type->right = newNode(($2.type)->middle, -1);
		}
		else if(($2.type)->right)
			$$.loc = currentSymTable->gentemp((($2.type)->right)->middle);
		else	
			$$.loc = currentSymTable->gentemp(($2.type)->middle);
		//cout << $2.loc->Type->middle <<endl;//<< " " << $2.loc->Type->right->middle<<endl;
	  	char *arg1 = strdup(($2.loc)->name);
	  	char *res = strdup(($$.loc)->name);
	  	quad_array->emit($1, res, arg1, 0, $2.loc,0,$$.loc);
	  	$$.type = $2.type;*/

	  	if(($1 == U_STAR) && ((starCount > 1 && leftOrRight == 1)||(leftOrRight == 2))){
	  		$$.loc = currentSymTable->gentempComplex(($2.type)->right);
	  		char *arg1 = strdup(($2.loc)->name);
		  	char *res = strdup(($$.loc)->name);
		  	//quadArrayRow x(arg1,0,res,$1,$2.loc,0,$$.loc);
		  	quad_array->emit($1, res, arg1, 0, $2.loc,0,$$.loc);
		  	$$.type = ($$.loc)->Type;
	  		starCount--;
	  	}
	  	else if($1 == U_ADDR){
	  		treeNodeType *tu = newNode(_PTR,-1);
	  		tu->right = $2.type;
	  		$$.loc = currentSymTable->gentempComplex(tu);
	  		char *arg1 = strdup(($2.loc)->name);
		  	char *res = strdup(($$.loc)->name);
		  	//quadArrayRow x(arg1,0,res,$1,$2.loc,0,$$.loc);
		  	quad_array->emit($1, res, arg1, 0, $2.loc,0,$$.loc);
		  	$$.type = ($$.loc)->Type;
	  	}
	  	else if(!(starCount == 1 && leftOrRight == 1)){
	  		$$.loc = currentSymTable->gentemp(($2.type)->middle);
	  		char *arg1 = strdup(($2.loc)->name);
		  	char *res = strdup(($$.loc)->name);
		  	//quadArrayRow x(arg1,0,res,$1,$2.loc,0,$$.loc);
		  	quad_array->emit($1, res, arg1, 0, $2.loc,0,$$.loc);
		  	$$.type = ($$.loc)->Type;
	  	}
	  	else
	  		$$ = $2;	

};

unary_operator: AMPERSAND {$$ = U_ADDR;}
				| MULTIPLY {$$ = U_STAR;
					if(leftOrRight ==1)
						isLeft =1;
					starCount++;
				}
				| ADD {$$ = U_PLUS;}
				| SUBTRACT {$$ = U_MINUS;};

cast_expression: unary_expression {$$=$1;};

multiplicative_expression: cast_expression {$$ = $1;}
| multiplicative_expression MULTIPLY cast_expression {
		if(typecheck($1.type, $3.type)){
	  		$$.loc = currentSymTable->gentemp(($1.type)->middle);
	  		//cout << "abbey yahan aa gaya"<<endl;
	  		// Check if two matrices are getting multiplied (this is done here for matrices with both dimensions equal)
	  		if(($1.type)->middle == 3 && ($3.type)->middle == 3)
	  		{
	  			// check if cols of first matrix = rows of second matrix
	  			if(*($3.type->left) == *($1.type->right->left))
	  			{
	  				$$.loc->Type->left = $1.type->left;
	  				$$.loc->Type->right = newNode(_INT,-1);
	  				$$.loc->Type->right->left = $3.type->right->left;
	  				int m = *($1.type->left);
	  				int n = *($3.type->right->left);
	  				$$.loc->size = m*n*8+8;
	  				//cout << m << " "<<n << endl;
	  				char *res = strdup($$.loc->name);
	  				char *arg1 = (($1.loc)->name);
	  				char *arg2 = (($3.loc)->name);
	  				quad_array->emit(INTO, res, arg1, arg2,$1.loc,$3.loc,$$.loc);
	  				$$.type = newNode(_MATRIX,-1);
	  				$$.type->left = $1.type->left;
	  				$$.type->right = newNode(_INT,-1);
	  				$$.type->right->left = $3.type->right->left;
	  			}
	  			else
	  				cout << "Error in matrix multiplication"<< endl;
	  		}
	  		else{
	  			char *arg1 = strdup(($1.loc)->name);
	  			char *arg2 = strdup(($3.loc)->name);
	  			char *res = strdup(($$.loc)->name);
	  			quad_array->emit(INTO, res, arg1, arg2,$1.loc,$3.loc,$$.loc);
	  			$$.type = $1.type;	
	  		}
	  		
	  	}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		// Check if two matrices are getting multiplied (this is done here for matrices with unequal dimensions)
	  		if(($1.type)->middle == 3 && ($3.type)->middle == 3)
	  		{
	  			// check if cols of first matrix = rows of second matrix
	  			if(*($3.type->left) == *($1.type->right->left))
	  			{
	  				temp1 = currentSymTable->gentemp(_MATRIX);
	  				temp1->Type->left = $1.type->left;
	  				temp1->Type->right = newNode(_INT,-1);
	  				temp1->Type->right->left = $3.type->right->left;
	  				int m = *($1.type->left);
	  				int n = *($3.type->right->left);
	  				temp1->size = m*n*8+8;
	  				//cout << m << " "<<n << endl;
	  				char *res = strdup(temp1->name);
	  				char *arg1 = (($1.loc)->name);
	  				char *arg2 = (($3.loc)->name);
	  				quad_array->emit(INTO, res, arg1, arg2,temp1,$3.loc,temp2);
	  				$$.type = newNode(_MATRIX,-1);
	  				$$.type->left = $1.type->left;
	  				$$.type->right = newNode(_INT,-1);
	  				$$.type->right->left = $3.type->right->left;
	  			}
	  		}
	  		// Check for type conversion
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
		if(typecheck($1.type, $3.type)){
	  		$$.loc = currentSymTable->gentemp(($1.type)->middle);
	  		char *arg1 = strdup(($1.loc)->name);
	  		char *arg2 = strdup(($3.loc)->name);
	  		char *res = strdup(($$.loc)->name);
	  		quad_array->emit(DIV, res, arg1, arg2,$1.loc,$3.loc,$$.loc);
	  		$$.type = $1.type;
	  	}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		// check for type conversion
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
		if(typecheck($1.type, $3.type)){
	  		$$.loc = currentSymTable->gentemp(($1.type)->middle);
	  		char *arg1 = strdup(($1.loc)->name);
	  		char *arg2 = strdup(($3.loc)->name);
	  		char *res = strdup(($$.loc)->name);
	  		quad_array->emit(PERCENT, res, arg1, arg2,$1.loc,$3.loc,$$.loc);
	  		$$.type = $1.type;
	  	}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		// check for type conversion
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
		if(typecheck($1.type, $3.type)){
			char *arg1, *arg2, *res, *arg3, *arg4;
	  		$$.loc = currentSymTable->gentemp(($1.type)->middle);
			int m,n;
	  		// if we are adding matrices
	  		if(($1.type)->middle==3){
	  			$$.loc->Type->left = $1.type->left;	// assign rows to temporary generated
	  			$$.loc->Type->right = newNode(_INT,-1);
	  			$$.loc->Type->right->left = $1.type->right->left; // assign cols to generated temporary
	  			m = *($1.type->left);
	  			n = *($1.type->right->left);
	  			$$.loc->size = m*n*8+8;
				symbolTableRow *temp1, *temp2,*temp3;
				
				for(int i=0; i< m; i++)
				{
					
					for(int j=0; j< n; j++)
					{
						temp1 = currentSymTable->gentemp(_DOUBLE);
						temp2 = currentSymTable->gentemp(_DOUBLE);
						temp3 = currentSymTable->gentemp(_DOUBLE);
						arg4 = strdup(temp1->name);
						arg1 = strdup(($1.loc)->name);
						//printf("Hello\n");
						//printf("%s\n", arg4);
						int d = (i*j)*8+8*j;
						//printf("%d\n",d);
						arg2 = new char[10];
						sprintf(arg2, "%d", d);
						quad_array->emit(EQ_BRACKET, arg4, arg1, arg2, $1.loc, 0, temp1);
						arg3 = temp2->name;
						arg1 = strdup(($3.loc)->name);
						arg2 = new char[10];
						sprintf(arg2, "%d", d);
						quad_array->emit(EQ_BRACKET, arg3, arg1, arg2, $1.loc,0, temp2);
						res = strdup(temp3->name);
						quad_array->emit(PLUS, res, strdup(temp1->name), strdup(temp2->name),temp1,temp2,temp3 );
						arg1 = strdup(($$.loc)->name);
						arg2 = new char[10];
						sprintf(arg2, "%d", d);
						quad_array->emit(BRACKET_EQ, res, arg1, arg2, $$.loc,0, temp3);
						arg1 = strdup(($1.loc)->name);
				  		arg2 = strdup(($3.loc)->name);
				  		res = strdup(($$.loc)->name);
				  		quad_array->emit(PLUS, res, arg1, arg2,$1.loc,$3.loc,$$.loc );
					}
				}
				$$.type = $1.type;
	  		}
			else{
		  		arg1 = strdup(($1.loc)->name);
		  		arg2 = strdup(($3.loc)->name);
		  		res = strdup(($$.loc)->name);
		  		quad_array->emit(PLUS, res, arg1, arg2,$1.loc,$3.loc,$$.loc );
		  		$$.type = $1.type;
			}
	  	}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		// If adding matrix element and non-matrix element
	  		if(($1.type)->middle == 3 && ($1.type)->middle != 3){
	  			//cout << "Idhar aaya" << endl;
	  			$1.type = newNode(_DOUBLE,-1);
	  			$1.isMatrix  = false;	
	  		}
	  		else if(($1.type)->middle != 3 && ($1.type)->middle == 3){
	  			$3.type = newNode(_DOUBLE,-1);
	  			$3.isMatrix  = false;
	  		}
	  		// check for type conversion
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
				//cout << "Double to Int"<<endl;
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
		if(typecheck($1.type, $3.type)){
			char *arg1, *arg2, *res, *arg3, *arg4;
	  		$$.loc = currentSymTable->gentemp(($1.type)->middle);
			int m,n;
	  		// if we are adding matrices
	  		if(($1.type)->middle==3){
	  			$$.loc->Type->left = $1.type->left;	// assign rows to temporary generated
	  			$$.loc->Type->right = newNode(_INT,-1);
	  			$$.loc->Type->right->left = $1.type->right->left; // assign cols to generated temporary
	  			m = *($1.type->left);
	  			n = *($1.type->right->left);
	  			$$.loc->size = m*n*8+8;
				symbolTableRow *temp1, *temp2,*temp3;
				
				for(int i=0; i< m; i++)
				{
					
					for(int j=0; j< n; j++)
					{
						temp1 = currentSymTable->gentemp(_DOUBLE);
						temp2 = currentSymTable->gentemp(_DOUBLE);
						temp3 = currentSymTable->gentemp(_DOUBLE);
						arg4 = strdup(temp1->name);
						arg1 = strdup(($1.loc)->name);
						//printf("Hello\n");
						//printf("%s\n", arg4);
						int d = (i*j)*8+8*j;
						//printf("%d\n",d);
						arg2 = new char[10];
						sprintf(arg2, "%d", d);
						quad_array->emit(EQ_BRACKET, arg4, arg1, arg2, $1.loc, 0, temp1);
						arg3 = temp2->name;
						arg1 = strdup(($3.loc)->name);
						arg2 = new char[10];
						sprintf(arg2, "%d", d);
						quad_array->emit(EQ_BRACKET, arg3, arg1, arg2, $1.loc,0, temp2);
						res = strdup(temp3->name);
						quad_array->emit(MINUS, res, strdup(temp1->name), strdup(temp2->name),temp1,temp2,temp3 );
						arg1 = strdup(($$.loc)->name);
						arg2 = new char[10];
						sprintf(arg2, "%d", d);
						quad_array->emit(BRACKET_EQ, res, arg1, arg2, $$.loc,0, temp3);
						arg1 = strdup(($1.loc)->name);
				  		arg2 = strdup(($3.loc)->name);
				  		res = strdup(($$.loc)->name);
				  		quad_array->emit(MINUS, res, arg1, arg2,$1.loc,$3.loc,$$.loc );
					}
				}
				$$.type = $1.type;
	  		}
			else{
		  		arg1 = strdup(($1.loc)->name);
		  		arg2 = strdup(($3.loc)->name);
		  		res = strdup(($$.loc)->name);
		  		quad_array->emit(MINUS, res, arg1, arg2,$1.loc,$3.loc,$$.loc );
		  		$$.type = $1.type;
			}
	  	}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		// If adding matrix element and non-matrix element
	  		if(($1.type)->middle == 3 && ($1.type)->middle != 3){
	  			//cout << "Idhar aaya" << endl;
	  			$1.type = newNode(_DOUBLE,-1);
	  			$1.isMatrix  = false;	
	  		}
	  		else if (($1.type)->middle != 3 && ($1.type)->middle == 3){
	  			//cout << "2nd convert hua" << endl;
	  			$3.type = newNode(_DOUBLE,-1);
	  			$3.isMatrix  = false;
	  		}
	  		// check for type conversion
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
	if(typecheck($1.type, $3.type)){
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
	if(isLeft == 1)
	{
		char *arg1 = strdup(($3.loc)->name);
		char *res = strdup(($1.loc)->name);
		quad_array->emit(LEFT_STAR, res, arg1, 0, $3.loc, 0, $1.loc);
	}
	else{
		if(typecheck($1.type,$3.type)){
			// if matrix element is being assigned
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
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		// check for type conversion
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
	  		// if array element is assigned to some variable
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
	}
	leftOrRight = 1;
	isLeft = 0;
	starCount =0;
};

assignment_operator: EQUAL {leftOrRight = 2;}
| STAR_EQUAL {}
| SLASH_EQUAL {}
| PERCENTILE_EQUAL {}
| PLUS_EQUAL {}
| MINUS_EQUAL {}
| LEFT_SHIFT_EQUAL {}
| RIGHT_SHIFT_EQUAL {}
| AND_EQUAL {}
| XOR_EQUAL {}
| OR_EQUAL {};

expression: assignment_expression {$$=$1;}
| expression COMMA assignment_expression {};

constant_expression: conditional_expression {};




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
		if(flag1 == 0 || flag2 == 0){
	  		$$.type = $1.type;
	  		$$.width = $1.width;
	  		t = $$.type;
	  		w = $$.width;
	  	}
}
| type_specifier declaration_specifiers {};

init_declarator_list: init_declarator {
	if(flag1 == 1 && flag2 == 0)
	  		$$.var = $1.var;
}
| 	init_declarator_list COMMA init_declarator {};

init_declarator: declarator {
		if(flag1 == 0){
	  		treeNodeType *temp = newNode(t->middle,-1);
	  		temp = mergeNode($1.type,temp);
	  		int temp_flag=0;
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
		  			case _PTR : temp_size = SIZE_OF_PTR;
		  						break;
		  			case _MATRIX : temp_size = SIZE_OF_DOUBLE;
		  						temp_flag=1;
		  						break; 	
	  			}
	  		}
	  		temp_size = temp_size * $1.width;
	  		// adding the extra 8 for rows and cols 
	  		if(temp_flag==1)
	  			temp_size+=8;
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
	  		int temp_size;
	  		int temp_flag=0;
	  		vector<double> *vec;
	  		//cout << $3.doubleData << endl;
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
	  			case _MATRIX : temp_size = SIZE_OF_DOUBLE;
	  							temp_flag=1;
	  							vec = $3.p;
	  							value = (void *)vec;
	  							break;
	  			case _PTR : temp_size = SIZE_OF_PTR;
	  						break;
	  			default     : value = 0; 
	  						//cout << "Here"<< endl;
	  						break;	
	  		}
	  		temp_size = temp_size * $1.width;
	  		// adding 8 for rows and cols
	  		if(temp_flag==1)
	  			temp_size +=8;
	  		symbolTableRow x($1.var,temp,value,temp_size,-1,0);
	  		currentSymTable->insert(x);
	  		// emitting the quad for assignment of newly declared variable
	  		quad_array->emit($1.var, (currentSymTable->table[(currentSymTable->curr_length)-1].name), (currentSymTable->table), &x);
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
	  		$$.width = SIZE_OF_CHAR;
	  	}	
}
| SHORT {}
| INT {
		if(flag2 == 0 || flag1 == 0){
	  		$$.type = newNode(_INT,-1);
	  		$$.width = SIZE_OF_INT;
	  	}
}
| LONG {}
| FLOAT {}
| DOUBLE {
		if(flag2 == 0 || flag1 == 0){
	  		$$.type = newNode(_DOUBLE,-1);
	  		$$.width = SIZE_OF_DOUBLE;
	  	}
}
| MATRIX {
		if(flag2 == 0 || flag1 == 0){
	  		$$.type = newNode(_MATRIX,-1);
	  		$$.width = 2*SIZE_OF_INT;
	  	}
}
| SIGNED {}
| UNSIGNED {}
| BOOL {};

declarator: pointer direct_declarator {
	if(flag1 == 0 || flag2 == 0){
	  	$$.type = mergeNode($2.type,$1.type);
	  	$$.width = $2.width;
	  	$$.var = $2.var;
	}
}
|direct_declarator{	
			$$.type = $1.type;
	  		$$.var = $1.var;
	  		$$.width = $1.width;
};

direct_declarator: IDENTIFIER {
		if(flag1 == 0 || flag2 == 0){
	  		$$.var = $1.var;
		  	$$.type = 0;
		  	$$.width = 1;
		  	if(c == 0){
		  		symbolTableRow *t = currentSymTable->lookup($1.var);
			  	if(t){
			  		flag2 = 1;
			  		tempUseSymTable = (t->nestedTable);	// Set flag to handle multiple declaration
			  	}														
			  	else                              // (to be used in other actions)              
			  		flag2 = 0; 
			  	c++;	
		  	}
	  	}		
}
| LEFT_ROUND_BRACE declarator RIGHT_ROUND_BRACE {}
| direct_declarator LEFT_SQUARE_BRACE assignment_expression RIGHT_SQUARE_BRACE {
	
	if(flag1 == 0 || flag2 == 0){
		//if(($1.type)->middle !=3)
		//	temp = newNode(_ARR,$3.val.intData);
		//else
	  	treeNodeType *temp = newNode(_MATRIX,$3.val.intData); // considered only matrix type arrays 
	  	$$.type = mergeNode($1.type,temp);
	  	$$.width = $1.width * $3.val.intData;
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
	  		tempUseSymTable = createSymbolTable();	// Generate symbol table for new function
	  	$$.var = $1.var;
	  	$$.type = 0;
	  	$$.width = 1;
} 

pointer: MULTIPLY {$$.type = newNode(_PTR,-1);}
| MULTIPLY pointer{
		treeNodeType *temp = newNode(_PTR,-1);
	  	$$.type = mergeNode($2.type,temp);
};

parameter_type_list: parameter_list {};

parameter_list: parameter_declaration {
		if(flag2 == 0){	
			//cout << "Parameter" <<endl;									// An indication of the fact that function has not been
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
| declaration_specifiers{};

identifier_list: IDENTIFIER {}
|  identifier_list COMMA IDENTIFIER {};

initializer: assignment_expression {$$ = $1.val;}
| LEFT_CURLY_BRACE initializer_row_list RIGHT_CURLY_BRACE {$$=$2; counter++;};

initializer_row_list: initializer_row {$$=$1;}
|  initializer_row_list SEMI_COLON initializer_row {
	//cout << "Initialise ho jaa" << endl;
	vector <double> pq = *($1.p);
	vector <double> pqr = *($3.p);
	int i=0;
	// Push back elements stored in intializer row to initializer row list's vector
	for(i=0;i<pqr.size();i++){
		pq.push_back(pqr[i]);
		//cout << pqr[i];
	}
	$$.p = &pq;
};

initializer_row: designation_opt initializer {
	vector <double> pq ;
	
	pq.push_back($2.doubleData); 
	matI[counter].push_back($2.doubleData);	// push back data in the global vector of vectors
	$$.p = &pq;
}
| initializer_row COMMA designation_opt initializer{
	vector <double> pq = *($1.p);
	// considered initializer to have double data
	pq.push_back($4.doubleData);
	//cout << pq.size()<< "Size"<<endl;
	matI[counter].push_back($4.doubleData); 	// push back data in the global vector of vectors
	$$.p = &pq;
};

designation_opt:  %empty {}
| designation {};

designation: designator_list EQUAL {};

designator_list: designator {}
| designator_list designator {};

designator: LEFT_SQUARE_BRACE constant_expression RIGHT_SQUARE_BRACE {}
|PERIOD IDENTIFIER {};

statement:labeled_statement {}
|compound_statement {$$=$1;}
|expression_statement {$$=$1;}
|selection_statement {$$=$1;}
|iteration_statement {$$=$1;}
|jump_statement {$$=$1;};

labeled_statement:IDENTIFIER COLON statement {}
|CASE constant_expression COLON statement {}
|DEFAULT COLON statement {};

compound_statement: LEFT_CURLY_BRACE block_item_list_opt RIGHT_CURLY_BRACE {$$=$2;};

block_item_list_opt: %empty {}
| block_item_list {$$=$1;};

block_item_list: block_item {$$=$1;}
| block_item_list M block_item {
		backpatch($1.NL,$2);
		$$ = $3;
};

block_item: declaration {}
| statement {$$=$1;};

expression_statement: expression SEMI_COLON {$$=$1;};

selection_statement: IF LEFT_ROUND_BRACE expression N RIGHT_ROUND_BRACE M statement N %prec IF_CONFLICT { 
		// M and N augmented, IF_CONFLICT used to remove ambiguity of grammar
		backpatch($4,nextInstr); 	// backapatch N and next instruction
	  	conv2Bool(&$3);			// convert expression to bool
	  	backpatch($3.TL,$6);	//if expression is true go to statement, hence backpatch
	  	$$.NL = merge($7.NL,$3.FL);		// nextlist = merger of next statements next list and expression's false list
	  	$$.NL = merge($$.NL,$8);		// finally nextlist is merged version of previous;y generated nextlist and last N
}
| IF LEFT_ROUND_BRACE expression N RIGHT_ROUND_BRACE M statement N ELSE M statement{ 
		// M and N Augmented
		listNode *l = 0;
	  	if(($3.type)->middle!=_BOOL){
	  		l = makelist(nextInstr);
	  		quad_array->emit(_GOTO, 0, 0, 0,0);
	  	}
	  	backpatch($4,nextInstr); 
	  	conv2Bool(&$3);		// generate goto
	  	backpatch($3.TL,$6);	// if expression is true check for next instruction before else
	  	backpatch($3.FL,$10);	// if expression is false check for next instruction after else
	  	listNode *temp = merge($8,$7.NL);	// merge nextlist of statement inside if and N after if
	  	$$.NL = merge(temp,$11.NL);		// nextlist of final expression = merged version of temp and nextlist of last statement
	  	$$.NL = merge($$.NL,l);		
}
| SWITCH LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE statement{};

iteration_statement: WHILE M LEFT_ROUND_BRACE expression N RIGHT_ROUND_BRACE M statement {
		// M and N augmented grammar 
		char *res = new char[10];
	  	sprintf(res,"%d",$2);
	  	quad_array->emit(_GOTO, res, 0,0,0);
	  	backpatch($5,nextInstr);	// backpatch N
	  	conv2Bool(&$4);			// convert expression to bool
	  	backpatch($8.NL,$2);	// backpatch statement's next list and first M
	  	backpatch($4.TL,$7);	// if expression is true go to statement
	  	$$.NL = $4.FL;			// next list  = falselist of expression
}
| DO M statement M WHILE LEFT_ROUND_BRACE expression N RIGHT_ROUND_BRACE SEMI_COLON {
		// M and N augmented grammar 
		backpatch($8,nextInstr);
	  	conv2Bool(&$7);		// convert condition to bool type and generate gotos
	  	backpatch($7.TL,$2);	// if condition is true go back to 2 and execute again
	  	backpatch($3.NL,$4);	// next list of statement backpatched with M 
	  	$$.NL = $7.FL;			// nextlist =  falselist of expression in while
}
| FOR LEFT_ROUND_BRACE expression_statement M expression_statement N M expression_opt N RIGHT_ROUND_BRACE M statement {
		// M and N augmented grammar 
		backpatch($9,$4);	// backpatch N with first M, to see that after updation we do the condition check
	  	listNode *l = makelist(nextInstr);
	  	quad_array->emit(_GOTO, 0, 0,0,0);
	  	$12.NL = merge($12.NL,l);	// next list of statement is backpatched with nextInstruction
	  	backpatch($12.NL,$7);	// backpatch nextlist of statement with second M, i.e., after executing statement do updation
	  	backpatch($6,nextInstr);	// backpatch N with next instruction
	  	conv2Bool(&$5);			// condition check is in second expression
	  	backpatch($5.TL,$11);	// if expression is true to goto next instruction
	  	$$.NL = $5.FL;			// next list is falselist of expression
}
| FOR LEFT_ROUND_BRACE  declaration expression_statement expression_opt RIGHT_ROUND_BRACE statement{};

jump_statement: GOTO IDENTIFIER SEMI_COLON {}
| CONTINUE SEMI_COLON {}
| BREAK SEMI_COLON {}
| RETURN SEMI_COLON {quad_array->emit(_RETURN, 0, 0, 0, 0);}
| RETURN expression  SEMI_COLON{
			char *arg1 = strdup(($2.loc)->name);
	  		quad_array->emit(RETURN_EXP, 0, arg1, $2.loc, 0);
}	;

expression_opt: %empty {}
| expression {$$=$1;};

translation_unit: external_declaration {}
				| translation_unit external_declaration {};

external_declaration: function_definition {}
					|  declaration {};

function_definition: declaration_specifiers declarator declaration_list compound_statement {}
| declaration_specifiers declarator O compound_statement{
	// O augmented
	currentSymTable = globalSymTable;
};

declaration_list:declaration {}
				| declaration_list declaration {};

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
		quad_array->emit(Function, 0, t, 0,((globalSymTable->table)+i),0,0);
		flag1 = 0;
		flag2 = 0;
		c = 0;
		//printf("Yes\n");
};

%%

void yyerror(const char *s) {
    printf("Error occured due to : %s\n",s);
}
