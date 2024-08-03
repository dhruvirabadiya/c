#include<stdio.h>
/*print H
        H E
        H E L
        H E L L
        H E L L O*/		
int main(){
     char str[20];
	 
	 printf("enter the string:");
	 gets(str);
	 
	 for(int i=0;str[i]!='\0';i++){
	    for(int j=0;j<=i;j++){
		  printf("%c ",str[j]);
		}
		printf("\n");
	 }
}