#include<stdio.h>
//example of pointer...
int main(){
      int a=10;
	  int *b;
	  b=&a;
	  
	  printf("%p \n",&b);//store address of b
	  printf("%p \n",&a);//store address of a
	  printf("%p \n",b);//store address of a
	  printf("%d \n",*b);//store value of a
	  printf("%d \n",a);//store value of a
}