#include<stdio.h>
/*
 a
 b  c
 d  e  f
 g  h  i  j
 k  l  m  n  o
*/
int main(){
    char v='a';
	for(char i='a';i<='e';i++){
	   for(char j='a';j<=i;j++){
	      printf(" %c ",v++);
	   }
	   printf("\n");
	}
}