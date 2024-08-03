#include<stdio.h>

int main(){
    int a=10;
	int b=20;
	int *c;
	int *d;
	 c=&a;
	 d=&b;
	 
	 *c=*c+*d;
	 *d=*c-*d;
	 *c=*c-*d;
	 printf("After swapping value of a: %d \n",*c);
	 printf("After swapping value of b: %d \n",*d);
	 
}