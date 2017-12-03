/* Test Matrix declarations, function calls  and nested loops */
int main();
int add(int a, double b); // Function definitions
int add(int a, double b){
	int c;
	c = a+b;	// Addition
	return c; // return value
}
int main(){
	int z,x,i;
	double y;
	Matrix ar1[5][10];  // Matrix declaration
	Matrix ar2[5][10] = {1.0,2.9,3.5,4.5,5.2;6.3,7.4,8.5,9.2,10.1};  // Matrix declaration with initialization
	Matrix ar4[2][3] = {2.3, 4.4, 5.5; 1.3, 7.7, 8.7}; // Matrix declaration with initialization
	z = add(x,y); 	// Function call
	ar2[5][5] = ar1[2][3] + z; 	// Matrix element addition
	z = ar2[5][5];		// Assigning of matrix element
	--ar2[5][5];
	Matrix ar3[10][5] = ar2.';	// Transpose of matrix
	double xz = ar3[1][1];
	for(i=1;i<=z;i++){	// for loop
		do{				// do while loop
			if(z>=5)
				z--;	// postfix decrement
		}while(z<=x);	
		while(z<=5)		// while loop
			x++;	// unary increment
	}
	--i;	// unary decrement
	++i;	// unary increment
	return z;	// return value
}
