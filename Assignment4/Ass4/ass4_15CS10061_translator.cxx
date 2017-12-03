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
	printTree(Type);
	printf("\t\t");
	printInitialValue(initialValue,Type);
	printf("\t\t");
	//cout<<size<<"\t";
	if(Type->middle ==3)
		cout<<*(Type->left) * (*(Type->right->left))*8<< "+8"<<"\t"; // Printing size of a matrix in the format provided
	else
		cout<<size<<"\t";
	cout<<offset<<"\t";
	if(nestedTable == NULL)
		cout<<"... \t";
	else
		printf("%s \t",(nestedTable->table)[0].name);
	
	
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
	return 0;
}

void symbolTable::insert(symbolTableRow &x){	// Inserts a row in the symbol table. Also computes the offset
	if(curr_length == -1)
		x.offset = 0;
	else
		x.offset = table[curr_length].size + table[curr_length].offset;
	curr_length++;
	table[curr_length] = x;
	//printf("%d\n",table[0].offset);
}
void symbolTable::print(){				// Prints the symbol table
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
		case _MATRIX : temp_size = 1;	// The size of matrix is updated in the semantic rules
					break;
	}
	symbolTableRow x(s,t,0,temp_size,-1,0);
	this->insert(x);
	return &((this->table)[curr_length]);
}

symbolTableRow *symbolTable::gentempComplex(treeNodeType *tree){
	treeNodeType *temp = duplicateTree(tree);
	int size = compute_width(temp);
	char *s = new char[10];
	sprintf(s,"t%d", tempCount);
	tempCount++;
	symbolTableRow x(s, temp, 0, size, -1, 0);
	this->insert(x);
	return &((this->table)[curr_length]); 
}

void symbolTable::update(symbolTableRow *sym, treeNodeType *typ, int size){// update type and size of a symbol table entry
	symbolTableRow *test = this->lookup(sym->name);
	test->Type = typ;
	test->size = size;
	test->offset = table[curr_length].offset+size;
}

void symbolTable::update(symbolTableRow *sym, initializerAttr init) // update initialisation value of a symbol table entry
{
	if(sym->Type->middle == _INT){
		(int *)(sym->initialValue);
		sym->initialValue = &(init.intData);
	}
	else if(sym->Type->middle == _DOUBLE){
		(double *)(sym->initialValue);
		sym->initialValue = &(init.doubleData);
	}
	else if(sym->Type->middle == _CHAR){
		(char *)(sym->initialValue);
		sym->initialValue = &(init.charData);
	}
		
}
/* Implementation of quadArrayRow */

quadArrayRow::quadArrayRow(char *arg1_f, char *arg2_f, char *res_f, quadEnum op_f, symbolTableRow *arg1_loc_f, symbolTableRow *arg2_loc_f, symbolTableRow *res_loc_f) : arg1(arg1_f), arg2(arg2_f), res(res_f), op(op_f), arg1Loc(arg1_loc_f), arg2Loc(arg2_loc_f), resLoc(res_loc_f) {}

quadArrayRow::~quadArrayRow() {}

void quadArrayRow::operator=(quadArrayRow &x){
	this->arg1 = x.arg1;
	this->arg2 = x.arg2;
	this->res = x.res;
	this->op = x.op;
	this->arg1Loc = x.arg1Loc;
	this->arg2Loc = x.arg2Loc;
	this->resLoc = x.resLoc;
}

void quadArrayRow::printQuadArrayRow(int line){
	if(this->arg2){	// If binary operator
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
	else{	// for unary operators
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
			case _GOTO : printf("%3d : goto %s\n",line,this->res);
						break;
			case IF_GOTO : printf("%3d : if %s goto %s\n",line,this->arg1,this->res);
						break;
			case IF_FALSE_GOTO : printf("%3d : ifFalse %s goto %s\n",line,this->arg1,this->res);
						break;
			case PARAM : printf("%3d : param %s\n",line,this->arg1);
						break;
			case RETURN_EXP : printf("%3d : return %s\n",line,this->arg1);
						break;
			case _RETURN : printf("%3d : return\n",line);
						break;
			case Function : printf("%3d : %s : \n",line,this->arg1);
						break;
			case TRANS : printf("%3d : %s = %s .\' \n", line, this->res, this->arg1);
						break; 
			case LEFT_STAR : printf("%3d : * %s = %s\n",line, this->res, this->arg1 );
						break;
		}
	}
}

/* Implementation of class quadArray */

quadArray::quadArray(unsigned int capacity = MAX_SIZE){
	quadTable = new quadArrayRow[capacity];	// Making the array of quads
	nextInstr = 0;
}

// Function for quads of binary operators
void quadArray::emit(quadEnum op, char *res, char *arg1, char *arg2, symbolTableRow *loc1,symbolTableRow *loc2, symbolTableRow *loc3 ){
	quadArrayRow x(arg1,arg2,res,op,loc1,loc2,loc3);
	quadTable[nextInstr++] = x;
}

// Function for quads of unary operators
void quadArray::emit(quadEnum op, char *res, char *arg1, symbolTableRow *loc1,symbolTableRow *loc3){
	quadArrayRow x(arg1,0,res,op,loc1,0,loc3);
	quadTable[nextInstr++] = x;
}

// Function for assignment or copy insruction
void quadArray::emit(char *res, char *arg1, symbolTableRow *loc1,symbolTableRow *loc3){
	quadArrayRow x(arg1,0,res, ASSIGN,loc1,0,loc3);
	quadTable[nextInstr++] = x;
}

// Print quad array
void quadArray::print(){
	int i;
	for(i = 0;i < nextInstr;i++)
		quadTable[i].printQuadArrayRow(i);
}

// To update goto value
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
	int flag=1;
	while(temp){
		switch(temp->middle){
			case _ARR : cout<<"array ";
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
			case _MATRIX : cout << "Matrix(";
						flag=0;
			break;
			default : cout<<"No Type ";
		}
		if(flag==0){
			if(temp->right)	// For matrix 
				cout<<*(temp->left)<<", "<< *(temp->right->left)<< ", double)";
			else
				cout << ")";
			break;
		}
		if(temp->left)		// For arrays, not taken care of in this but can be easily modified later
			cout<<*(temp->left);
		temp = temp->right;
	}
}
void printInitialValue(void *temp, treeNodeType *t){
	if(t->middle ==3){	// if it is matrix type
		int i=0;
		vector <double> *out = (vector<double> *)temp;
		if(out){	// if it was initialised
			cout<< "{";
			vector <double> finale = matI[matCount ];
			for(i=0;i< finale.size()-1;i++)
				if(i==*(t->right->left)-1)
					cout<< finale[i]<<"; ";
				else
					cout<< finale[i]<<", ";
			cout<< finale[i]<< "} ";
			matCount++;
		}
		else
			cout << "...";
		return;
	}
	else if(!temp)
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
treeNodeType *newNode(typeSpecifier t, int val){	// Generate newNode
	treeNodeType *temp = new treeNodeType;
	temp->middle = t;
	//printf("%d\n",temp->middle);
	if(t == _ARR || t==_MATRIX)
		temp->left = new int(val);
	//else
	//	temp->left = 0;
	temp->right = 0;
	return temp;
}

treeNodeType *mergeNode(treeNodeType *sub, treeNodeType *one_node){	// Merge two type specifying nodes
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
		quad_array->fillDanglingGoto(temp->dangling_index,data);	// Adds data to unfilled goto label
		temp = temp->next;
	}
}

int typecheck(treeNodeType *t1, treeNodeType *t2){	
		if(!t1 && !t2) return 1;
		if(!t1) return 0;
		if(!t2) return 0;
		//cout << t1->middle<<endl;
		return (t1->middle == t2->middle) && typecheck(t1->right,t2->right);
}

void conv2Bool(expressionAttr *E){	// Generates true list and false list of an expression and adds goto statements
	if(((E->type)->middle) != _BOOL){
		E->FL = makelist(nextInstr);
		char *arg1 = strdup((E->loc)->name);
		char *arg2 = new char[10];
		sprintf(arg2,"0");
		quad_array->emit(goto_EQ, 0, arg1, arg2,E->loc,0,0 );
		E->TL = makelist(nextInstr);
		quad_array->emit( _GOTO, 0, 0, 0, 0);
	}
}

treeNodeType *duplicateTree(treeNodeType *temp){
	if(!temp) return 0;
	treeNodeType *tu;
	if(temp->middle == _MATRIX)
		tu = newNode(_MATRIX,*(temp->left));
	else if(temp->middle == _ARR)
		tu = newNode(_ARR, *(temp->left));
	else
		tu = newNode(temp->middle,-1);
	tu->right = duplicateTree(temp->right);
	return tu;
}

int compute_width(treeNodeType *temp){
	if(!temp) return 0;
	int width = 1;
	while(temp){
		switch(temp->middle){
			case _ARR : width *= (*temp->left);
						break;
			case _INT : width *= 4;
						break;
			case _DOUBLE : width *= 8;
						break;
			case _CHAR : width *= 1;
						break;
			case _PTR : width *= 4;
						break;
			case _MATRIX : width *= (temp->rows)*(temp->cols)*8;
							width += 8;
					break;	
		}
		if(temp->middle == _PTR || temp->middle == _MATRIX)
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
treeNodeType* t = 0;
int w;
symbolTable *globalSymTable = 0;
symbolTable * currentSymTable = 0;
symbolTable * tempUseSymTable = 0;
int flag1 = 0;
int flag2 = 0;
int c = 0;
char * func_name;	// May not be required
int lineCount = 0;
int tempCount = 0;
int nextInstr = 0;
quadArray *quad_array = 0;
int flag_array = 0;
int flag_matrix = 0;
int counter =0;
int matCount =0;
vector<double> matI[1000];
int starCount=0;
int leftOrRight=1;
int isLeft=0;
char **s;
char **toc;
int countToc=0;

/* And the main function finally */
int main(){
  globalSymTable = createSymbolTable();
  currentSymTable = globalSymTable;
  quad_array = new quadArray(10000);
  int x = yyparse();
  printf("Global Symbol Table : \n");
  globalSymTable->print();
  int i,j;
  for(i=0;i<=globalSymTable->curr_length;i++){
  	if((globalSymTable->table[i]).nestedTable){
  		printf("%s Symbol table :  \n",(globalSymTable->table[i]).name);
  		((globalSymTable->table[i]).nestedTable)->print();
  	}
  }
  quad_array->print();
  return 0;
}




