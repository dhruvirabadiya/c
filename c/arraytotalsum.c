#include<stdio.h>
//total of array element
int main(){
    int arr[5],totalsum=0;
	for(int i=0;i<5;i++){
	 printf("enter the element: %d \n",i);
	 scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<5;i++){
	 
	   totalsum+=arr[i];
	}
	printf("sum of total element is: %d \n",totalsum);
	
}