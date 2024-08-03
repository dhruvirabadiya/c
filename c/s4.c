#include<stdio.h>
//1,4,12,32,80...
int main(){
    int i,n,t=1;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	 printf("%d \n",i*t);
	 t=t*2;
	}
}