#include<stdio.h>
//print 1,4,3,16,5...
int main(){
    int n,i=1;
	printf("enter the value of n:");
	scanf("%d",&n);
	do{
	  if(i%2==0){
	     printf("%d \n",i*i);
	  }else{
	    printf("%d \n",i);
	  }
	  i++;
	}while(i<=n);
}