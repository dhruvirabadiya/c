#include<stdio.h>
int main(){
    int sub1=30,sub2=40,sub3=50,total;
	float percentage;
	
	total=sub1+sub2+sub3;
	printf("total marks is: %d \n",total);
	
	percentage=total/3;
	printf("total percentage is: %2.f",percentage);
}