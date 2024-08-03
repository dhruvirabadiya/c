#include<stdio.h>
//print reverse number...
void nreverse(){
   
	 int n,i,revrese=0,rem;
	 
	 printf("enter the number:");
	 scanf("%d",&n);
	 
	 while(n!=0){
	    rem=n%10;
		revrese=revrese*10+rem;
		n/=10;
	 }
	 printf("reverse number is: %d",revrese);
	
}

int main(){
	nreverse();
	
}