#include<stdio.h>
//print A-a to z-z
int main(){
     char i;
	 for(i='A';i<='Z';i++){
	  printf("%c - %c \n",i,i+32);
	 }
}