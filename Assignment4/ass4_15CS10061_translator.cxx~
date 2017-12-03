#include "ass4_15CS10061_translator.h"
#include "y.tab.h"

# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <iostream>

using namespace std;

/* Implementation of symboltablerow */
symbolTableRow::symbolTableRow(char *name_f, treeNodeType *Type_f, void *initial_value_f, int size_f, int offset_f, symbolTable *nestedTable_f) : name(name_f), Type(Type_f), initialValue(initial_value_f), size(size_f), offset(offset_f), nestedTable(nestedTable_f) {}
void symbolTableRow::operator=(symbolTableRow &x){
	this->name = x.name;
	this->Type = x.Type;
	this->initialValue = x.initialValue;
	this->size = x.size;
	this->offset = x.offset;
	this->nestedTable = x.nestedTable;
}
symbolTableRow::~symbolTableRow(){}
void symbolTableRow::printRow(){
	//printf("Print row entered\n");
	printf("%s\t ",name);
	printInitialValue(initialValue,Type);
	printf("\t");
	cout<<size<<"\t";
	cout<<offset<<"\t";
	if(nestedTable == NULL)
		cout<<"... \t";
	else
		printf("%s \t",(nestedTable->table)[0].name);
	printTree(Type);
}

/* Implementation of symbolTable */
symbolTable::symbolTable(unsigned int capacity){
	table = new symbolTableRow[capacity];
	curr_length = -1;
}
symbolTable::~symbolTable(){}
symbolTableRow *symbolTable::lookup(char *t){											// Returns 0 if that var or func is not present in the symbol table
	int i;
	//printf("%d\n",curr_length);
	for(i = 0;i<=curr_length;i++){
		//printf("%s\n",table[i].name);
		if(strcmp(table[i].name,t) == 0)
			return (table + i);
	}
	symbolTableRow tempSym(t, 0,0,-1,-1,0);
	insert(this->tempSym); 
	return &((this->table)[curr_length]);
}

void symbolTable::insert(symbolTableRow &x){												// Inserts a row in the symbol table. Also computes the offset
	if(curr_length == -1)
		x.offset = 0;
	else
		x.offset = table[curr_length].size + table[curr_length].offset;
	curr_length++;
	table[curr_length] = x;
	//printf("%d\n",table[0].offset);
}
void symbolTable::print(){															// Prints the symbol table
	int i;
	for(i=0;i<=(this->curr_length);i++){
		//printf("%d\n",this->curr_length);
		table[i].printRow();
		cout<<endl;
	}
}
symbolTableRow *symbolTable::gentemp(typeSpecifier temp){
	treeNodeType *t = newNode(temp,-1);
	char *s = new char[10];
	sprintf(s,"t%d",tempCount);
	tempCount++;
	int temp_size = 0;
	switch(temp){
		case _INT : temp_size = SIZE_OF_INT;
					break;
		case _CHAR : temp_size = SIZE_OF_CHAR;
					break;
		case _DOUBLE : temp_size = SIZE_OF_DOUBLE;
					break;
		case _PTR : temp_size = SIZE_OF_PTR;
					break;
	}
	symbolTableRow x(s,t,0,temp_size,-1,0);
	this->insert(x);
	return &((this->table)[curr_length]);
}

void symbolTable::update(symbolTableRow *sym, treeNodeType *typ, int size){
	symbolTableRow *test = this->lookup(sym->name);
	test->Type = typ;
	test->size = size;
	test->offset = table[curr_length].offset+size;
}

void symbolTable::update(symbolTableRow *sym, initializerAttr init)
{
	if(sym->Type->middle == _INT)
		(int *)(sym->initialValue(init.intData));
	else if(sym->Type->middle == _DOUBLE)
		(double *)(sym->initialValue(init.doubleData));
	else if(sym->Type->middle == _CHAR)
		(char *)(sym->initialValue(init.charData));
}
/* Implementation of quadArrayRow */

quadArrayRow::quadArrayRow(char *arg1_f, char *arg2_f, char *res_f, quadEnum op_f, symbolTableRow *arg1_loc_f, symbolTableRow *arg2_loc_f, symbolTableRow *res_loc_f) : arg1(arg1_f), arg2(arg2_f), res(res_f), op(op_f), arg1_loc(arg1_loc_f), arg2_loc(arg2_loc_f), res_loc(res_loc_f) {}

quadArrayRow::~quadArrayRow() {}

void quadArrayRow::operator=(quadArrayRow &x){
	this->arg1 = x.arg1;
	this->arg2 = x.arg2;
	this->res = x.res;
	this->op = x.op;
	this->arg1_loc = x.arg1_loc;
	this->arg2_loc = x.arg2_loc;
	this->res_loc = x.res_loc;
}

void quadArrayRow::printQuadArrayRow(int line){
	if(this->arg2){
		switch(this->op){
			case PLUS : printf("%3d : %s = %s + %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case MINUS : printf("%3d : %s = %s - %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case INTO : printf("%3d : %s = %s * %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case DIV : printf("%3d : %s = %s / %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case PERCENT : printf("%3d : %s = %s %% %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case SL : printf("%3d : %s = %s << %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case SR : printf("%3d : %s = %s >> %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case LT : printf("%3d : %s = %s < %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case LTE : printf("%3d : %s = %s <= %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case GT : printf("%3d : %s = %s > %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case GTE : printf("%3d : %s = %s >= %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case EQ : printf("%3d : %s = %s == %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case NEQ : printf("%3d : %s = %s != %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case BW_AND : printf("%3d : %s = %s & %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case BW_XOR : printf("%3d : %s = %s ^ %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case BW_INOR : printf("%3d : %s = %s | %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case LOG_AND : printf("%3d : %s = %s && %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case LOG_OR : printf("%3d : %s = %s || %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case goto_LT : printf("%3d : if %s < %s goto %s\n",line,this->arg1,this->arg2,this->res);
						break;
			case goto_LTE : printf("%3d : if %s <= %s goto %s\n",line,this->arg1,this->arg2,this->res);
						break;
			case goto_GT : printf("%3d : if %s > %s goto %s\n",line,this->arg1,this->arg2,this->res);
						break;
			case goto_GTE : printf("%3d : if %s >= %s goto %s\n",line,this->arg1,this->arg2,this->res);
						break;
			case goto_EQ : printf("%3d : if %s == %s goto %s\n",line,this->arg1,this->arg2,this->res);
						break;
			case goto_NEQ : printf("%3d : if %s != %s goto %s\n",line,this->arg1,this->arg2,this->res);
						break;
			case call : printf("%3d : %s = call %s, %s\n",line,this->res,this->arg1,this->arg2);
						break;
			case EQ_BRACKET : printf("%3d : %s = %s[%s]\n",line,this->res,this->arg1,this->arg2);
						break;
			case BRACKET_EQ : printf("%3d : %s[%s] = %s\n",line,this->arg1,this->arg2,this->res);
						break;
		}
	}
	else{
		switch(this->op){
			case U_PLUS : printf("%3d : %s = %s\n",line,this->res,this->arg1);
						break;
			case U_MINUS : printf("%3d : %s = - %s\n",line,this->res,this->arg1);
						break;
			case BW_U_NOT : printf("%3d : %s = ~%s\n",line,this->res,this->arg1);
						break;
			case U_NEGATION : printf("%3d : %s = !%s\n",line,this->res,this->arg1);
						break;
			case U_ADDR : printf("%3d : %s = & %s\n",line,this->res,this->arg1);
						break;
			case U_STAR : printf("%3d : %s = * %s\n",line,this->res,this->arg1);
						break;
			case ASSIGN : printf("%3d : %s = %s\n",line,this->res,this->arg1);
						break;
			case GOTO : printf("%3d : goto %s\n",line,this->res);
						break;
			case IF_GOTO : printf("%3d : if %s goto %s\n",line,this->arg1,this->res);
						break;
			case IF_FALSE_GOTO : printf("%3d : ifFalse %s goto %s\n",line,this->arg1,this->res);
						break;
			case PARAM : printf("%3d : param %s\n",line,this->arg1);
						break;
			case RETURN_EXP : printf("%3d : return %s\n",line,this->arg1);
						break;
			case RETURN : printf("%3d : return\n",line);
						break;
			case Function : printf("%3d : %s : \n",line,arg1);
						break;
		}
	}
}

/* Implementation of class quadArray */

quadArray::quadArray(unsigned int capacity = MAX_SIZE){
	quadTable = new quadArrayRow[capacity];
	nextInstr = 0;
}
void emit(int line, quadEnum op, char *res, char *arg1, char *arg2){
	switch(op){
			case PLUS : printf("%3d : %s = %s + %s\n",line,res,arg1,arg2);
						break;
			case MINUS : printf("%3d : %s = %s - %s\n",line,res,arg1,arg2);
						break;
			case INTO : printf("%3d : %s = %s * %s\n",line,res,arg1,arg2);
						break;
			case DIV : printf("%3d : %s = %s / %s\n",line,res,arg1,arg2);
						break;
			case PERCENT : printf("%3d : %s = %s %% %s\n",line,res,arg1,arg2);
						break;
			case SL : printf("%3d : %s = %s << %s\n",line,res,arg1,arg2);
						break;
			case SR : printf("%3d : %s = %s >> %s\n",line,res,arg1,arg2);
						break;
			case LT : printf("%3d : %s = %s < %s\n",line,res,arg1,arg2);
						break;
			case LTE : printf("%3d : %s = %s <= %s\n",line,res,arg1,arg2);
						break;
			case GT : printf("%3d : %s = %s > %s\n",line,res,arg1,arg2);
						break;
			case GTE : printf("%3d : %s = %s >= %s\n",line,res,arg1,arg2);
						break;
			case EQ : printf("%3d : %s = %s == %s\n",line,res,arg1,arg2);
						break;
			case NEQ : printf("%3d : %s = %s != %s\n",line,res,arg1,arg2);
						break;
			case BW_AND : printf("%3d : %s = %s & %s\n",line,res,arg1,arg2);
						break;
			case BW_XOR : printf("%3d : %s = %s ^ %s\n",line,res,arg1,arg2);
						break;
			case BW_INOR : printf("%3d : %s = %s | %s\n",line,res,arg1,arg2);
						break;
			case LOG_AND : printf("%3d : %s = %s && %s\n",line,res,arg1,arg2);
						break;
			case LOG_OR : printf("%3d : %s = %s || %s\n",line,res,arg1,arg2);
						break;
			case goto_LT : printf("%3d : if %s < %s goto %s\n",line,arg1,arg2,res);
						break;
			case goto_LTE : printf("%3d : if %s <= %s goto %s\n",line,arg1,arg2,res);
						break;
			case goto_GT : printf("%3d : if %s > %s goto %s\n",line,arg1,arg2,res);
						break;
			case goto_GTE : printf("%3d : if %s >= %s goto %s\n",line,arg1,arg2,res);
						break;
			case goto_EQ : printf("%3d : if %s == %s goto %s\n",line,arg1,arg2,res);
						break;
			case goto_NEQ : printf("%3d : if %s != %s goto %s\n",line,arg1,arg2,res);
						break;
			case call : printf("%3d : %s = call %s, %s\n",line,res,arg1,arg2);
						break;
			case EQ_BRACKET : printf("%3d : %s = %s[%s]\n",line,res,arg1,arg2);
						break;
			case BRACKET_EQ : printf("%3d : %s[%s] = %s\n",line,arg1,arg2,res);
						break;
		}
}

void emit(int line,quadEnum op, char *res, char *arg1){
	switch(op){
			case U_PLUS : printf("%3d : %s = %s\n",line,res,arg1);
						break;
			case U_MINUS : printf("%3d : %s = - %s\n",line,res,arg1);
						break;
			case BW_U_NOT : printf("%3d : %s = ~%s\n",line,res,arg1);
						break;
			case U_NEGATION : printf("%3d : %s = !%s\n",line,res,arg1);
						break;
			case U_ADDR : printf("%3d : %s = & %s\n",line,res,arg1);
						break;
			case U_STAR : printf("%3d : %s = * %s\n",line,res,arg1);
						break;
			case GOTO : printf("%3d : goto %s\n",line,res);
						break;
			case IF_GOTO : printf("%3d : if %s goto %s\n",line,arg1,res);
						break;
			case IF_FALSE_GOTO : printf("%3d : ifFalse %s goto %s\n",line,arg1,res);
						break;
			case PARAM : printf("%3d : param %s\n",line,arg1);
						break;
			case RETURN_EXP : printf("%3d : return %s\n",line,arg1);
						break;
			case RETURN : printf("%3d : return\n",line);
						break;
			case Function : printf("%3d : %s : \n",line,arg1);
						break;
		}
}

void emit(int line,char *res, char *arg1){
	printf("%3d : %s = %s\n",line,res,arg1);
}

void quadArray::print(){
	int i;
	for(i = 0;i < nextInstr;i++){
		quadTable[i].printQuadArrayRow(i);
}

void quadArray::fillDanglingGoto(int index, int data){
	char *temp = new char[10];
	sprintf(temp,"%d",data);
	((this->quadTable)[index]).res = temp;
}
/* Global Functions */
symbolTable *createSymbolTable(){										// Creates a symbol table and returns a pointer to it
	symbolTable *st = new symbolTable(MAX_SIZE);
	return st;
}

/* Prints the expression tree */
void printTree(treeNodeType *temp){
	while(temp){
		switch(temp->middle){
			case _MATRIX : cout<<"Matrix ";
			break;
			case _VOID : cout<<"void ";
			break;
			case _INT : cout<<"int ";
			break;
			case _DOUBLE : cout<<"double ";
			break;
			case _CHAR : cout<<"char ";
			break;
			case _PTR : cout<<"ptr ";
			break;
			case _FUNC : cout<<"function ";
			break;
			default : cout<<"No Type ";
		}
		if(temp->left)
			cout<<*(temp->left)<<" ";
		temp = temp->right;
	}
}
void printInitialValue(void *temp, treeNodeType *t){
	if(!temp)
		cout<<"... ";
	else{
		switch(t->middle){
			case _INT : cout<<(*((int *)temp))<<" ";
						break;
			case _DOUBLE : cout<<(*((double *)temp))<<" ";
						break;
			case _CHAR : cout<<(*((char *)temp))<<" ";
						break;
		}
	}
}
treeNodeType *newNode(typeSpecifier t, int val){
	treeNodeType *temp = new treeNodeType;
	temp->middle = t;
	//printf("%d\n",temp->middle);
	if(t == _MATRIX)
		temp->left = new int(val);
	else
		temp->left = 0;
	//printf("Cool\n");
	temp->right = 0;
	//printf("Hot\n");
	return temp;
}
treeNodeType *mergeNode(treeNodeType *sub, treeNodeType *one_node){
	if(!sub) return one_node;
	treeNodeType *temp = sub;
	while(temp->right)
		temp = temp->right;
	temp->right = one_node;
	return sub;
}

listNode *makelist(int id){
	listNode *temp = new listNode;
	temp->dangling_index = id;
	temp->next = 0;
	return temp;
}

listNode *merge(listNode *l1, listNode *l2){
	if(!l1) return l2;
	if(!l2) return l1;
	listNode *temp = l1;
	while(temp->next)
		temp = temp->next;
	temp->next = l2;
	return l1;
}

void backpatch(listNode *l, int data){
	listNode *temp = l;
	while(temp){
		quad_array->fillDanglingGoto(temp->dangling_index,data);
		temp = temp->next;
	}
}

int typecheck(treeNodeType *t1, treeNodeType *t2){
	if(!t1 && !t2) return 1;
	if(!t1) return 0;
	if(!t2) return 0;
	return (t1->middle == t2->middle) && typecheck(t1->right,t2->right);
}

void conv2Bool(expressionAttr *E){
	if(((E->type)->middle) != BOOL){
		E->FL = makelist(nextInstr);
		char *arg1 = strdup((E->loc)->name);
		char *arg2 = new char[10];
		sprintf(arg2,"0");
		quadArrayRow x(arg1,arg2,0,goto_EQ,E->loc,0,0);
		quad_array->emit(x);
		E->TL = makelist(nextInstr);
		quadArrayRow y(0,0,0,GOTO,0,0,0);
		quad_array->emit(y);
	}
}

int compute_width(treeNodeType *temp){
	if(!temp) return 0;
	int width = 1;
	while(temp){
		switch(temp->middle){
			case _MATRIX : width *= (*temp->left);
						break;
			case _INT : width *= 4;
						break;
			case _DOUBLE : width *= 8;
						break;
			case _CHAR : width *= 1;
						break;
			case _PTR : width *= 4;
						break;
		}
		if(temp->middle == _PTR)
			break;
		temp = temp->right;
	}
	return width;
}

listParam *makeParamList(symbolTableRow *p){
	listParam *temp = new listParam;
	temp->parameter = p;
	temp->next = 0;
	return temp;
}

listParam *mergeParamList(listParam *l1, listParam *l2){
	if(!l1) return l2;
	if(!l2) return l1;
	listParam *temp = l1;
	while(temp->next)
		temp = temp->next;
	temp->next = l2;
	return l1;
}

/* Global variables */
treeNodeType *t = 0;
int w;
symbolTable *globalSymTable = 0;
symbolTable *currentSymTable = 0;
symbolTable *tempUseSymTable = 0;
int flag1 = 0;
int flag2 = 0;
int c = 0;
char *func_name;								// May not be required
int line_count = 0;
int temp_count = 0;
int nextInstr = 0;
quadArray *quad_array = 0;
int flag_array = 0;

/* And the main function finally */
int main(){
  global = createSymbolTable();
  currentSymTable = globalSymTable;
  quad_array = new quadArray(10000);
  int x = yyparse();
  printf("Global Symbol Table : \n");
  global->print();
  int i,j;
  for(i=0;i<=global->curr_length;i++){
  	if((global->table[i]).nestedTable){
  		printf("%s Symbol table :  \n",(global->table[i]).name);
  		((global->table[i]).nestedTable)->print();
  	}
  }
  quad_array->print();
  return 0;
}




