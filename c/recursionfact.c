#include<stdio.h>
//factorial with recursion...
int factorial(int n){
     if(n==0||n==1){
	      return 1;
	 }else{
	    return n*factorial(n-1);
	 }
}

int main(){
    int total,n;
	printf("enter number:");
	scanf("%d",&n);
	total=factorial(n);
	printf("factorial is: %d",total);
}