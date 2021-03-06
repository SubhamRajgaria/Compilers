#ifndef ASS4_15CS10061_TRANSLATOR_INCLUDED
#define ASS4_15CS10061_TRANSLATOR_INCLUDED

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <map>
#include <cmath>
#include <stack>
#include <queue>
#include <cstring>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <assert.h>

using namespace std;

#define SIZE_OF_VOID    0
#define SIZE_OF_CHAR    1
#define SIZE_OF_INT     4
#define SIZE_OF_DOUBLE  8
#define SIZE_OF_PTR     4
#define SIZE_OF_BOOL    1
#define SIZE_OF_FUNC    0
#define MAX_SIZE 10000	// Assuming that more than 10000 quads will not be generated

class symTable;

// enum for basic types
typedef enum {
    _BOOL,
    _CHAR,
    _INT,
    _MATRIX,
    _DOUBLE,
    _FUNC,
	_ARR,
    _VOID,
    _PTR
} typeSpecifier;

// enum for operators
typedef enum {_DEFAULT, PLUS, MINUS, INTO, DIV, PERCENT,TRANS,
 SL, SR, LT, LTE, GT, GTE, EQ, NEQ, BW_AND, BW_XOR,
  BW_INOR, LOG_AND, LOG_OR, goto_LT, goto_LTE,
   goto_GT, goto_GTE, goto_EQ, goto_NEQ, call,
    EQ_BRACKET, BRACKET_EQ, U_PLUS, U_MINUS, BW_U_NOT,
     U_NEGATION, U_ADDR, U_STAR, ASSIGN, _GOTO, IF_GOTO, 
     IF_FALSE_GOTO, PARAM, RETURN_EXP, _RETURN, Function}quadEnum;	

typedef struct treeNodeType{		// One node of type expression tree
	typeSpecifier middle;
	int *left;
	int rows;
	int cols;
	struct treeNodeType *right;
}treeNodeType;

typedef struct listNode{		// Structure of a node of the list
	int dangling_index;
	struct listNode *next; 
}listNode;

class symbolTableRow; 
class symbolTable;
class symbolTableRow{	// One row of the symbol table
	public:
	char *name;
	treeNodeType *Type;
	void *initialValue;
	int size;
	int offset; 
	symbolTable *nestedTable;
	symbolTableRow(char * = 0 , treeNodeType * = 0, void * = 0, int = -1, int = -1, symbolTable * = 0); 
	~symbolTableRow();
	void operator=(symbolTableRow &);
	void printRow();
};

typedef struct listParam{
	symbolTableRow *parameter;
	struct listParam *next;
}listParam;

typedef struct quadArrayRow{
	char *arg1;
	char *arg2;
	char *res;
	quadEnum op;
	symbolTableRow *arg1Loc;
	symbolTableRow *arg2Loc;
	symbolTableRow *resLoc;
	quadArrayRow(char * = 0, char * = 0, char * = 0, quadEnum = _DEFAULT, symbolTableRow * = 0, symbolTableRow * = 0, symbolTableRow * = 0);
	~quadArrayRow();
	void operator=(struct quadArrayRow &);
	void printQuadArrayRow(int);
}quadArrayRow;

/* Structures for various attributes */
typedef union initializerAttr{		// Union for various constants
	int intData;
	double doubleData;
	char charData;
	int matrixI;		// Not used
	vector<double> *p;
	//double entries[10000];
}initializerAttr;

typedef struct expressionAttr{		// Structure for the attribute of expression grammar
	symbolTableRow *loc;			// E.loc or A.loc as need be
	listNode *TL;					// B.TL(truelist)
	listNode *FL;					// B.FL	(flaselist)
	listNode *NL;					// B.NL(nextlist)
	treeNodeType *type;				// A.type
	symbolTableRow *array;					
	symbolTableRow *loc1;					// A.array
	symbolTableRow *matrix;			// Unused
	symbolTableRow *loc2;			// Unused
	initializerAttr val;					// E.val for storing the value of the expression
	bool isMatrix;
}expressionAttr;

typedef struct varDeclaration{	// Structure for attributes of variable declaration grammar
	treeNodeType *type;
	int width;
	char *var;
}varDeclaration;

typedef struct identifierAttr{	// Attribute of identifier
	symbolTableRow *loc;
	char *var;
}identifierAttr;

/* Symbol Table Class */
class symbolTable{
public:
	symbolTableRow *table;
	int curr_length;
	symbolTable(unsigned int);
	~symbolTable();
	symbolTableRow *lookup(char *);
	void insert(symbolTableRow &);
	void update(symbolTableRow *, treeNodeType *, int);
	void update(symbolTableRow *, initializerAttr);
	symbolTableRow *gentemp(typeSpecifier);
	void print();
};
/* Quad array class */
class quadArray{
public:
	quadArrayRow *quadTable;
	quadArray(unsigned int);
	~quadArray();
	void emit(quadEnum op, char *res, char *arg1, char *arg2, symbolTableRow *, symbolTableRow *, symbolTableRow *);
	void emit(quadEnum op, char *res, char *arg1, symbolTableRow *, symbolTableRow *);
	void emit(char *res, char *arg1, symbolTableRow *, symbolTableRow *);
	void print();
	void fillDanglingGoto(int,int);
};

/* Global Functions */

symbolTable *createSymbolTable();	// Creates new symbol table
void printTree(treeNodeType *);		// Prints the tree of the nodes
void printInitialValue(void *,treeNodeType *);	// Prints initial vale of a symbol table entry
treeNodeType *newNode(typeSpecifier ,int);	// Generates a new node of specified typespecifier and given initial value
treeNodeType *mergeNode(treeNodeType *, treeNodeType *); // Merges two nodes of type
listNode *makelist(int);		// A global function to create a new list containing only i
listNode *merge(listNode *, listNode *);// A global function to concatenate two lists pointed to by p1 and p2
void backpatch(listNode *, int);	// A global function to insert i as the target label
int typecheck(treeNodeType *,treeNodeType *);  // checks the type of two expressions
void conv2Bool(expressionAttr *);	// converts relation expression to bool type and generates corresponding temporaries
int compute_width(treeNodeType *);	// Computes width of a typespecifier
listParam *makeParamList(symbolTableRow *);		// Makes a list of parameters going to a function
listParam *mergeParamList(listParam *, listParam *); // Merges two lists

/* Global Variables */

extern treeNodeType *t;
extern int w;
extern symbolTable *globalSymTable;	// Global Symbol Table
extern symbolTable *currentSymTable;	// Symbol Table currently in use
extern symbolTable *tempUseSymTable;	
extern int flag1;	// To know whether a function was previously declared or not
extern int flag2;	
extern int c;
extern char *funcName;	// May not be required
extern int lineCount;	// lineCount
extern int tempCount;	// Count of temporaries
extern int nextInstr;	// label value of next instruction
extern quadArray *quad_array;	// Next index of quad array
extern int flag_array;
extern int flag_matrix;
extern vector<double> matI[1000];	// To store initializer list of matrices
extern int counter;		// to count no of entries for one matrix
extern int matCount;	// count to keep track of initializer list while printing
#endif

