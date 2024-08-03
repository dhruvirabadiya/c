#include<stdio.h>
//function with argument with return....
int sinterst(int p,int r,int t){
	int stotal;
      stotal=p*r*t/100;
}

int main(){
    int p,r,t,stotal;
      printf("enter the value of p:");
	 scanf("%d",&p);
	 printf("enter the value of r:");
	 scanf("%d",&r);
	 printf("enter the value of t:");
	 scanf("%d",&t);
	
	stotal=sinterst(p,r,t);
	printf("total simple interest is: %d",stotal);
}