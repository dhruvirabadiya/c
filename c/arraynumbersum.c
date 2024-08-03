#include<stdio.h>
//print odd and even number sum with array
int main(){
    int arr[5],evensum=0,oddsum=0;
	for(int i=0;i<5;i++){
	 printf("enter the element: %d \n",i);
	 scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<5;i++){
	 if(arr[i]%2!=0){
	   oddsum+=arr[i];
	 }else{
	   evensum+=arr[i];
	 }
	}
	printf("sum of odd  element is: %d \n",oddsum);
	printf("sum of even  element is: %d \n",evensum);
}