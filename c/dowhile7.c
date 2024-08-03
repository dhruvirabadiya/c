#include<stdio.h>
//print 1,4,12,32,80....
int main(){
    int i=1,n,t=1;
     printf("enter a number:");
	 scanf("%d",&n);
	 do{
	    printf("%d \n",i*t);
		t=t*2;
		i++;
	 }while(i<=n);
}