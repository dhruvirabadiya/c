#include<stdio.h>
//function with argument with no return...
void sum(int a,int b){
      int total;
	  total=a+b;
	  printf("%d",total);
}

int main(){
    sum(10,20);
}