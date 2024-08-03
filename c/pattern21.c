#include<stdio.h>
/*
 0
 1  0
 0  1  0
 1  0  1  0
 0  1  0  1  0
*/
int main(){
     int i,j,a=1;
	 for(i=1;i<=5;i++){
	    for(j=1;j<=i;j++){
		printf(" %d ",(i+j)%2);
		}
		printf("\n");
	 }
}