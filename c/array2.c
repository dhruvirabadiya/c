#include<stdio.h>
//print two array value
int main(){
   int arr1[5];
   int arr2[3];
   for(int i=0;i<5;i++){
      printf("enter the value of arr1:");
      scanf("%d",&arr1[i]);
	  }
   for(int j=0;j<3;j++){
      printf("enter the value of arr2:");
	  scanf("%d",&arr2[j]);
   }
   for(int i=0;i<5;i++){
      printf("value of arr1 is: %d \n",arr1[i]);
   }
   
   for(int j=0;j<3;j++){
      printf("value of arr2 is: %d \n",arr2[j]);
   }
}