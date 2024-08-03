#include<stdio.h>
//pattern with Function
void pattern1(){
     int i,j;
	 for(i=1;i<=5;i++){
	   for(j=1;j<=5;j++){
	     printf("%d",j);
	   }
	   printf("\n");
	 }
}

int main(){
   pattern1();
}