int printInt(int n);
int main();
int main(){
 int i;
 i =0;
 int b;
 for(i =0; i< 5; i++)
 {
   b = printInt(i);
 }
 while(i >3){
   printInt(i);
   i--;
 }
 do{
    i = i+1;
    printInt(i);
 }while(i<10);
 return 0;
}

