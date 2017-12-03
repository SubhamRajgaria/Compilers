/* Handles complex array declarations and associated expressions */
int sum(Matrix arr[15][10], double n);
void main();
int sum(Matrix arr[15][10], double n) {
       int ans = 0, i, j = 4;
       for(i = 0; i < n; i++) {
               while(j >= 0) {
                       if(arr[i][j] > 0)
                               ans = ans + arr[i][j];	// Matrix element assignment
                       --j;
               }
       }
		Matrix arr2[15][10];
		Matrix arr3[15][10];
		Matrix arr4[15][10] = arr+arr3; // Matrix addition
		Matrix arr5[10][15];
		Matrix arr6 [15][15] = arr*arr5; // Matrix multiplication
       return ans;
}

void main() {
       Matrix a[15][10];	// Matrix declaration
       int total = 0;
       int x = 0;

       do {
               a[0][x] = x;
               x++;
       } while(x < 5);	// do while loop
       
       Matrix b[10][15] = a.';	// Transpose
	
       total = sum(a, 10.0);	

       return;
}
