#include<stdio.h>
/*

*/
int main(){
    int a=11;
	for(int i=1;i<=5;i++){
	 for(int j=1;j<=5;j++){
	  printf(" %d ",a++);
	 }
	 a+=5;
	 printf("\n");
	}
}