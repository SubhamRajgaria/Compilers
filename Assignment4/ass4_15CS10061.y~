%{
#include "ass4_15CS10061_translator.h"
//#include "ass4_15CS10061_translator.cxx"
#include <stdio.h>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <iostream>
extern int yylex();
void yyerror(char *s);

using namespace std;

%}

%union{
	int intVal;
	double doubleVal;
	char charVal;
	int instruction;
	//std::vector<int> N_attr;
	std::string *strVal;
	expr* express;
	decl* declarat;
	idf* id;
	//std::vector<int> nextList;
	std::vector <expr *> *args;
	initialVal initialise;
}

%start primary_expression

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
%token <id> IDENTIFIER
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

%type <express> primary_expression //postfix_expression unary_expression expression
/*%type <express> cast_expression multiplicative_expression additive_expression
%type <express> shift_expression relational_expression equality_expression
%type <express> AND_expression exclusive_or_expression inclusive_or_expression
%type <express> logical_AND_expression logical_OR_expression conditional_expression
%type <express> assignment_expression expression constant_expression
%type <express> expression_statement expression_opt assignment_expression_opt 



%type <declarat> declaration declaration_specifiers  
%type <declarat> type_specifier pointer pointer_opt
%type <declarat> declaration_list declaration_list_opt
%type <declarat> init_declarator_list_opt init_declarator_list init_declarator
%type <declarat> declarator direct_declarator initializer_row_list
%type <declarat> parameter_declaration

%type <initialiser> initializer

%type <charVal> unary_operator
%type <args> argument_expression_list_opt argument_expression_list
%type <instruction> M
%type <N_attr> N

%type <express> statement labeled_statement compound_statement
%type <express> iteration_statement jump_statement block_item_list_opt
%type <express> block_item_list block_item selection_statement

%left '+' '-'
%left '*' '/'
%nonassoc UNARY
%nonassoc IF_CONFLICT;
%nonassoc ELSE_KEYWORD;*/

%%

/*M 
	: {
		$$ = quad->nextInstr;
	  };

N: 
	{
	$$ = makelist(quad->nextInstr);
	quadEntry q(OP_GOTO, "", "", "");
	quad->emit(q);
	};*/



primary_expression:IDENTIFIER {
	if(currSymTable->isPresent(*($1->strVal)))
		$$->loc = currSymTable->lookUp(*($1->strVal));
	else
		$$->loc = globalSymTable->lookUp(*($1->strVal));
	$$->t = $$->loc->t;
	$$->array = $$->loc;
	//$$->trueList = NULL;
	//$$->falseList = NULL;
	//$$.strLabel = -1;
}
| INT_NO {
	$$->loc= currSymTable->genTemp(new type(_INT));
	$$->t = $$->loc->t;
	//$$->trueList = NULL;
    //$$->falseList = NULL;
    $$->init.intVal = $1;
    // update the initial value of the temp variable generated
    currSymTable->update($$->loc, $$->init);
    // emit a quad assigning the value
	quadEntry q(OP_COPY, $$->loc->name, $1);
   	quad->emit(q);
   	//$$->strLabel = -1;
}
| FLOAT_NO {
	$$->loc= currSymTable->genTemp(new type(_DOUBLE));
	$$->t = $$->loc->t;
	//$$->trueList = NULL;
    //$$->falseList = NULL;
    $$->init.doubleVal = $1;
    // update the initial value of the temp variable generated
    currSymTable->update($$->loc, $$->init);
    // emit a quad assigning the value
	quadEntry q(OP_COPY, $$->loc->name, $1);
   	quad->emit(q);
   	//$$->strLabel = -1;
}
| CHARACTER {
	$$->loc= currSymTable->genTemp(new type(_CHAR));
	$$->t = $$->loc->t;
	//$$->trueList = NULL;
    //$$->falseList = NULL;
    $$->init.charVal = int($1);
    // update the initial value of the temp variable generated
    currSymTable->update($$->loc, $$->init);
    // emit a quad assigning the value
	quadEntry q(OP_COPY, $$->loc->name, $1);
   	quad->emit(q);
   	//$$->strLabel = -1;
}
| STRING {
//this is not supported
}
/*| LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE {
	$$= $2;
	}*/
	;

/*postfix_expression:primary_expression {
$$ = $1;
isArrayType = false;}
| postfix_expression LEFT_SQUARE_BRACE expression RIGHT_SQUARE_BRACE {
	$$.array = $1.array
	$$->t = $1->t;
	if(!($$.isArrayType)){
		$$.isArrayType= true;
		$$.arrayLoc = current->genTemp(_INT);
		int m = $1->t->next->getSize();
		quadEntry q (OP_MUL, $$->loc->name, $3->loc->name, i2s(m));
		quad->emit(q);
	}
	else{
		symTabEntry *temp = currSymTable->genTemp(_INT);
		int m = $1->t->next->getSize();
		quadEntry q (OP_MUL, temp->name, $3->loc->name, i2s(m));
		quad->emit(q);
		quadEntry r (OP_PLUS, $$->loc->name, $$->loc->name, temp->name);
		quad->emit(r);
	}
	$$->t = $1->t->next;
}
| postfix_expression LEFT_ROUND_BRACE  argument_expression_list_opt RIGHT_ROUND_BRACE {
	// check if this is a valid function
	// check the types of the parameters
	$$ = $1;
	if($1->loc->nestedTable == NULL || !checkParams($1, $3)) {
		char err[100];
		sprintf(err, "Error in calling %s. Parameters type do not match.\n", $1->loc->name.c_str());
		yyerror(err);
		exit(1);
	} else {
		// output all the parameters in the quad
		for(int i = (int)$3->size() - 1; i >= 0; --i) {
			if((*$3)[i]->isString) {
				string label = ".LC" + i2s((*$3)[i]->strLabel);
				quad->emit(quadEntry(OP_PARAM, label));
			} else {
				quadEntry q(OP_PARAM, (*$3)[i]->loc->name)
				quad->emit(q);
			}
		}
		string buff;
		buff = buff+ $3->size();
		$$->loc = currSymTable->genTemp($1->loc->nestedTable->entries[0]->t);
		$$->t = $$->loc->t; 
		$$->trueList = NULL;
		$$->falseList = NULL;
		$$.isArrayType = false;
		// call the function
		quadEntry q(OP_CALL, $$->loc->name, $1->loc->name, buff)
		quad->emit(q);
	}
}
| postfix_expression PERIOD IDENTIFIER{
	// not supported
	 }
| postfix_expression ARROW IDENTIFIER{
	// not supported
	}
| postfix_expression INCREMENT{
	$$->loc = currSymTable->genTemp($1->t);
	quadEntry q(OP_COPY, $$->loc->name, $1->loc->name);
	quad->emit(q);
	quadEntry r(OP_ADD, $1->loc->name, $1->loc->name,"1");
	quad->emit(r);
	$$->t = $1->t;
}
| postfix_expression DECREMENT{
	$$->loc = currSymTable->genTemp($1->t);
	quadEntry q(OP_COPY, $$->loc->name, $1->loc->name);
	quad->emit(q);
	quadEntry r(OP_SUB, $1->loc->name, $1->loc->name,"1");
	quad->emit(r);
	$$->t = $1->t;
}
| postfix_expression TRANSPOSE{
	$$->loc = currSymTable->genTemp($1->t);
	quadEntry q(OP_COPY, $$->loc->name, $1->loc->name);
	quad->emit(q);
	quadEntry r(OP_SUB, $1->loc->name, $1->loc->name,"1");
	quad->emit(r);
	$$->t = $1->t;
	$$->t->no_rows = $1->t->no_cols;
	$$->t->no_cols = $1->t->no_rows;	
};

argument_expression_list_opt: %empty {$$ = new vector<expr *>();}
| argument_expression_list {$$ = $1;};

argument_expression_list: assignment_expression {
	$$ = new vector<expr *>();
	$$->push_back(new expr($1));}
| argument_expression_list COMMA assignment_expression {
	$$ = $1;
	$$->push_back(new expr($3));}
;

unary_expression: postfix_expression {$$=$1;}
| INCREMENT unary_expression {
	$$->loc = currSymTable->genTemp($2->t);
	quadEntry q(OP_COPY, $$->loc->name, $2->loc->name);
	quad->emit(q);
	quadEntry r(OP_ADD, $2->loc->name, $2->loc->name,"1");
	quad->emit(r);
	$$->t = $2->t;
}
| DECREMENT unary_expression {
	$$->loc = currSymTable->genTemp($2->t);
	quadEntry q(OP_COPY, $$->loc->name, $2->loc->name);
	quad->emit(q);
	quadEntry r(OP_SUB, $2->loc->name, $2->loc->name,"1");
	quad->emit(r);
	$$->t = $2->t;
}
| unary_operator cast_expression {
	$$->loc = currSymTable->genTemp($2->t);
	quadEntry q ( $1, $$->loc->name, $2->loc->name);
	quad->emit(q); 
};

unary_operator: AMPERSAND {$$ = OP_BITWISE_AND;}
				| MULTIPLY {$$ = OP_MUL;}
				| ADD {$$ = OP_ADD;}
				| SUBTRACT {$$ = OP_SUB;};

cast_expression: unary_expression {$$ = $1;};

multiplicative_expression: cast_expression {$$=$1;}
| multiplicative_expression MULTIPLY cast_expression {
	$$ = $1;
	typeCheck(&($1), &($3));
	$$->loc = currSymTable->genTemp($3->t);
	$$->t = $$->loc->t;
	quadEntry q(OP_MUL, $$->loc->name, $1->loc->name, $3->loc->name));
	quad->emit(q);
}
| multiplicative_expression DIVIDE cast_expression {
	$$ = $1;
	typeCheck(&($1), &($3));
	$$->loc = currSymTable->genTemp($3->t);
	$$->t = $$->loc->t;
	quadEntry q(OP_DIV, $$->loc->name, $1->loc->name, $3->loc->name));
	quad->emit(q);
}
| multiplicative_expression PERCENTILE cast_expression  {
	$$ = $1;
	typeCheck(&($1), &($3));
	$$->loc = currSymTable->genTemp($3->t);
	$$->t = $$->loc->t;
	quadEntry q(OP_MOD, $$->loc->name, $1->loc->name, $3->loc->name));
	quad->emit(q);
};

additive_expression: multiplicative_expression {$$ = $1;}
| additive_expression ADD multiplicative_expression {
	$$ = $1;
	typeCheck(&($1), &($3));
	$$->loc = currSymTable->genTemp($3->t);
	$$->t = $$->loc->t;
	quadEntry q(OP_ADD, $$->loc->name, $1->loc->name, $3->loc->name));
	quad->emit(q);
}
| additive_expression SUBTRACT multiplicative_expression {
	$$ = $1;
	typeCheck(&($1), &($3));
	$$->loc = currSymTable->genTemp($3->t);
	$$->t = $$->loc->t;
	quadEntry q(OP_SUB, $$->loc->name, $1->loc->name, $3->loc->name));
	quad->emit(q);
};

shift_expression:additive_expression {$$=$1;}
| shift_expression LEFT_SHIFT additive_expression {
	$$ = $1;
	typeCheck(&($1), &($3));
	$$->loc = currSymTable->genTemp($1->t);
	$$->t = $$->loc->t;
	quadEntry q(OP_SHL, $$->loc->name, $1->loc->name, $3->loc->name));
	quad->emit(q);
}
| shift_expression RIGHT_SHIFT additive_expression {
	$$ = $1;
	typeCheck(($1), ($3));
	$$->loc = currSymTable->genTemp($1->t);
	$$->t = $$->loc->t;
	quadEntry q(OP_SHR, $$->loc->name, $1->loc->name, $3->loc->name));
	quad->emit(q);	
};

relational_expression: shift_expression{$$=$1;}
| relational_expression LESS_THAN shift_expression {
	typeCheck(($1), ($3));
	$$->t = new type(_BOOL);
	$$->trueList = makelist(quad->nextInstr);
	quadEntry q(OP_LT, "", $1->loc->name, $3->loc->name);
	quad->emit(q);
	$$->falseList = makelist(quad->nextInstr);
	quadEntry r(OP_GOTO, "");
	quad->emit(r);
}
| relational_expression GREATER_THAN shift_expression {
	typeCheck(($1), ($3));
	$$->t = new type(_BOOL);
	$$->trueList = makelist(quad->nextInstr);
	quadEntry q(OP_GT, "", $1->loc->name, $3->loc->name);
	quad->emit(q);
	$$->falseList = makelist(quad->nextInstr);
	quadEntry r(OP_GOTO, "");
	quad->emit(r);
}
| relational_expression GREATER_THAN_EQUALTO shift_expression {
	typeCheck(($1), ($3));
	$$->t = new type(_BOOL);
	$$->trueList = makelist(quad->nextInstr);
	quadEntry q(OP_GTE, "", $1->loc->name, $3->loc->name);
	quad->emit(q);
	$$->falseList = makelist(quad->nextInstr);
	quadEntry r(OP_GOTO, "");
	quad->emit(r);	
}
| relational_expression LESS_THAN_EQUALTO shift_expression {
	typeCheck(&($1), &($3));
	$$->t = new type(_BOOL);
	$$->trueList = makelist(quad->nextInstr);
	quadEntry q(OP_LTE, "", $1->loc->name, $3->loc->name);
	quad->emit(q);
	$$->falseList = makelist(quad->nextInstr);
	quadEntry r(OP_GOTO, "");
	quad->emit(r);	
};

equality_expression: relational_expression {$$=$1;} 
| equality_expression DOUBLE_EQUAL relational_expression {
	typeCheck(&($1), &($3));
	$$->t = new type(_BOOL);
	$$->trueList = makelist(quad->nextInstr);
	quadEntry q(OP_EQUAL, "", $1->loc->name, $3->loc->name);
	quad->emit(q);
	$$->falseList = makelist(quad->nextInstr);
	quadEntry r(OP_GOTO, "");
	quad->emit(r);		
}
| equality_expression NOT_EQUAL relational_expression {
	typeCheck(&($1), &($3));
	$$->t = new type(_BOOL);
	$$->trueList = makelist(quad->nextInstr);
	quadEntry q(OP_NOT_EQUAL, "", $1->loc->name, $3->loc->name);
	quad->emit(q);
	$$->falseList = makelist(quad->nextInstr);
	quadEntry r(OP_GOTO, "");
	quad->emit(r);	
};


AND_expression: equality_expression {$$=$1;}
| AND_expression AMPERSAND equality_expression {
	typeCheck(&($1), &($3));
	$$->loc = currSymTable->genTemp($1->t);
	quadEntry q(OP_BIT_AND, $$->loc->name, $1->loc->name, $3->loc->name);
	quad->emit(q);
};

exclusive_or_expression: AND_expression {$$=$1;}
| exclusive_or_expression XOR AND_expression {
	typeCheck(&($1), &($3));
	$$->loc = currSymTable->genTemp($1->t);
	quadEntry q(OP_BIT_XOR, $$->loc->name, $1->loc->name, $3->loc->name);
	quad->emit(q);
};

inclusive_or_expression: exclusive_or_expression {$$=$1;}
| inclusive_or_expression OR exclusive_or_expression {
	typeCheck(&($1), &($3));
	$$->loc = currSymTable->genTemp($1->t);
	quadEntry q(OP_BIT_OR, $$->loc->name, $1->loc->name, $3->loc->name);
	quad->emit(q);
};

logical_AND_expression: inclusive_or_expression {$$=$1;}
|  logical_AND_expression BINARY_AND M inclusive_or_expression {
	backPatch($1->trueList,$3);
	$$->falseList = merge($1->falseList, $4->falseList);
	$$->trueList = $4->trueList;
	$$->t = new type(_BOOL);
};

logical_OR_expression: logical_AND_expression {$$=$1;}
| logical_OR_expression BINARY_OR M logical_AND_expression {
	backPatch($1->falseList,$3);
	$$->trueList = merge($1->trueList, $4->trueList);
	$$->falseList = $4->falseList;
	$$->t = new type(_BOOL);
};

conditional_expression: logical_OR_expression {$$=$1;}
| logical_OR_expression N QUESTION_MARK M expression N COLON M conditional_expression {
	$$->loc = currSymTable->genTemp($5->t);
	$$->t = $5->t;
	quadEntry q(OP_COPY, $$->loc->name, $9->loc->name, "");
	quad->emit(q);
	vector<int> *l = makeList(quad->nextInstr);
	quadEntry q(OP_GOTO,"");
	quad->emit(q);
	backPatch($6,quad->nextInstr);
	quadEntry r(OP_COPY, $$->loc->name, $5->loc->name, "");
	quad->emit(r);
	l = merge(l, makelist(nextInstr));
	quadEntry s(OP_GOTO,"");
	quad->emit(s);
	backPatch($2,quad->nextInstr);
	conv2Bool(&$1);
	backPatch($1->trueList,$4);
	backPatch($1->falseList,$8);
	backPatch(l,quad->nextInstr);
};

assignment_expression: conditional_expression {$$=$1;}
| unary_expression assignment_operator assignment_expression {
	typecheck(&($1) , &($3));
	if($1.isArrayType)
	{
		$1.isArrayType = false;
		quadEntry q(OP_L_INDEX, $3->loc->name, $1.array->name, $1->loc->name);
		quad->emit(q);		
	}
	else if($1.isPtrType)
	{
		$1.isPtrType = false;
		quadEntry q(OP_L_VAL_AT, $3->loc->name, $1.array->name, $1->loc->name);
		quad->emit(q);
	}
	else
	{
		quadEntry q(OP_COPY, $1->loc->name, $3->loc->name,);
		quad->emit(q);
	}
	$$ = $3;
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
| expression COMMA assignment_expression {$$=$3;};

constant_expression: conditional_expression {$$=$1;};



declaration: declaration_specifiers init_declarator_list_opt SEMI_COLON {
	if($2->t->basic == _FUNC)
		currSymTable = new symTable();
};

declaration_specifiers: type_specifier {$$ = $1;}
| type_specifier declaration_specifiers {
	$$->t = $1->t;
	$$.width = $1.width;
	quad->t = $$->t;
	quad->width = $$.width;
 };

init_declarator_list_opt: init_declarator_list {$$=$1;} 
| %empty {} ;

init_declarator_list: init_declarator {$$=$1;}
| 	init_declarator_list COMMA init_declarator {$$=$3;};

init_declarator: declarator {$$=$1;}
|declarator EQUAL initializer {
	type *temp = new type(t->basic);
	int tempSize;
	if(temp->basic == _PTR)
		tempSize = SIZE_OF_PTR;
	else if(temp->basic == _INT)
		tempSize = SIZE_OF_INT;
	else if(temp->basic == _DOUBLE)
		tempSize = SIZE_OF_DOUBLE;
	else if(temp->basic == _CHAR)
		tempSize = SIZE_OF_CHAR;
	tempSize *= $1.width;
	temp->width = tempSize;
	symTabEntry *x = currSymTable->genTemp(temp);
	currSymTable->update(x, $3);
	$$ = $1;
};

type_specifier: VOID {
	$$->t= new type(_VOID);
	$$.width = SIZE_OF_VOID;
}
| CHAR {
	$$->t= new type(_CHAR);
	$$.width = SIZE_OF_CHAR;
}
| SHORT {}
| INT {
	$$->t= new type(_INT);
	$$.width = SIZE_OF_INT;
}
| LONG {}
| FLOAT {}
| DOUBLE {
	$$->t= new type(_DOUBLE);
	$$.width = SIZE_OF_DOUBLE;
}
| MATRIX {
	$$->t = new type(_MATRIX);
	$$.width = 2*SIZE_OF_INT + no_rows*no_cols*SIZE_OF_DOUBLE;
}
| SIGNED {}
| UNSIGNED {}
| BOOL {};

declarator: pointer_opt direct_declarator {
	$$->t = mergeTypes($2->t,$1->t);
	$$.width = $2.width;
};

direct_declarator: IDENTIFIER {
	
}
| LEFT_ROUND_BRACE declarator RIGHT_ROUND_BRACE {$$=$2;}
| direct_declarator LEFT_SQUARE_BRACE assignment_expression_opt RIGHT_SQUARE_BRACE {
	type *temp = new type(_ARR);
	if($3->loc == NULL){
		if($1->t->basic == _INT || $1->t->basic == _VOID  || $1->t->basic == _DOUBLE  || $1->t->basic == _CHAR )
		{
			temp = new type(_PTR);
			temp->next = $1->t;
			$1->t = temp;
			int oldSize = $1.width;
			$1.width += SIZE_OF_PTR-oldSize;
			currSymTable->offset += SIZE_OF_PTR - oldSize;
			$$ = $1; 
		}
	}
	else{
		if($1->t->basic == _INT)
		{
			temp->size = $3->loc->init.intVal;
		}
		int oldSize = $1.width;
		temp->next = $1->t;
		$$->t = mergeTypes(temp, $1->t);
		$$.width = $1.width;
	} 
;}
| direct_declarator LEFT_ROUND_BRACE parameter_type_list RIGHT_ROUND_BRACE {$$->t = NULL;
					$$.width =1;}
| direct_declarator LEFT_ROUND_BRACE identifier_list_opt RIGHT_ROUND_BRACE {};

pointer: MULTIPLY pointer_opt {
	type t(_PTR);
	type *temp = t;
	$$->t = mergeTypes(temp, $2->t);
};

pointer_opt: %empty {}
			| pointer {$$->t= new type(_PTR);};

parameter_type_list: parameter_list {};

parameter_list: parameter_declaration {
	tempTable = new symTable();
	symTabEntry *tempSym = tempTable->genTemp($1->t);
	tempTable->update(tempSym, $1->t, $1.width);
} 
			| parameter_list COMMA parameter_declaration {
	symTabEntry *tempSym = tempTable->genTemp($3->t);
	tempTable->update(tempSym, $3->t, $3.width);
};

parameter_declaration: declaration_specifiers declarator{
	$$->t = mergeTypes($2->t, $1->t);
	$$.width = $1.width*$2.width;
}
| declaration_specifiers{$$=$1;};

assignment_expression_opt: %empty {
	$$->loc = NULL;
	$$->trueList = NULL;
	$$->falseList = NULL;
}
| assignment_expression {$$=$1;};


identifier_list_opt: %empty{}
			|identifier_list {};


identifier_list: IDENTIFIER {}
			|  identifier_list COMMA IDENTIFIER {};

initializer: assignment_expression {$$=$1.init;}
			| LEFT_CURLY_BRACE initializer_row_list RIGHT_CURLY_BRACE {};

initializer_row_list: initializer_row {}
			|  initializer_row_list SEMI_COLON initializer_row {};

initializer_row: designation_opt initializer {}
			| initializer_row COMMA designation_opt initializer{};

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
	backPatch($1->falseList, $2);
	$$ = $3;
};

block_item: declaration {}
		  	| statement {$$=$1;};

expression_statement: expression_opt SEMI_COLON {$$=$1;};

selection_statement: IF LEFT_ROUND_BRACE expression N RIGHT_ROUND_BRACE M statement N %prec IF_CONFLICT{
	backPatch($4, quad->nextInstr);
	conv2Bool($3);
	backPatch($3->trueList, $6);
	$$->falseList= mergeList($7->falseList, $3->falseList);
	$$->falseList = mergeList($$->falseList, $8);
}
			| IF LEFT_ROUND_BRACE expression N RIGHT_ROUND_BRACE M statement N ELSE M statement{
	
;}
			| SWITCH LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE statement{};

iteration_statement: WHILE M LEFT_ROUND_BRACE expression N RIGHT_ROUND_BRACE M statement {
	char *re[10];
	sprintf(re, "%d", $2);
	string str(re);
	quadEntry q(OP_GOTO, str, "","");
	quad->emit(q);
	backPatch($5, quad->nextInstr);
	conv2Bool($4);
	backPatch($8->falseList,$2);
	backPatch($4->trueList,$7);
	$$->falseList = $4->falseList;
}
			| DO M statement M WHILE LEFT_ROUND_BRACE expression N RIGHT_ROUND_BRACE SEMI_COLON {
		backPatch($8,quad->nextInstr);
	  	conv2Bool($7);
	  	backPatch($7->trueList,$2);
	  	backPatch($3->falseList,$4);
	  	$$->falseList = $7->falseList;
}
			| FOR LEFT_ROUND_BRACE expression_opt SEMI_COLON M expression_opt N SEMI_COLON M expression_opt N RIGHT_ROUND_BRACE M statement {
		backPatch($11,$5);
	  	vector<int> l = makelist(quad->nextInstr);
	  	quadEntry q(OP_GOTO, "", "", "");
	  	quad->emit(q);
	  	$14->falseList = mergeList($14->falseList,l);
	  	backPatch($14->falseList,$9);
	  	backPatch($7,quad->nextInstr);
	  	conv2Bool($6);
	  	backPatch($6->trueList,$13);
	  	$$->falseList = $6->falseList;
}
			| FOR LEFT_ROUND_BRACE  declaration expression_opt SEMI_COLON expression_opt RIGHT_ROUND_BRACE statement{};

jump_statement: GOTO IDENTIFIER SEMI_COLON {}
| CONTINUE SEMI_COLON {}
| BREAK SEMI_COLON {}
| RETURN SEMI_COLON {
	quadEntry q( OP_RETURN, "", "", "");
	quad->emit(q);
}
| RETURN expression SEMI_COLON{
	quadEntry q( OP_RETURN_VAL, "", $2->loc->name, "");
	quad->emit(q);
}	;

expression_opt: %empty {}
| expression {$$=$1;};

translation_unit: external_declaration {}
				| translation_unit external_declaration {};

external_declaration: function_definition {}
					|  declaration {};

function_definition: declaration_specifiers declarator declaration_list_opt compound_statement {} ;

declaration_list_opt: declaration_list {}
				| %empty {};

declaration_list:declaration {}
				| declaration_list declaration {};
*/
%%

void yyerror(char *s) {
    printf("Error occured");
}

int main(){
  int token = yyparse();
  if(token==2){
    printf("Parser error : memory exhausted\n");
  }else if(token==1){
    printf("Parser error : invalid input\n");
  }else{
    printf("Parsing successful.\n");
  }
  return token;
}
