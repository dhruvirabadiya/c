#include<stdio.h>
//print 1,4,9,16..
int main(){
    int i=1,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	do{
	  printf("%d \n",i*i);
	  i++;
	}while(i<=n);
}