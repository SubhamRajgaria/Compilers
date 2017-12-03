#define BUFF 10000
#include "myl.h"
#include <stdio.h>

int printStr(char *input)
{ 
	char buff[BUFF];
	int size=0,bytes;
	while(input[size]!='\0')
	{
		buff[size] = input[size];	
		size++;
	}
	//buff[size] = '\n';
	bytes = size;
	__asm__ __volatile__ (
		"movl $1, %%eax \n\t"
		"movl $1, %%edi \n\t"
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
	//buff[size]='\n';
	bytes = size;
	__asm__ __volatile__ (
		"movl $1, %%eax \n\t"
		"movl $1, %%edi \n\t"
		"syscall \n\t"
		:
		:"S"(buff), "d"(bytes)
	); 
	return bytes;
}
int readInt(int *ep)
{
	char buff[1];
	char n[20];
	int num=0,len=0,i;
	while (1) {
	 __asm__ __volatile__ ("syscall"::"a"(0), "D"(0), "S"(buff), "d"(1));/*reading inputs one by one from STDIN to buff*/
		if(buff[0]=='\t'||buff[0]=='\n'||buff[0]==' ') break;/*breaks at the first encounter of whitespace*/
		else if (((int)buff[0]-'0'>9||(int)buff[0]-'0'<0)&& buff[0]!='-') *ep=1;/*only '-' or digits are allowed, else error*/
		else{
			n[len++]=buff[0]; 
		}
	}
	if(len>9||len==0){/*less than 9 bits allowed, keeping in mind the range of int in C*/
		*ep=1;
		return 0;
	}
	if (n[0]=='-') {
		if(len==1) {
			*ep=1;
			return 0;
		}
		for (i=1;i<len;i++) {
			if(n[i]=='-') *ep=1;/*a number can contain '-' only at the starting of the number*/
			num*=10;
			num+=(int)n[i]-'0';
		}
		num=-num;
	}
	else{
		for (i=0;i<len;i++) {
			if (n[i]=='-') *ep=1;/*a number can contain '-' only at the starting of the number*/
			num*=10;
			num+=(int)n[i]-'0';
		}
	}
	return num;/*number is returned*/
}
int readFlt(double *f)
{
	double temp;
	double temp1 = 0;
	double temp2 = 0;
	int i = 0;
	int neg = 0;
	int len;
	char buff[BUFF] = "";
	__asm__ __volatile(
		"movl $0,%%eax \n\t"
		"movq $0, %%rdi \n\t"
		"syscall \n\t"
		:"=a"(len)
		:"S"(buff),"d"(BUFF)

		); // $1: write, $1: on stdin
	len = len -1;
	if(buff[0] == '-')
	{
		neg = 1;
		i++;
		if(len == 1)
			return ERR;
	}
	else if((buff[0] < '0' || buff[0] > '9') && buff[0] != '.')
	{
		return ERR;
	}
	while(buff[i] != '.' && i <= len - 1)
	{	
		if(buff[i] >= '0' && buff[i] <= '9')
		{
			temp1 = temp1*10 + (int)(buff[i] - '0');
			i++;
		}
		else
		{
			len = -1; 
			break;
		}
	}
	if(buff[i] == '.')
	{
		if(len == 1 || (len == 2 && neg == 1))
			return ERR;
		int k = 0;
		i++;
		while(i <= len -1)
		{
			if(buff[i] >= '0' && buff[i] <= '9')
			{
				temp2 = temp2*10 + (int)(buff[i] - '0');
				i++;
				k++;
			}
			else
			{
				len = -1; 
				break;
			}
		}
	while(k--)
	{
		temp2 = temp2/10;
	}
	}
	temp = temp1 + temp2;
	if(neg == 1)
		temp = -temp;
	if(len < 0)
		return ERR;
	else{
		*f = temp;
		return OK; 
	}
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
		"movl $1, %%edi \n\t"
		"syscall \n\t"
		:
		:"S"(buff), "d"(bytes)
	); 
	return bytes;
}
