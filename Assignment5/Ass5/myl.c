# include "myl.h"
# define MAX_LENGTH 100
//# include <stdio.h>
// Takes an array of characters and printStrtr it
int printStr(char *str){  //str is null terminated
    int no_of_chars = 0;
    while(*(str+no_of_chars)){
        no_of_chars++;
    }
    __asm__ __volatile__(
          "movl $4, %%eax \n\t"
          "movl $1, %%ebx \n\t"
          "int $128 \n\t"
          :
          : "c"(str), "d"(no_of_chars)
    );
    return no_of_chars;
}
// Takes an integer and converts it to a stream of characters and printStrtr it
// Returns the number of characters
int printInt(int n){
    int i = 0, dig, start, last;
    char buff[MAX_LENGTH], temp;
    if(!n)
        buff[i++] = '0';
    else if(n<0){
        buff[i++] = '-';
        n = (-1)*n;
    }
    start = i;
    // Extract all the digits in reverse order
    while(n>0){
        dig = n%10;
        buff[i++] = (char)(dig + '0');
        n = n/10;
    }
    // Now reverse the array
    last = i-1;
    while(start<=last){
        temp = buff[start];
        buff[start++] = buff[last];
        buff[last--] = temp;
    }
    buff[i] = '\0';
    __asm__ __volatile__(
          "movl $4, %%eax \n\t"
          "movl $1, %%ebx \n\t"
          "int $128 \n\t"
          :
          : "c"(buff), "d"(i)
    );
    return i;
}
// Reads an integer and returns it
// (*ep) = 1 if the input character array contains non numeral characters otherwise (*ep) = 0
int readInt(int *ep){
    char str[MAX_LENGTH];
    int i = 0, start = 0, last;
    do{
        __asm__ __volatile__(
            "movl $3, %%eax \n\t"
            "movl $0, %%ebx \n\t"
            "int $128 \n\t"
            :
            :"c"(str+i), "d"(1)
        );
    }while(str[i++]!='\n');
    i--;
    last = i-1;
    if(str[0] == '-')
        start = 1;
    // Convert the array of characters to number
    int temp = 0;
    while(start<=last){
	if(str[start]<'0'||str[start]>'9'){      //If the array contains a non numeral character
		(*ep) = ERR;
		return (*ep); 	
	}        
	temp = temp*10 + (int)(str[start++]-'0');
    }
    if(str[0] == '-')
        temp = temp*(-1);
    (*ep) = OK;
    return temp;
}
// Reads a floating point number and stores it in fp
// Returns the error status
int readFlt(float *fp){
    //printf("Yo\n");	
    char str[MAX_LENGTH];
    int i = 0,start = 0, fact = 1;
    do{
         //printf("Hi\n");
         __asm__ __volatile__(
            "movl $3, %%eax \n\t"
            "movl $0, %%ebx \n\t"
	    "int $128 \n\t"
            :
            : "c"(str+i), "d"(1)
        );
    }while(str[i++]!='\n');
    i--;
    if(str[0] == '-')
        start = 1;
    //int count = 0;
    while(start<i&&str[start]!='.'){
	//printf("%c",str[start]);	
	if(str[start]<'0'||str[start]>'9'){
		//printf("%d\n",count++);		
		(*fp) = ERR;
		return ERR;
	}    	
	(*fp) = (*fp)*10 + (str[start++] - '0');
    }
    start++;
    while(start<i){
	if(str[start]<'0'||str[start]>'9'){
		(*fp) = ERR;
		return ERR;
	}           
	(*fp) = (*fp)*10 + (str[start++] - '0');
        fact = fact * 10;
    }
    (*fp) = (*fp)/fact;
    if(str[0] == '-')
        (*fp) = (-1)*(*fp);
    return OK;
}
// takes a floating point number and printStrtr it
// Returns the no of characters
int printFlt(float f){
    char str[MAX_LENGTH];
    int i = 0,start = 0;
    if(f == 0.0)
        str[i++] = '0';
    else if(f<0){
        str[i++] = '-';
        f = (-1)*f;
        start = 1;
    }
    int integer_part = (int)f;
    double f_part = f - integer_part;
    while(integer_part){
        str[i++] = (char)((integer_part%10)+'0');
        integer_part/=10;
    }
    int last = i-1;
    while(start<last){
        int temp = str[start];
        str[start++] = str[last];
        str[last--] = temp;
    }
    str[i++] = '.';
    start = i;
    if(f_part == 0.0)
        str[i++] = '0';
    else{
        int no_of_times = 0;
	int rem = 0;
	// int diff = f_part - rem;
        while(no_of_times<4){
            rem = (int)(f_part*10);
            str[i++] = (char)(rem + '0');
            f_part*=10;
            f_part = f_part - rem;
	    no_of_times++;
        }
    }
    __asm__ __volatile__(
		"movl $4, %%eax \n\t"
		"movl $1, %%ebx \n\t"
		"int $128 \n\t"
		:
		:"c"(str), "d"(i)
	);
    return i;
}
