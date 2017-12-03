%{
	#include<stdio.h>
	#include "ass4_15CS30043_translator.h"
	#include "ass4_15CS30043_translator.cxx"
	#include <string>
	#include <sstream>
	#include <cstring>
	int yyerror(string);
	extern int yylex(void);
	exp_attr exp;
	dec_attr curr;

%}

%union{
	id_attr id;
	int intVal;
	char* charVal;
	char cVal;
	double dbVal;
	char* stringVal;
	struct exp_attr exp;
	dec_attr dec;
	int instr;
	vector<int>* nextList;

}

%token<id> IDENTIFIER
%token<intVal> INT_CONSTANT
%token<dbVal> FLOAT_CONSTANT
%token<charVal> CHAR_CONSTANT
%token<intVal> ZERO_CONSTANT
%token<stringVal> STRING_LITERAL

%token UNSIGNED
%token BREAK
%token VOID
%token RETURN
%token CASE
%token FLOAT
%token SHORT
%token CHAR
%token FOR
%token SIGNED
%token WHILE
%token GOTO
%token BOOL
%token CONTINUE
%token IF
%token DEFAULT
%token DO
%token INT
%token SWITCH
%token DOUBLE
%token LONG
%token ELSE
%token MATRIX
%token DASHARROW /* -> */
%token PLUSPLUS	/* ++ */
%token MINMIN /* -- */
%token DOTQUOTE /* .' */
%token LSHIFT /* << */
%token RSHIFT /* >> */
%token LTE /* <= */
%token GTE /* >= */
%token EQUALS /* == */
%token NEQUALS /* != */
%token LAND /* && */
%token LOR  /* || */
%token STAREQ /* *= */
%token DIVEQ /* /= */
%token MODEQ /* %= */
%token PLUSEQ /* += */
%token MINEQ /* -= */
%token LSHIFTEQ /* <<= */
%token RSHIFTEQ /* >>= */
%token ANDEQ /* &= */
%token POWEQ /* ^= */
%token OREQ /* |= */
%token ERR

%type <exp> primary_expression postfix_expression unary_expression cast_expression multiplicative_expression additive_expression shift_expression relational_expression  equality_expression AND_expression exclusive_OR_expression inclusive_OR_expression logical_AND_expression logical_OR_expression conditional_expression assignment_expression expression constant_expression
%type <cVal> unary_operator assignment_operator
%type <instr> M
%type <nextList> N
//%type <dec>
%expect 0

%start expression


%%

/*Expressions*/

primary_expression: IDENTIFIER 			{
											if(currentsymboltable->isPresent($1.name))
												{
													$$.addr = currentsymboltable->lookup($1.name);
													currentsymboltable->print();
													$$.t_exp = &($$.addr->t);
													//$$.t_exp = new type(t_mat);
													//$$.t_exp->rows = 3;
													//$$.t_exp->cols = 2;
													//$$.t_exp->size = $$.t_exp->get_size();
													//$$.addr->size = $$.t_exp->size; 
													$$.truelist = NULL;
					   								$$.falselist = NULL;
												}



											else
												if(globalsymboltable->isPresent($1.name))
													{
														$$.addr = globalsymboltable->lookup($1.name);
														$$.t_exp = &($$.addr->t);
														$$.truelist = NULL;
					   									$$.falselist = NULL;
													}

												else
													exit(-1);		//error;
					
										}

				   |INT_CONSTANT		{	basictype t = t_integer;
				   							type* t_int = new type(t);
				   							symentry* tmp = currentsymboltable->gentemp(*t_int);
					   						$$.addr = tmp;
					   						initialVal i;
					   						i.intVal = $1;
					   						$$.addr->setInitialVal(i);
					   						ostringstream str1;
					   						str1 << $1;
					   						quads->emit(str1.str(),tmp->name);
					   						$$.t_exp = t_int;
					   						$$.truelist = NULL;
					   						$$.falselist = NULL;

					   					}
				   
				   |FLOAT_CONSTANT		{
				   							basictype t = t_double;
				   							type* t_doub = new type(t);
				   							symentry* tmp = currentsymboltable->gentemp(*t_doub);
					   						$$.addr = tmp;
					   						initialVal i;
					   						i.dbVal = $1;
					   						$$.addr->setInitialVal(i);
					   						ostringstream str1;
					   						str1 << $1;
					   						quads->emit(str1.str(),tmp->name);
					   						$$.t_exp = t_doub;
					   						$$.truelist = NULL;
					   						$$.falselist = NULL;
					   					}

				   |CHAR_CONSTANT 		{
				   							basictype t = t_char;
				   							type* t_char = new type(t);
				   							symentry* tmp = currentsymboltable->gentemp(*t_char);
					   						$$.addr = tmp;
					   						initialVal i;
					   						i.charVal = $1;
					   						$$.addr->setInitialVal(i);
					   						quads->emit(string($1),tmp->name);
					   						$$.t_exp = t_char;
					   						$$.truelist = NULL;
					   						$$.falselist = NULL;

				   						}

				   |ZERO_CONSTANT		{
				   							basictype t = t_integer;
				   							type* t_int = new type(t);
				   							symentry* tmp = currentsymboltable->gentemp(*t_int);
					   						$$.addr = tmp;
					   						initialVal i;
					   						i.intVal = $1;
					   						$$.addr->setInitialVal(i);
					   						ostringstream str1;
					   						str1 << $1;
					   						quads->emit(str1.str(),tmp->name);
					   						$$.t_exp = t_int;
					   						$$.truelist = NULL;
					   						$$.falselist = NULL;

				   						}
				   
				   |STRING_LITERAL		{
				   							//Not supported for now 

				  						}

				   |'(' expression ')' 	{	$$=$2;	}
				   ;



postfix_expression: primary_expression 												{	$$=$1;	}

				   |primary_expression '[' expression ']' '[' expression ']' 		{
				   																		if($1.t_exp->actype!=t_mat)
				   																		{
				   																			cout << "Not a matrix type";
				   																			exit(-1);
				   																		}
				   																		else
				   																		{
				   																			$$=$1;
				   																			$$.isMattype = true;
				   																			type* t = new type(t_integer);
				   																			symentry* temp = currentsymboltable->gentemp(*t);
				   																			ostringstream str1;
					   																		str1 << $1.t_exp->cols;
				   																			quads->emit("*",$3.addr->name,str1.str(),temp->name);
				   																			str1 << $1.t_exp->rows;
				   																			quads->emit("+",temp->name,$6.addr->name,temp->name);
				   																			$$.addr = temp;
				   																			$$.mat = $1.addr;
				   																			$$.t_exp = new type(t_double);
				   																		}
				   																	}
				   |postfix_expression '(' argument_expression_list_opt ')'			{}
				   |postfix_expression '.' IDENTIFIER 								{
				   																		//Not supported
				   																	}
				   |postfix_expression DASHARROW IDENTIFIER 						{
				   																		//Not supported
				   																	}
				   |postfix_expression PLUSPLUS								{
				   																$$=$1;
				   																$$.addr = currentsymboltable->gentemp(*$$.t_exp);

				   																if($1.isMattype==true)
				   																{
				   																	type* ty = new type(t_double);
				   																	symentry* tmp = currentsymboltable->gentemp(*ty);
				   																	quads->emit("=[]",$1.mat->name,$1.addr->name,$$.addr->name);
				   																	$$.t_exp = ty;
				   																	$$.addr->t = *ty;
				   																	$$.addr->size = ty->get_size();
				   																	quads->emit("+",$$.addr->name,"1",tmp->name);
				   																	quads->emit("[]=",tmp->name,$1.addr->name,$1.mat->name);
				   																}
				   																else{
				   																	quads->emit($1.addr->name,$$.addr->name);
				   																	quads->emit("+",$1.addr->name,"1",$1.addr->name);
				   																}
				   																$$.isMattype = false;

				   															}

				   |postfix_expression MINMIN								{
				   																$$=$1;
				   																$$.addr = currentsymboltable->gentemp(*$$.t_exp);

				   																if($1.isMattype==true)
				   																{
				   																	type* ty = new type(t_double);
				   																	symentry* tmp = currentsymboltable->gentemp(*ty);
				   																	quads->emit("=[]",$1.mat->name,$1.addr->name,$$.addr->name);
				   																	$$.addr->t = *ty;
				   																	$$.t_exp = ty;
				   																	$$.addr->size = ty->get_size();
				   																	cout << $$.addr->name << ":" << $$.addr->t.size;
				   																	quads->emit("-",$$.addr->name,"1",tmp->name);
				   																	quads->emit("[]=",tmp->name,$1.addr->name,$1.mat->name);
				   																}
				   																else{
				   																	quads->emit($1.addr->name,$$.addr->name);
				   																	quads->emit("-",$1.addr->name,"1",$1.addr->name);
				   																}

				   																$$.isMattype = false;

				   															}

				   |postfix_expression DOTQUOTE								{}
				   ;

argument_expression_list_opt: /*empty line*/								{}
							 |argument_expression_list 						{}
							 ;

argument_expression_list: assignment_expression 							{}
						 |argument_expression_list ',' assignment_expression{}
						 ;

unary_expression: postfix_expression										{	$$ = $1;	}

		   		 |PLUSPLUS unary_expression									{
		   		 																$$=$2;
				   																$$.addr = currentsymboltable->gentemp(*$$.t_exp);

				   																if($2.isMattype==true)
				   																{
				   																	type* ty = new type(t_double);
				   																	quads->emit("=[]",$2.mat->name,$2.addr->name,$$.addr->name);
				   																	$$.addr->t = *ty;
				   																	$$.t_exp = ty;
				   																	$$.addr->size = ty->get_size();
				   																	quads->emit("+",$$.addr->name,"1",$$.addr->name);
				   																	quads->emit("[]=",$$.addr->name,$2.addr->name,$2.mat->name);
				   																}
				   																else{
				   																	quads->emit("+",$2.addr->name,"1",$2.addr->name);
				   																	quads->emit($2.addr->name,$$.addr->name);
				   																}
				   																$$.isMattype = false;

		   		 															}

		   		 |MINMIN unary_expression 									{
		   		 																$$=$2;
				   																$$.addr = currentsymboltable->gentemp(*$$.t_exp);

				   																if($2.isMattype==true)
				   																{
				   																	type* ty = new type(t_double);
				   																	quads->emit("=[]",$2.mat->name,$2.addr->name,$$.addr->name);
				   																	$$.addr->t = *ty;
				   																	$$.t_exp = ty;
				   																	$$.addr->size = ty->get_size();
				   																	quads->emit("-",$$.addr->name,"1",$$.addr->name);
				   																	quads->emit("[]=",$$.addr->name,$2.addr->name,$2.mat->name);
				   																}
				   																else{
				   																	quads->emit("-",$2.addr->name,"1",$2.addr->name);
				   																	quads->emit($2.addr->name,$$.addr->name);
				   																}
				   																$$.isMattype = false;

		   		 															}

		   		 |unary_operator cast_expression 							{
		   		 																if( $1 == '&') 
		   		 																{

		   		 																	$$ = $2;
		   		 																	basictype t = t_pointer;
		   		 																	$$.t_exp = new type(t);
		   		 																	$$.t_exp->pointerto = $2.t_exp;
		   		 																	$$.addr = currentsymboltable->gentemp(*$$.t_exp);
		   		 																	if($2.isMattype==false){
		   		 																		quads->emit("&",$2.addr->name,$$.addr->name);
		   		 																	}
		   		 																	else
		   		 																	{
		   		 																		quads->emit("+",$$.addr->name,$2.mat->name,$2.addr->name);
		   		 																	}
		   		 																}
		   		 																else if($1 == '*')
		   		 																{

		   		 																	if($2.t_exp->pointerto == NULL) //if not a pointer throw error
		   		 																	{
		   		 																		cout << "Error - not a pointer";
		   		 																		exit(-1);										
		   		 																	}
		   		 																	$$ = $2;
		   		 																	$$.t_exp = $2.t_exp->pointerto;
		   		 																	$$.isPtrtype = true;		   		 																	
		   		 																}
		   		 																else if($1 == '+')
		   		 																{
		   		 																	$$ = $2;
		   		 																	if($2.isMattype == true)
		   		 																	{
		   		 																		$$.isMattype = false;
		   		 																		type* ty = new type(t_double);
		   		 																		symentry* tmp = currentsymboltable->gentemp(*ty);
		   		 																		quads->emit("=[]",$2.mat->name,$2.addr->name,tmp->name);
		   		 																		$$.addr = tmp;
				   																		$$.t_exp = ty;
		   		 																	}
		   		 																	else if($2.isPtrtype == true)
		   		 																	{
		   		 																		$$.isPtrtype = false;
		   		 																		$$.addr = currentsymboltable->gentemp(*$$.t_exp);
		   		 																		quads->emit("*val",$2.addr->name,$$.addr->name); 
		   		 																	}
		   		 																	
		   		 																}
		   		 																else if($1 == '-')
		   		 																{
		   		 																	$$=$2;
		   		 																	if($2.isMattype == true)
		   		 																	{
		   		 																		$$.isMattype = false;
		   		 																		type* ty = new type(t_double);
		   		 																		symentry* tmp = currentsymboltable->gentemp(*ty);
		   		 																		quads->emit("=[]",$2.mat->name,$2.addr->name,tmp->name);
				   																		$$.t_exp = ty;
				   																		$$.addr = currentsymboltable->gentemp(*$$.t_exp);
		   		 																		quads->emit("-",tmp->name,$$.addr->name);
		   		 																	}
		   		 																	else if($2.isPtrtype == true)
		   		 																	{
		   		 																		$$.isPtrtype = false;
		   		 																		symentry* tmp= currentsymboltable->gentemp(*$$.t_exp);
		   		 																		quads->emit("*val",$2.addr->name,tmp->name);
		   		 																		$$.addr = currentsymboltable->gentemp(*$$.t_exp);
		   		 																		quads->emit("-",tmp->name,$$.addr->name); 
		   		 																	}
		   		 																	else if(($2.isMattype == false && $2.t_exp->actype == t_mat)||(($2.isPtrtype == false && $2.t_exp->actype == t_pointer)))
		   		 																	{
		   		 																		cout << "Error - Cannot negate a pointer reference";
		   		 																		exit(-1);
		   		 																	}
		   		 																	else
		   		 																	{
		   		 																		$$.addr = currentsymboltable->gentemp(*$$.t_exp);
		   		 																		quads->emit("-",$2.addr->name,$$.addr->name);
		   		 																	}
		   		 																	
		   		 																}

		   		 															}
		   		 ;	

unary_operator: '&' 														{	$$ = '&';	}	
			   |'*'															{	$$ = '*';	}
			   |'+'															{	$$ = '+';	}
			   |'-'															{	$$ = '-';	}
			   ;

cast_expression: unary_expression 											{	$$ = $1;
																				
																			}

multiplicative_expression: cast_expression 									{	$$=$1;
																				if($1.isMattype==true)
																				{
																					type* ty = new type(t_double);
																					$$.addr = currentsymboltable->gentemp(*ty);
																					quads->emit("=[]",$1.mat->name,$1.addr->name,$$.addr->name); 
																					$$.t_exp = ty;
																					$$.isMattype = false;
																				}
																				else if($1.isPtrtype==true)
																				{
																					$$.isPtrtype = false;
		   		 																	$$.addr = currentsymboltable->gentemp(*$$.t_exp);
		   		 																	quads->emit("*val",$1.addr->name,$$.addr->name); 
																				}
																			}
						  |multiplicative_expression '*' cast_expression 	{
						  														if($3.isMattype == true)
						  														{
						  															$3.isMattype = false;
						  															type* ty = new type(t_double);
						  															symentry* tmp = currentsymboltable->gentemp(*ty);
						  															quads->emit("=[]",$3.mat->name,$3.addr->name,tmp->name);
						  															$3.addr = tmp;
						  															$3.t_exp=ty;

						  														}
						  														else if($3.isPtrtype == true)
						  														{
						  															$3.isPtrtype = false;
		   		 																	type* ty = $3.t_exp;
						  															symentry* tmp = currentsymboltable->gentemp(*ty);
						  															quads->emit("*val",$3.addr->name,tmp->name);
						  															$3.addr = tmp;
						  															$3.t_exp = ty;						  															

						  														}
						  														if($1.t_exp->actype==t_double && $3.t_exp->actype==t_integer)
																					typecheck(&($3),&($1));
																				else if($1.t_exp->actype==t_integer && $3.t_exp->actype==t_char)
																					typecheck(&($3),&($1));
																				else
																					typecheck(&($1),&($3));
						  														$$=$1;
						  														$$.addr = currentsymboltable->gentemp(*$$.t_exp);
						  														quads->emit("*",$1.addr->name,$3.addr->name,$$.addr->name);			

						  													}

						  |multiplicative_expression '/' cast_expression 	{
						  	if($3.isMattype == true)
						  														{
						  															$3.isMattype = false;
						  															type* ty = new type(t_double);
						  															symentry* tmp = currentsymboltable->gentemp(*ty);
						  															quads->emit("=[]",$3.mat->name,$3.addr->name,tmp->name);
						  															$3.addr = tmp;
						  															$3.t_exp=ty;

						  														}
						  														else if($3.isPtrtype == true)
						  														{
						  															$3.isPtrtype = false;
		   		 																	type* ty = $3.t_exp;
						  															symentry* tmp = currentsymboltable->gentemp(*ty);
						  															quads->emit("*val",$3.addr->name,tmp->name);
						  															$3.addr = tmp;
						  															$3.t_exp = ty;						  															

						  														}
						  														if($1.t_exp->actype==t_double && $3.t_exp->actype==t_integer)
																					typecheck(&($3),&($1));
																				else if($1.t_exp->actype==t_integer && $3.t_exp->actype==t_char)
																					typecheck(&($3),&($1));
																				else
																					typecheck(&($1),&($3));
																				$$=$1;
						  														$$.addr = currentsymboltable->gentemp(*$$.t_exp);
						  														quads->emit("/",$1.addr->name,$3.addr->name,$$.addr->name);			
																			}

						  |multiplicative_expression '%' cast_expression 	{	if($3.isMattype == true)
						  														{
						  															$3.isMattype = false;
						  															type* ty = new type(t_double);
						  															symentry* tmp = currentsymboltable->gentemp(*ty);
						  															quads->emit("=[]",$3.mat->name,$3.addr->name,tmp->name);
						  															$3.addr = tmp;
						  															$3.t_exp=ty;

						  														}
						  														else if($3.isPtrtype == true)
						  														{
						  															$3.isPtrtype = false;
		   		 																	type* ty = $3.t_exp;
						  															symentry* tmp = currentsymboltable->gentemp(*ty);
						  															quads->emit("*val",$3.addr->name,tmp->name);
						  															$3.addr = tmp;
						  															$3.t_exp = ty;						  															

						  														}
						  														if($1.t_exp->actype==t_double && $3.t_exp->actype==t_integer)
																					typecheck(&($3),&($1));
																				else if($1.t_exp->actype==t_integer && $3.t_exp->actype==t_char)
																					typecheck(&($3),&($1));
																				else
																					typecheck(&($1),&($3));
						  														$$=$1;
						  														$$.addr = currentsymboltable->gentemp(*$$.t_exp);
						  														quads->emit("%",$1.addr->name,$3.addr->name,$$.addr->name);			

						  													}


additive_expression: multiplicative_expression  							{	$$=$1;	}
					|additive_expression '+' multiplicative_expression		{	if($1.t_exp->actype==t_double && $3.t_exp->actype==t_integer)
																					typecheck(&($3),&($1));
																				else if($1.t_exp->actype==t_integer && $3.t_exp->actype==t_char)
																					typecheck(&($3),&($1));
																				else
																					typecheck(&($1),&($3));
																				$$=$1;
						  														$$.addr = currentsymboltable->gentemp(*$$.t_exp);
						  														quads->emit("+",$1.addr->name,$3.addr->name,$$.addr->name);	

																			}
					|additive_expression '-' multiplicative_expression		{
																				if($1.t_exp->actype==t_double && $3.t_exp->actype==t_integer)
																					typecheck(&($3),&($1));
																				else if($1.t_exp->actype==t_integer && $3.t_exp->actype==t_char)
																					typecheck(&($3),&($1));
																				else
																					typecheck(&($1),&($3));
																				$$=$1;
						  														$$.addr = currentsymboltable->gentemp(*$$.t_exp);
						  														quads->emit("-",$1.addr->name,$3.addr->name,$$.addr->name);	
						  													}

shift_expression: additive_expression										{	$$=$1;	}
				 |shift_expression LSHIFT additive_expression				{
				 																if($1.t_exp->actype == t_double || $3.t_exp->actype == t_double)
				 																	{
				 																		cout << "Incompatible Types for Shift operation - Double";
				 																		exit(-1);
				 																	}
				 																if($1.t_exp->actype==t_integer && $3.t_exp->actype==t_char)
																					typecheck(&($3),&($1));
																				else
																					typecheck(&($1),&($3));
																				$$=$1;
						  														$$.addr = currentsymboltable->gentemp(*$$.t_exp);
						  														quads->emit("<<",$1.addr->name,$3.addr->name,$$.addr->name);	

				 															}

				 |shift_expression RSHIFT additive_expression				{
				 																if($1.t_exp->actype == t_double || $3.t_exp->actype == t_double)
				 																	{
				 																		cout << "Incompatible Types for Shift operation";
				 																		exit(-1);
				 																	}
				 																if($1.t_exp->actype==t_integer && $3.t_exp->actype==t_char)
																					typecheck(&($3),&($1));
																				else
																					typecheck(&($1),&($3));
																				$$=$1;
						  														$$.addr = currentsymboltable->gentemp(*$$.t_exp);
						  														quads->emit(">>",$1.addr->name,$3.addr->name,$$.addr->name);	
																			}

relational_expression: shift_expression 									{	$$=$1;	}
					  |relational_expression '<' shift_expression			{
					  															if($1.t_exp->actype==t_double && $3.t_exp->actype==t_integer)
																					typecheck(&($3),&($1));
																				else if($1.t_exp->actype==t_integer && $3.t_exp->actype==t_char)
																					typecheck(&($3),&($1));
																				else
																					typecheck(&($1),&($3));
																				basictype t = t_Bool;
																				$$.t_exp = new type(t);
																				$$.truelist = makelist(quads->nextinstr);
					  															$$.falselist =makelist(quads->nextinstr+1);
					  															quads->emit("if<",$1.addr->name, $3.addr->name,"");
					  															quads->emit("goto","","");
					  															

					  														}

					  |relational_expression '>' shift_expression			{

					  															if($1.t_exp->actype==t_double && $3.t_exp->actype==t_integer)
																					typecheck(&($3),&($1));
																				else if($1.t_exp->actype==t_integer && $3.t_exp->actype==t_char)
																					typecheck(&($3),&($1));
																				else
																					typecheck(&($1),&($3));
																				basictype t = t_Bool;
																				$$.t_exp = new type(t);
					  															$$.truelist = makelist(quads->nextinstr);
					  															$$.falselist =makelist(quads->nextinstr+1);
					  															quads->emit("if>",$1.addr->name, $3.addr->name,"");
					  															quads->emit("goto","","");

					  														}
					  |relational_expression LTE shift_expression			{

					  															if($1.t_exp->actype==t_double && $3.t_exp->actype==t_integer)
																					typecheck(&($3),&($1));
																				else if($1.t_exp->actype==t_integer && $3.t_exp->actype==t_char)
																					typecheck(&($3),&($1));
																				else
																					typecheck(&($1),&($3));
																				basictype t = t_Bool;
																				$$.t_exp = new type(t);
					  															$$.truelist = makelist(quads->nextinstr);
					  															$$.falselist =makelist(quads->nextinstr+1);
					  															quads->emit("if<=",$1.addr->name, $3.addr->name,"");
					  															quads->emit("goto","","");
					  														}

					  |relational_expression GTE shift_expression			{	
					  															if($1.t_exp->actype==t_double && $3.t_exp->actype==t_integer)
																					typecheck(&($3),&($1));
																				else if($1.t_exp->actype==t_integer && $3.t_exp->actype==t_char)
																					typecheck(&($3),&($1));
																				else
																					typecheck(&($1),&($3));
																				basictype t = t_Bool;
																				$$.t_exp = new type(t);
					  															$$.truelist = makelist(quads->nextinstr);
					  															$$.falselist =makelist(quads->nextinstr+1);
					  															quads->emit("if>=",$1.addr->name, $3.addr->name,"");
					  															quads->emit("goto","","");

					  														}

equality_expression: relational_expression  								{	$$=$1;	}
				   |equality_expression EQUALS relational_expression 		{
				   																if($1.t_exp->actype==t_double && $3.t_exp->actype==t_integer)
																					typecheck(&($3),&($1));
																				else if($1.t_exp->actype==t_integer && $3.t_exp->actype==t_char)
																					typecheck(&($3),&($1));
																				else
																					typecheck(&($1),&($3));
																				basictype t = t_Bool;
																				$$.t_exp = new type(t);
					  															$$.truelist = makelist(quads->nextinstr);
					  															$$.falselist =makelist(quads->nextinstr++);
					  															quads->emit("if==",$1.addr->name, $3.addr->name,"");
					  															quads->emit("goto","","");
				   															}

				   |equality_expression NEQUALS relational_expression   	{
				   																if($1.t_exp->actype==t_double && $3.t_exp->actype==t_integer)
																					typecheck(&($3),&($1));
																				else if($1.t_exp->actype==t_integer && $3.t_exp->actype==t_char)
																					typecheck(&($3),&($1));
																				else
																					typecheck(&($1),&($3));
																				basictype t = t_Bool;
																				$$.t_exp = new type(t);
					  															$$.truelist = makelist(quads->nextinstr);
					  															$$.falselist =makelist(quads->nextinstr++);
					  															quads->emit("if!=",$1.addr->name, $3.addr->name,"");
					  															quads->emit("goto","","");

				   															}

AND_expression: equality_expression 										{	$$=$1;	}
			   |AND_expression '&' equality_expression  					{
			   																	if($1.t_exp->actype == t_double || $3.t_exp->actype == t_double)
				 																	{
				 																		cout << "Incompatible Types for Shift operation";
				 																		exit(-1);
				 																	}
				 																if($1.t_exp->actype==t_integer && $3.t_exp->actype==t_char)
																					typecheck(&($3),&($1));
																				else
																					typecheck(&($1),&($3));
																				$$=$1;
						  														$$.addr = currentsymboltable->gentemp(*$$.t_exp);
						  														quads->emit("&",$1.addr->name,$3.addr->name,$$.addr->name);	
			   																}

exclusive_OR_expression: AND_expression 									{	$$=$1;	}
				        |exclusive_OR_expression '^' AND_expression  		{
				        														if($1.t_exp->actype == t_double || $3.t_exp->actype == t_double)
				 																	{
				 																		cout << "Incompatible Types for Shift operation";
				 																		exit(-1);
				 																	}
				 																if($1.t_exp->actype==t_integer && $3.t_exp->actype==t_char)
																					typecheck(&($3),&($1));
																				else
																					typecheck(&($1),&($3));
																				$$=$1;
						  														$$.addr = currentsymboltable->gentemp(*$$.t_exp);
						  														quads->emit("^",$1.addr->name,$3.addr->name,$$.addr->name);

				        													}

inclusive_OR_expression: exclusive_OR_expression							{	$$=$1;	}
						|inclusive_OR_expression '|' exclusive_OR_expression{
																				if($1.t_exp->actype == t_double || $3.t_exp->actype == t_double)
				 																	{
				 																		cout << "Incompatible Types for Shift operation";
				 																		exit(-1);
				 																	}
				 																if($1.t_exp->actype==t_integer && $3.t_exp->actype==t_char)
																					typecheck(&($3),&($1));
																				else
																					typecheck(&($1),&($3));
																				$$=$1;
						  														$$.addr = currentsymboltable->gentemp(*$$.t_exp);
						  														quads->emit("|",$1.addr->name,$3.addr->name,$$.addr->name);
																			}

logical_AND_expression: inclusive_OR_expression								{	$$=$1;	}
					   |logical_AND_expression LAND M inclusive_OR_expression	{
					   																type* t = new type(t_Bool);
					   																$$.t_exp = t;
					   																backpatch($1.truelist,$3);
					   																$$.truelist = $4.truelist;
					   																$$.falselist = merge($1.falselist,$4.falselist);


					   															}

logical_OR_expression: logical_AND_expression 								{	$$=$1;	}
					  |logical_OR_expression LOR M logical_AND_expression 	{
					  															type* t = new type(t_Bool);
					   															$$.t_exp = t;
					  															backpatch($1.falselist,$3);
					  															$$.truelist = merge($1.truelist,$4.truelist);
					  															$$.falselist = $4.falselist;
					  														}

conditional_expression: logical_OR_expression 								{	$$=$1;	}
					   |logical_OR_expression N '?' M expression N ':' M conditional_expression	
					   														{
					   															/*backpatch($1.truelist,$4.instr);
					   															backpatch($1.falselist,$8.instr);
					   															$$ = $5;
					   															$$.addr = currentsymboltable->gentemp(*$$.t_exp);*/


					   														}

assignment_expression: conditional_expression										{	$$=$1;	}
			          |unary_expression assignment_operator assignment_expression 	{
			          																	if($2 != '=')
			          																		cout << "Operation not supported";
			          																	else
			          																	{
			          																		if($1.isMattype != true && $1.t_exp->actype == t_mat)
			          																		{
			          																			cout << "Unsupported Operation - Matrix cannot be directly assigned without referencing";
			        																			exit(-1);
			          																		}
			          																		
			          																		else
			          																		{
			          																			typecheck(&($3),&($1));
			          																			if($1.isMattype == true)
			          																			{
			          																				quads->emit("[]=",$3.addr->name,$1.addr->name,$1.mat->name);
			          																			}
			          																			else if($1.isPtrtype == true)
			          																			{
			          																				quads->emit("*copy",$3.addr->name,$1.addr->name);
			          																			}
			          																			else{
			          																				quads->emit($3.addr->name,$1.addr->name);
			          																			}
			          																		}
			          																	}
			          																	$$ = $3;


			          																}

assignment_operator: '='													{
																				$$ = '=';
																			}
					|STAREQ													{	
																				//Not supported
																			}
					|DIVEQ													{	
																				//Not supported
																			}
					|MODEQ													{	
																				//Not supported
																			}		
					|PLUSEQ													{	
																				//Not supported
																			}
					|MINEQ													{	
																				//Not supported
																			}
					|LSHIFTEQ												{	
																				//Not supported
																			}
					|RSHIFTEQ												{	
																				//Not supported
																			}
					|ANDEQ													{	
																				//Not supported
																			}
					|POWEQ													{	
																				//Not supported
																			}	
					|OREQ													{	
																				//Not supported
																			}
					;

expression: assignment_expression 											{	$$=$1;
																				quads->print();
																				currentsymboltable->print();
																				
																			}									      
	       |expression ',' assignment_expression 							{
	       																		// Not supported 
	       																	}
	       	;
constant_expression: conditional_expression 								{	$$=$1;	}
					;

M : %empty 																	{	$$ = quads->nextinstr;	}

N: %empty																	{
																				$$ = makelist(quads->nextinstr);
																				quads->emit("goto","","");
																			}

/*Declarations*/

declaration: declaration_specifiers init_declarator_list_opt ';'			{}

declaration_specifiers: type_specifier										{
																				$$=$1;
																				curr = $1; //save the current type information in  a global variable
																			}
						|type_specifier declaration_specifiers 				{
																				//Not supported
																			}

init_declarator_list_opt: /*empty line*/ 									{}
					    |init_declarator_list 								{	$$=$1;	}

init_declarator_list: init_declarator 										{printf("init_declarator_list => init_declarator\n");}
					 |init_declarator_list ',' init_declarator 				{printf("init_declarator_list => init_declarator_list, init_declarator\n");}			

init_declarator: declarator 												{printf("init_declarator => declarator\n");}
				|declarator '=' initializer 								{printf("init_declarator => declarator = initializer\n");}	

type_specifier: VOID 														{
																				$$.t_dec = new type(t_void);
																				$$.size = 0;

																			}		
				|CHAR 														{
																				$$.t_dec = new type(t_char);
																				$$.size = 1;
																			}
																				
				|SHORT 														{
																				//Not supported
																			}	
				|INT 														{
																				$$.t_dec = new type(t_integer);
																				$$.size = 4;
																			}
				|LONG 														{
																				//Not supported
																			}	
				|FLOAT 														{
																				//Not supported
																			}
				|DOUBLE 													{
																				$$.t_dec = new type(t_double);
																				$$.size = 8;
																			}	
				|MATRIX 													{
																				$$.t_dec = new type(t_mat);
																				$$.size = -1;
																			}	
				|SIGNED 													{
																				//Not supported		
																			}
				|UNSIGNED 													{
																				//Not supported
																			}
				|BOOL 														{
																				//Not supported
																			}

declarator: pointer_opt direct_declarator 									{printf("declarator => pointer_opt direct_declarator\n");}

pointer_opt : /*empty line*/ 												{printf("pointer_opt => epsilon\n");}
			 |pointer 														{printf("pointer_opt => pointer\n");}

direct_declarator: IDENTIFIER  												{
																				if(currentsymboltable->isPresent($1.name) || globalsymboltable->isPresent($1.name))
																				{
																					cout << "Error - Re-dlecaration of identifier" << endl;
																					exit(-1);
																				}
																				$$.addr =currentsymboltable->lookup($1.name);
																				currentsymboltable->update($$.addr,*curr.t_dec);
																				$$.typ = curr.t_dec;
																			}	
				  |'(' declarator ')' 										{printf("direct_declarator => ( declarator )\n");}
				  |direct_declarator '[' assignment_expression_opt ']' 		{printf("direct_declarator => direct_declarator [ assignment_expression_opt ]\n");}	
				  |direct_declarator '(' parameter_type_list ')' 			{printf("direct_declarator => direct_declarator ( parameter_type_list )\n");}
				  |direct_declarator '(' identifier_list_opt ')'			{
				  																//Not supported
				 	 														}
 
assignment_expression_opt: /*empty line*/ 									{printf("assignent_expression_opt => epsilon\n");}
						 |assignment_expression 							{printf("assignent_expression_opt => assignment_expression\n");}

identifier_list_opt: /*empty line*/ 										{printf("identifier_list_opt => epsilon\n");}		
					 |identifier_list 										{printf("identifier_list_opt => identifier_list\n");}	

pointer: '*' pointer_opt 													{printf("pointer =>  * pointer_opt\n");}		

parameter_type_list: parameter_list 										{printf("parameter_type_list => parameter_list\n");}

parameter_list: parameter_declaration 										{printf("parameter_list => parameter_declaration\n");}
		 	   |parameter_list ',' parameter_declaration 					{printf("parameter_list => parameter_list , parameter_declaration\n");}	

parameter_declaration: declaration_specifiers declarator 					{printf("parameter_declaration => declaration_specifiers declarator\n");}
					  |declaration_specifiers 								{printf("parameter_declaration => declaration_specifiers\n");}	

identifier_list: IDENTIFIER  												{printf("identifier_list => IDENTIFIER\n");}	
				|identifier_list ',' IDENTIFIER 							{printf("identifier_list => identifier_list , IDENTIFIER\n");}

initializer: assignment_expression 											{printf("initializer => assignment_expression\n");}	
			|'{' initializer_row_list '}' 									{printf("initializer => { initializer_row_list }\n");}

initializer_row_list: initializer_row 										{printf("initializer_row_list => initializer_row\n");}	
					 |initializer_row_list ';' initializer_row 				{printf("initializer_row_list => initializer_row_list , initializer_row\n");}

initializer_row: designation_opt initializer 								{printf("initializer_row => designation_opt initializer\n");} 
				|initializer_row ',' designation_opt initializer 			{printf("initializer_row => initializer_row , designation_opt initializer\n");}			
 
designation_opt: /*empty line*/												{printf("designation_opt => epsilon\n");}
				|designation  												{printf("designation_opt => designation\n");}	

designation: designator_list '=' 											{printf("designation => designation_list =\n");}

designator_list: designator 												{printf("designator_list => designator\n");}
				 |designator_list designator  								{printf("designator_list => designator_list designator\n");}

designator: '[' constant_expression ']' 									{printf("designator => [ constant_expression ] \n");}
		   |'.' IDENTIFIER 													{printf("designator => . INDENTIFIER \n");}	

/*Statements*/

statement: labeled_statement											 	{printf("statement => labeled_statement \n");}			
		  |compound_statement												{printf("statement => compound_statement \n");}
		  |expression_statement												{printf("statement => expression_statement\n");}	
		  |selection_statement												{printf("statement => selection_statement\n");}
		  |iteration_statement												{printf("statement => iteration_statement\n");}
		  |jump_statement													{printf("statement => jump_statement\n");}	

labeled_statement: IDENTIFIER ':' statement 								{printf("labeled_statement => IDENTIFIER : statement\n");}
				  |CASE constant_expression ':' statement 					{printf("labeled_statement => CASE constant_expression : statement\n");}
				  |DEFAULT ':' statement 									{printf("labeled_statement => DEFAULT : statement\n");}

compound_statement: '{' block_item_list_opt '}'								{printf("compound_statement => { block_item_list_opt }\n");}

block_item_list_opt : /*empty line*/										{printf("block_item_list_opt => epsilon\n");}
					 |block_item_list 										{printf("block_item_list_opt => block_item_list\n");}

block_item_list: block_item 												{printf("block_item_list => block_item\n");}
				|block_item_list block_item 								{printf("block_item_list => block_item_list block_item\n");}

block_item: declaration  													{printf("block_item => declaration\n");}
		   |statement 														{printf("block_item => statement\n");}		

expression_statement: expression_opt ';'									{printf("expression_statement => expression_opt ;\n");}		

selection_statement: IF'(' expression ')' statement 						{printf("selection_statement => if( expression ) statement\n");}		
					|IF'(' expression ')' statement ELSE statement 			{printf("selection_statement => if( expression ) statement else statement\n");}				
					|SWITCH '(' expression ')' statement 					{printf("selection_statement => switch( expression ) statement\n");}

iteration_statement: WHILE '(' expression ')' statement 											{printf("iteration_statement => while ( expression ) statement\n");}	
					|DO statement WHILE '(' expression ')' ';'										{printf("iteration_statement => do statement while ( expression ) ;\n");}
					|FOR '(' expression_opt ';' expression_opt ';' expression_opt ')' statement 	{printf("iteration_statement => for (expression_opt ; expression_opt ; expression_opt ) statement\n");}
					|FOR '(' declaration expression_opt ':' expression_opt ')' statement  			{printf("iteration_statement => for(declaration expression_opt : expression_opt ) statement\n");}

jump_statement: GOTO IDENTIFIER';' 											{printf("jump_statement => goto identifier;\n");}
				|CONTINUE';' 												{printf("jump_statement => continue;\n");}
				|BREAK';'													{printf("jump_statement => break;\n");}	
				|RETURN expression_opt ';' 									{printf("jump_statement => return expression_opt\n");}

expression_opt: /*empty line*/												{printf("expression_opt => epsilon\n");}
			   |expression 													{printf("expression_opt => expression\n");}		

/* External Definitions */

translation_unit: external_declaration										{printf("translation_unit => external_declaration\n");}
				 |translation_unit external_declaration						{printf("translation_unit => translation_unit external_declaration\n");}

external_declaration: function_definition									{printf("external_declaration => function_definition\n");}
					 |declaration 											{printf("external_declaration => declaration\n");}

function_definition: declaration_specifiers declarator declaration_list_opt compound_statement  	{printf("function_definition => declaration_specifiers declarator declaration_list_opt compound_statement\n");}

declaration_list_opt: /*empty line*/										{printf("declaration_list_opt => epsilon\n");}
					 |declaration_list 										{printf("declaration_list_opt => declaration_list\n");}

declaration_list : declaration 												{printf("declaration_list => declaration\n");}
				  |declaration_list declaration 							{printf("declaration_list => declaration_list\n");}



%%

int yyerror(string err){
  cout << err;
  return -1;
}

