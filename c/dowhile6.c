#include<stdio.h>
//print 1,2,4,8,16....
int main(){
    int i=1,n,t=1;
	printf("enter a number:");
	scanf("%d",&n);
	do{
		printf("%d \n",t);
		t=t*2;
		i++;
	}while(i<=n);
}