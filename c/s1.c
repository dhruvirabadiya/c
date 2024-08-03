#include<stdio.h>
//print 1,4,9,16...
int main(){
    int i,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	   printf("%d \n",i*i);
	}
}