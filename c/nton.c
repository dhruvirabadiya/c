#include<stdio.h>
//print -n to n...
int main(){
    int i,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=-n;i<=n;i++){
	printf("%d \n",i);
	}
}