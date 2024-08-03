#include<stdio.h>
//two d array
int main(){
    int arr[3][3];
	for(int i=0;i<3;i++){
	  for(int j=0;j<3;j++){
	    printf("enter the elemnt of row %d and column: %d",i,j);
		scanf("%d",&arr[i][j]);
	  }
	}
	for(int i=0;i<3;i++){
	  for(int j=0;j<3;j++){
	   printf("%d",arr[i][j]); 
	  }
	  printf("\n");
	}
}