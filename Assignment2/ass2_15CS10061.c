#define BUFF 20
#include "myl.h"

int printStr(char *input)
{ 
	char buff[BUFF];
	int size=0,bytes;
	while(input[size]!='\0')
	{
		buff[size] = input[size];	
		size++;
	}
	buff[size] = '\n';
	bytes = size+1;
	__asm__ __volatile__ (
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(buff), "d"(bytes)
	); 
	return size;
}
int printInt(int n)
{
	char buff[BUFF];
	char zero = '0';
	int size=0,bytes,j,k;
	if(n==0)
		buff[size++] = zero;
	else{
		if(n<0){
			buff[size++] = '-';
			n= -n;
		}
		while(n>0)
		{
			int dig = n%10;
			buff[size++] = (char)(zero+dig);
			n= n/10;
		}
		if(buff[0]=='-')
			j=1;
		else
			j=0;
		k=size-1;
		while(j<k)
		{
			char temp = buff[j];
			buff[j++] = buff[k];
			buff[k--] = temp;
		}
	}
	buff[size]='\n';
	bytes = size+1;
	__asm__ __volatile__ (
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(buff), "d"(bytes)
	); 
	return bytes;
}
int readInt(int *n)
{
	int INT_MAX = 2147483647, temp;
	char buff[BUFF], zero='0';
	int value=0, sign=1, i=0;
	__asm__ __volatile__ (
		"syscall \n\t"
		:"=a" (temp)
		:"a"(0), "D"(0), "S"(buff), "d"(BUFF)
	);
	if(buff[0]=='-'){
		sign = -1;
		i=1;
	}
	while(buff[i]!='\n' && i< BUFF)
	{
		int diff = (int)(buff[i]-zero);
		if(diff<0 || diff >9)
		{
			return ERR;
		}
		else{
			if(sign == -1)
			{
				if(value< INT_MAX/10)
					value = value*10+ diff;
				else if( value == INT_MAX/10 && diff==0)
					value = value*10+ diff;
				else
					return ERR;
			}
			else{
				if(value< (INT_MAX)/10)
					value = value*10+ diff;
				else if( value == (INT_MAX)/10 && diff==0)
					value = value*10+ diff;
				else
					return ERR;
			}
		}
		i++;
	}
	if(sign==-1)
		*n = -value;
	else
		*n = value;
	return OK;
}
int readFlt(double *f)
{
	int size = 46;
	char buff[size], zero='0';
	int sign=1, i=0;
	double value = 0, temp;
	double decimal = 0;
	int prd = 1;
	__asm__ __volatile__ (
		"syscall \n\t"
		:"=a" (temp)
		:"a"(0), "D"(0), "S"(buff), "d"(size)
	);
	if(buff[0]=='-'){
		sign = -1;
		i=1;
	}
	while(buff[i]!='\n' && i< size)
	{
		if(buff[i]=='.'){
			decimal = 1;
			i++;
			break;
		}
		int diff = (int)(buff[i]-zero);
		if(diff<0 || diff >9){
			return ERR;
		}
		else
			value = value*10 + diff;
		i++;
	}
	if(decimal == 1)
	{
		decimal = 0;
		int prev;
		while(buff[i]!='\n' && i< size)
		{
			int diff = (int)(buff[i]-zero);
			if(diff<0 || diff >9)
				return ERR;
			else if(decimal*10 > 1000000){
				if(diff>5){
					decimal = decimal+1;
					break;
				}
				else if(diff<5)
					break;
				else
				{
					if(prev%2==0)
						break;
					else
						decimal++;
				}	
			}
			else{
				decimal = decimal*10 + diff;
				prd = prd*10;
			}
			prev = diff;
			i++;
			
		}
	}
	decimal = decimal/prd;
	value = value+decimal;
	if(sign==-1)
		*f = -value;
	else
		*f = value;
	return OK;
}
int printFlt(double f)
{
	char buff[BUFF];
	char zero = '0';
	int size=0,bytes,j,k;
	int n = (int)f;
	double decimal = f-n;
	if (decimal<0)decimal = - decimal;
	if(n==0)
		buff[size++] = zero;
	else{
		if(n<0){
			buff[size++] = '-';
			n= -n;
		}
		while(n>0)
		{
			int dig = n%10;
			buff[size++] = (char)(zero+dig);
			n= n/10;
		}
		if(buff[0]=='-')
			j=1;
		else
			j=0;
		k=size-1;
		while(j<k)
		{
			char temp = buff[j];
			buff[j++] = buff[k];
			buff[k--] = temp;
		}
	}
	buff[size++] = '.';
	if(decimal == 0.0)
		buff[size++]='0';
	else{
		j = size;
		decimal = decimal*1000000;
		int deci = (int)decimal;
		int flag =0;
		while(deci>0)
		{
			int dig = deci%10;
			if(dig==0 && flag==0)
			{
				deci = deci/10;
				continue;	
			}
			else
				flag=1;
			buff[size++] = (char)(zero+dig);
			deci= deci/10;
		}
		k=size-1;
		while(j<k)
		{
			char temp = buff[j];
			buff[j++] = buff[k];
			buff[k--] = temp;
		}
	}
	buff[size]='\n';
	bytes = size+1;
	__asm__ __volatile__ (
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(buff), "d"(bytes)
	); 
	return bytes;
}
