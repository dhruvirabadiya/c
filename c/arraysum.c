#include<stdio.h>
//sum of two two d array
int main(){
     int arr1[3][3];
	 int arr2[3][3];
	 int sum[3][3];
	 
	 for(int i=0;i<3;i++){
	    for(int j=0;j<3;j++){
		printf("enter the element of row %d and column %d:",i,j);
		scanf("%d",&arr1[i][j]);
		}
	 }
	 
	 for(int i=0;i<3;i++){
	    for(int j=0;j<3;j++){
		printf("enter the element of row %d and column %d:",i,j);
		scanf("%d",&arr2[i][j]);
		}
	 }
	 
	 for(int i=0;i<3;i++){
	   for(int j=0;j<3;j++){
	   sum[i][j]=arr1[i][j]+arr2[i][j];
	   }
	 }
	 
	 for(int i=0;i<3;i++){
	  for(int j=0;j<3;j++){
	     printf("%d \t",arr1[i][j]);
	  }
	  printf("\n");
	 }
	 
	 for(int i=0;i<3;i++){
	   for(int j=0;j<3;j++){
		    
	    printf("%d \t",arr2[i][j]);
	   }
	   printf("\n");
	 }
	 
	 for(int i=0;i<3;i++){
	  for(int j=0;j<3;j++){
		 
	   printf("%d \t",sum[i][j]);
	  }
	  printf("\n");
	 }
}