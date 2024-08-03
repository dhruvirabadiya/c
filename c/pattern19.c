#include<stdio.h>
/*
 5
 4  5
 3  4  5
 2  3  4  5
 1  2  3  4  5
*/
int main(){
       char v='A';
	   for(char i='A';i<='E';i++){
	      for(char j='A';j<=i;j++){
		     printf(" %c ",v++);
		  }
		  printf("\n");
	   }
}