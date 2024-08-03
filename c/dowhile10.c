#include<stdio.h>
//fibonacci..
int main(){
       int i=3,n,t1=0,t2=1,c;
	   printf("enter a number:");
	   scanf("%d",&n);
	   do{
	   printf("%d \n",c);
	     t1=t2;
		 t2=c;
		 c=t1+t2;
		 ++i;
	   }while(i<n);
}