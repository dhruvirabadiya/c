#include<stdio.h>
/*
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *

*/
int main(){
	//upper half pyramid
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5-i;j++){
			printf(" ");
		}
		for(int k=1;k<=2*i-1;k++){
			printf("*");
		}
		printf("\n");
	}
	//lower half pyramid
    for(int i=5;i>=1;i--){
	  for(int j=1;j<=5-i;j++){
	    printf(" ");
	  }
	  
	  for(int k=1;k<=2*i-1;k++){
		  printf("*");
	  }
	  printf("\n");
	}
}