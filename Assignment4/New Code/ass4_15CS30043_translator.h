#ifndef __TRANSLATOR_H
#define __TRANSLATOR_H

#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

#define SIZE_CHAR 		1 		//Size of a character in bytes		
#define SIZE_INT 		4 		//Size of an integer in bytes
#define SIZE_DOUBLE 	8 		//Size of a double in bytes
#define SIZE_VOID 		0 		//Size of a void type (function) in bytes
#define SIZE_POINTER 	4		//Size of a pointer in bytes

typedef enum{
	t_integer = 0,				//integer type
	t_double,					//double type
	t_char,						//character type 
	t_void,						//void type
	t_func,
	t_pointer,					//pointer type 
	t_mat,						//matrix type 
	t_Bool						//Implicit Boolean type	
}basictype;	 



class type;

class type{									//class to store the information related to the type of variable
public:

	basictype actype;						//basic type of the variable

	int size;								//size in bytes of the variable

	int rows;								//for Matrix
	int cols;								//for Matrix

	type* pointerto;						//for pointers 	

	type* retval;							//for functions						

	type();

	type(basictype b);						//constructor to make a type for the basictype b

	type(basictype b,int rows, int cols);	//constructor for 2D matrices  

	int get_size();							//function to get the size of the type
};


bool are_same_type(type E1,type E2);		//function to check whether E1 and E2 are of the same type or not

class symboltable;							//class for the symbol table 


union initialVal{							//a union to store the initial value of the symbol table entry which can be either an int, double, char or string
	int intVal;
	double dbVal;
	char* charVal;
	char* strVal;
	};

class symentry{								//class for a symbol table entry 
public:

	string name;							//name of the entry 

	type t;									//type of the entry 

	initialVal init;						//initial value of the entry 

	unsigned int offset;					//offset value 

	int size;								//size in bytes required for the variable

	symboltable* nested_table;				//pointer to a nested symbol table in case of functions 

	symentry(string name);					//constructor to create a new entry with the name passed as a parameter 

	void setInitialVal(initialVal i);		//function to set the initial value field of the symbol table entry

};

class symboltable{							//class for the symtoltable
public:

	int offset;								//offset of the last entry of the symbol table 

	string name;							//name of the symbol table 

	vector<symentry*> symentries;			//Entries in the symbol table are being stored in a vector

	symboltable(string s);					//constructor to create a symbol table with name s 

	bool isPresent(string);

	symentry* lookup(string n);				//checks if an entry with name n is present in the symbol table and returns a pointer to it if present. If not, creates an entry with name n in the symbol table and returns a pointer to it

	symentry* gentemp(type ty);				//generates a temporary variable of type ty and adds it to the symbol table 

	void update(symentry* entry,type t);	//updates the type of a symbol table entry

	void update(symentry* entry,symboltable* nestedtable);	//updates the nestedtable field of an entry 

	void print();							//prints the symbol table
};

class quadentry{							//class for a quad
public:	

	string op;								//operation
	string arg1;							//argument 1 
	string arg2;							//argument 2 
	string res;								//result 

	quadentry(string op, string arg1, string arg2, string res);	//constructor of a quad for a binary operation with all fields present
	quadentry(string op, string arg1, string res);				//constructor of a quad for a unary operation
	quadentry(string arg1, string res);							//constructor of a quad for a copy operation
};

class quadArray{
public:
	int nextinstr;

	vector<quadentry> quadarray;

	quadArray();

	void emit(string op, string arg1, string arg2, string res); 	//emit for binary operations 

	void emit(string op, string arg1, string res);					//emit for unary operations

	void emit(string arg1, string res);								//emit for copy operation

	void print();													//function to print the quads in the quadarray
};

struct exp_attr{	

	symentry* addr;													
	
	type* t_exp;

	symentry* mat;

	vector<int>	*truelist;

	vector<int>	*falselist;

	bool isMattype;

	bool isPtrtype;
};

typedef struct{
	char* name;

	symentry* loc;
}id_attr;

typedef struct 
{
	type* t_dec;

	int size;	
}dec_attr;

vector<int>* makelist(int i);

vector<int>* merge(vector<int>* p1, vector<int>* p2);

void backpatch(vector<int>* p, int i);

void typecheck(exp_attr* E1, exp_attr* E2);

void double2int(exp_attr* E);

void int2double(exp_attr* E);

void char2int(exp_attr* E);

void int2char(exp_attr* E);

void bool2int(exp_attr* E);

void int2bool(exp_attr* E);

#endif
