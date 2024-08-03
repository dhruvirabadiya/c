#include<stdio.h>
int main(){
    int arr[3][3],i,j;      
	int diagonal_sum=0,uptriangle_sum=0,lowtri_sum=0;
	
	for(i=0;i<3;i++){
	  for(j=0;j<3;j++){
	    printf("enter the element of %d row and column %d:",i,j);
		scanf("%d",&arr[i][j]);
	  }
	}
	
	for(i=0;i<3;i++){
	  for(j=0;j<3;j++){
	   printf("%d \t",arr[i][j]);
	   if(i==j){
	      diagonal_sum += arr[i][j];
	   }
	   
	   if(i<=j){
	      uptriangle_sum += arr[i][j];
	   }
	   
	   if(i>=j){
	       lowtri_sum += arr[i][j];
	   }
	  }
	  printf("\n");
	}
	printf("sum of diagonal triangle is: %d \n",diagonal_sum);
	printf("sum of  upper triangle is: %d \n",uptriangle_sum);
	printf("sum of lower triangle is: %d \n",lowtri_sum);
}