#include<stdio.h>
//function with argument with no return...
int sum1(int a,int b){
     int total;
	 total=a+b;
	 return total;
}

int main(){
    int total;
	total=sum1(50,50);
	printf("total: %d",total);
}