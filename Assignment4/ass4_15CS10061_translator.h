#ifndef __ASS4_15CS10061_TRANSLATOR_INCLUDED
#define __ASS4_15CS10061_TRANSLATOR_INCLUDED

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
#include <map>

using namespace std;

#define SIZE_OF_VOID    0
#define SIZE_OF_CHAR    1
#define SIZE_OF_INT     4
#define SIZE_OF_DOUBLE  8
#define SIZE_OF_PTR     4
#define SIZE_OF_BOOL    1
#define SIZE_OF_FUNC    0

class symTable;

// enum for basic types
typedef enum {
    _BOOL = 0,
    _CHAR,
    _INT,
    _MATRIX,
    _DOUBLE,
    _ARR,
    _FUNC,
    _VOID,
    _PTR
} typeSpecifier;

class type{
public:
	typeSpecifier basic;
	// To store size of the type
	int size;
	// For arrays
	type *next;
	// for matrices
	int no_rows, no_cols;
	type();
	type(typeSpecifier t);
	type(const type & t);
	int getSize(); 
	void print();
};

bool isEqual(type *t1, type *t2);

typedef union {
	int intVal;
	double doubleVal;
	char charVal;
}initialVal;

class symTabEntry{
public:
	string name;
	type *t;
	initialVal init;
	string scope;
	bool wasInitialised;
	// size
	int size;
	// offset w.r.t its symbol table
	int offset;
	// nested table (in case of functions)
	symTable * nestedTable;
    symTabEntry(string s = "local");
    void print();
};

extern int tempCount;

class symTable{
public:
	// offset value
    int offset;
    // name of the table
    string name;
    // list of entries of the table
    int sizeLocal;

    int sizeParam;
    vector <symTabEntry *> entries;
    symTabEntry * lookUp(string name);
    symTabEntry * genTemp(type * t);

    void update(symTabEntry * s, type * t, int size);

    void update(symTabEntry * s, initialVal init);

    symTable();

    symTable(string s);

    void print();

    bool isPresent(string s);
};

extern symTable * globalSymTable;
extern symTable * currSymTable;
extern symTable * tempTable;
extern map <string, int> uniqueLabels;
extern vector <string> strLabels;

typedef enum 
{
	//binary operations
	OP_ADD=1,
	OP_SUB,
	OP_MUL,
	OP_DIV,
	OP_MOD,
	OP_SHL,
	OP_SHR,
	OP_LT,
	OP_LTE,
	OP_GTE,
	OP_GT,
	OP_BIT_AND,
	OP_BIT_OR,
	OP_BIT_XOR,
	OP_EQUAL,
	OP_NOT_EQUAL,
	OP_AND,
	OP_OR,
	// unary operators
	OP_BIT_NOT,
	OP_UMINUS,
	OP_UPLUS,
	OP_NEG,
	OP_TRANSPOSE,
	OP_T,
    OP_F,
    OP_INT2DBL,
    OP_DBL2INT,
    OP_INT2CHAR,
    OP_CHAR2INT,
    // copy
    OP_COPY,
    // unconditional jump
    OP_GOTO,
    // conditional jump
    // procedure call
    OP_PARAM,
    OP_CALL,
    // return value
    OP_RETURN_VAL,
    OP_RETURN,
    //index copy instr for matrix
    OP_FROM_MAT,
    OP_TO_MAT,
    // address and pointer assignment
    OP_L_VAL_AT,
    OP_R_VAL_AT,
    OP_L_INDEX,
    OP_R_INDEX,
    OP_ADDR,
    // for identifying functions
    OP_FUNC_START,
    OP_FUNC_END
}instr_set;

class quadEntry{
public:
	instr_set op;
	string result, arg1, arg2;
	int labelIdx;
	quadEntry(instr_set o, string s1 = "", string s2 = "", string s3 = "");
    quadEntry(instr_set o, string s1, char c);
    quadEntry(instr_set o, string s1, int n);
    quadEntry(instr_set o, string s1, double d);
    void print();

};

// structure for list of quad to be generated
typedef struct  {
    // index of next quad to be generated
    int nextInstr;
    // width of current type
    int width;
    // pointer of current type
    type* t;
    // List of quads
    vector <quadEntry> quad_v;
    void emit(quadEntry q);
    void print();
}quadList;

extern quadList* quad;

vector<int> makelist(int index);

vector<int> mergeList(vector<int> l1, vector<int> l2);

string i2s(int n);

// attribute for expression type non terminals
typedef struct  {
    // true list
    vector<int> trueList;
    // false list
    vector<int> falseList;
    // pointer to entry in symbol table
    symTabEntry * loc;
    // pointer to entry of base array in symbol table
    symTabEntry * array;
    // pointer of type
    type * t;
    // flag to store if this is of array type
    bool isArrayType;
	bool isMatrixType;
    // flag to store if this is of pointer type
    bool isPtrType;

    bool isString;

    int strLabel;
	symTabEntry * arrayLoc;	
	initialVal init;
}expr;

// attribute for declaration type non terminals
typedef struct  {
    type * t;
    int width;
}decl;

// attribute for identifier
typedef struct  {
    // name
    string *strVal;
    // pointer to entry in symbol table
    symTabEntry * loc;
}idf;

extern type *typ;
void conv2Bool(expr * e);
void convBool2Int(expr * e);
void backPatch(vector<int> & p, int addr);
bool typeCheck(expr * e1, expr * e2, bool isAssignment = false);
bool checkParams(expr e, vector <expr * > * v);
type* mergeTypes(type *t1, type *t2);


#endif



