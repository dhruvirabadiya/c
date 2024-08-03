#include<stdio.h>
//function with argument with no return...
void sinterest(int p,int r,int t){
    
	 printf("total simple interest is: %d",p*r*t/100);
}


int main(){
	int p,r,t;
      printf("enter the value of p:");
	 scanf("%d",&p);
	 printf("enter the value of r:");
	 scanf("%d",&r);
	 printf("enter the value of t:");
	 scanf("%d",&t);
	 sinterest(p,r,t);	 
}