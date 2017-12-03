#include "ass4_15CS30043_translator.h"
extern int yydebug;
extern char * yytext;
extern int yyparse();

extern int yylex();
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
extern int yyerror(string);

symboltable* globalsymboltable=new symboltable("GLOBAL");

symboltable* currentsymboltable=new symboltable("");

quadArray* quads = new quadArray();

type::type(){}

type::type(basictype b)
{
	actype = b;
	size = this->get_size();
	rows = 0;
	cols = 0;
	pointerto = NULL;
	retval = NULL;


}

type::type(basictype b, int rows, int cols)
{
	actype = b;
	size = this->get_size();
	this->rows = rows;
	this->cols = cols;
	this->pointerto=NULL;
	this->retval = NULL;

}

int type::get_size()
{
	switch(this->actype){
		
		case t_integer: return SIZE_INT;
						break; 
		
		case t_double: 	return SIZE_DOUBLE;
					   	break;
		
		case t_char:	return SIZE_CHAR;
						break;
		
		case t_void:	return SIZE_VOID;
						break;

		case t_func: 	return SIZE_VOID;
						break;
		
		case t_pointer:	return SIZE_POINTER;
						break;
		
		case t_mat:		return (this->rows*this->cols*SIZE_DOUBLE + 2*SIZE_INT);
						break;
	}
}

bool are_same_type(type E1, type E2)
{
	if(E1.pointerto == NULL && E2.pointerto == NULL)
	{
	if(E1.actype==E2.actype && E1.size==E2.size && E1.rows==E2.rows && E1.cols==E2.cols)
		return true;
	else 
		return false;
	}
	else if(E1.pointerto != NULL && E2.pointerto !=NULL) 
		return are_same_type(*(E1.pointerto),*(E2.pointerto));
	else 
		return false;
}

int count_temp=0;


symentry::symentry(string name)
{
	this->name = name;
	this->size = 0;
	this->nested_table = NULL; 
}

void symentry::setInitialVal(initialVal i)
{
	this->init = i; 
}

symboltable::symboltable(string s)
{
	offset = 0;
	name = s;
}

bool symboltable::isPresent(string n)
{
	int size = symentries.size();
	for(int i=0;i<size;i++)
	{
		if(symentries[i]->name == n)
			return true;
	}
	return false;
}

symentry* symboltable::lookup(string n)
{
	int size = symentries.size();
	for(int i=0;i<size;i++)
	{
		if(symentries[i]->name == n)
			return symentries[i];
	}
	symentry* newentry= new symentry(n);
	symentries.push_back(newentry);
	return newentry;

}

symentry* symboltable::gentemp(type ty)
{
	symentry* temp = new symentry("t");
	string s = "t";
	ostringstream str1;
	str1 << count_temp;
	s = s+str1.str();
	temp->name = string(s);
	count_temp++;
	temp->t=ty;
	temp->size=ty.get_size();
	temp->offset = this->offset;
	this->offset += temp->size;
	symentries.push_back(temp);
	return temp;
}

void symboltable::update(symentry* entry,type t)
{
	entry->t = t;
	entry->size = t.get_size();
	entry->offset = offset;
	this->offset += entry->size;
}

void symboltable::print(){
	int s = symentries.size();
	for(int i=0;i<s;i++)
	{
		cout << symentries[i]->name;
		cout << ":" << symentries[i]->t.actype << ":";
		cout << symentries[i]->size << endl;
	}
}


quadentry::quadentry(string op, string arg1, string arg2, string res)
{
	this->op = op;
	this->arg1 = arg1;
	this->arg2 = arg2;
	this->res = res;
}

quadentry::quadentry(string op, string arg1, string res)
{
	this->op = op;
	this->arg1 = arg1;
	this->arg2 = "";
	this->res = res;
}

quadentry::quadentry(string arg1,string res)
{
	this->op = "copy";
	this->arg1 = arg1;
	this->arg2 = "";
	this->res = res;
}

quadArray::quadArray(){
	nextinstr = 0;
}

void quadArray::emit(string op, string arg1, string arg2, string res)
{
	quadentry newentry(op,arg1,arg2,res);
	this->quadarray.push_back(newentry);
	this->nextinstr++;
}

void quadArray::emit(string op, string arg1, string res)
{
	quadentry newentry(op,arg1,res);
	this->quadarray.push_back(newentry);
	this->nextinstr++;
}

void quadArray::emit(string arg1, string res)
{
	quadentry newentry(arg1,res);
	this->quadarray.push_back(newentry);
	this->nextinstr++;
}

void quadArray::print()
{
	int s=quadarray.size();
	for(int i=0;i<s;i++)
		cout << quadarray[i].op << ":" << quadarray[i].arg1 << ":" << quadarray[i].arg2 << ":" <<quadarray[i].res << endl;
}


void int2char(exp_attr* E)
{
	exp_attr* E2 = new exp_attr();
	*E2 = *E;
	basictype t = t_char;
	E2->t_exp = new type(t);
	E2->addr = currentsymboltable->gentemp(*(E2->t_exp));
	quads->emit("(char)",E->addr->name,E2->addr->name);
	*E = *E2;

}

void char2int(exp_attr* E)
{
	exp_attr* E2 = new exp_attr();
	*E2 = *E;
	basictype t = t_integer;
	E2->t_exp = new type(t);
	E2->addr = currentsymboltable->gentemp(*(E2->t_exp));
	quads->emit("(int)",E->addr->name,E2->addr->name);
	*E = *E2;

}

void int2double(exp_attr* E)
{
	exp_attr* E2 = new exp_attr();
	*E2 = *E;
	basictype t = t_double;
	E2->t_exp = new type(t);
	E2->addr = currentsymboltable->gentemp(*(E2->t_exp));
	quads->emit("(double)",E->addr->name,E2->addr->name);
	*E = *E2;

}

void double2int(exp_attr* E)
{
	exp_attr* E2 = new exp_attr();
	*E2 = *E;
	basictype t = t_char;
	E2->t_exp = new type(t);
	E2->addr = currentsymboltable->gentemp(*(E2->t_exp));
	quads->emit("(int)",E->addr->name,E2->addr->name);
	*E = *E2;

}
void typecheck(exp_attr* E1, exp_attr* E2)
{
	if(are_same_type(*(E1->t_exp),*(E2->t_exp)))
		return;
	else
	{
		if(E1->t_exp->actype == t_integer && E2->t_exp->actype == t_char)
			int2char(E1);
		else if(E1->t_exp->actype == t_char && E2->t_exp->actype == t_integer)
			char2int(E1);
		else if(E1->t_exp->actype == t_integer && E2->t_exp->actype == t_double)
			int2double(E1);
		else if(E1->t_exp->actype == t_double && E2->t_exp->actype == t_integer)
			double2int(E1);
		else
		{
			cout << "Incompatible types";
			exit(-1);
		}
	}

}
void printlist(vector<int>* p)
{
	int size = p->size();
	cout << "[";
	for(int i=0;i<size;i++)
		cout << (*p)[i] << ",";
	cout << "]";
}

vector<int>* makelist(int i)
{
	vector<int> *v = new vector<int>(1,i);
	return v;

}

vector<int>* merge(vector<int>* p1, vector<int>* p2)
{
	vector<int> *newlist = new vector<int>(10);
	int s1 = p1->size();
	int s2 = p2->size();
	for(int i=0;i<s1;i++)
		newlist->push_back((*p1)[i]);
	for(int i=0;i<s2;i++)
		newlist->push_back((*p2)[i]);
	return newlist;
}

void backpatch(vector<int>* p, int i)
{
	printlist(p);
	int size = p->size();
	int index;
	ostringstream s1;
	s1 << i;
	string s = s1.str();
	for(int i=0;i<size;i++)
	{
		index = (*p)[i];
		quads->quadarray[index].res = s;
	}
}

int main()
{
	type* t = new type(t_pointer);
	symentry* tmp=currentsymboltable->lookup("p");
	currentsymboltable->update(tmp,*t);
	tmp->t.pointerto =new type(t_integer);
	yyparse();
	return 1;	
}

