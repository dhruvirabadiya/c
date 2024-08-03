#include<stdio.h>
//print array sec example
int main(){
    int arr[5];
	
	for(int i=0;i<5;i++){
	 printf("enter the value of first index: ");
	 scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++){
	 printf("%d \n",arr[i]);
	}
}