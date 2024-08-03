#include<stdio.h>
/*
   A B C D E
   A B C D E
   A B C D E
   A B C D E
   A B C D E
*/
int main(){
    for(char i='A';i<='E';i++){
	   for(char j='A';j<='E';j++){
	     printf(" %c ",i);
	   }
	   printf("\n");
	}
}