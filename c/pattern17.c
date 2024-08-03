#include<stdio.h>
/*
 A
 b  c
 D  E  F
 g  h  i  j
 K  L  M  N  O
*/
int main (){
     char a='A';
	 for(char i='A';i<='E';i++){
		for(char j='A';j<=i;j++){
			if(i%2!=0){
				printf(" %c ",a);
			}else{
				printf(" %c ",a+32);
			}
			a++;
		}
		printf("\n");
	 }
}

