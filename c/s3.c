#include<stdio.h>
//1,2,4,8,16...
int main(){
    int i,n,t=1;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	 printf("%d \n",t);
	 t=t*2;
	}
}