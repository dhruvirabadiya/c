#include<stdio.h>
/*
  A B C D E
  F G H I J
  K L M N O
  P Q R S T
  U V W X Y 
*/
int main(){
    char i,j,a='A';
	for(i='A';i<='E';i++){
	   for(j='A';j<='E';j++){
	    printf("%c ",a++);
	   }
	   printf("\n");
	}
}