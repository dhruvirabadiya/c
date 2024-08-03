#include<stdio.h>
//print odd even position element....
int main(){
    int arr[5],evenpos=0,oddpos=0;
	for(int i=0;i<5;i++){
	 printf("enter the element: %d \n",i);
	 scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<5;i++){
	 if(i%2!=0){
	   oddpos+=arr[i];
	 }else{
	   evenpos+=arr[i];
	 }
	}
	printf("sum of odd position element is: %d \n",oddpos);
	printf("sum of even position element is: %d \n",evenpos);
}