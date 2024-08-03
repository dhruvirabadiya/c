#include<stdio.h>
int main(){
    int arr[5],sum=0;
	for(int i=0;i<5;i++){
	   printf("enter the element:");
	   scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		if(i%2!=0){
			sum+=arr[i];
			printf("%d",arr[i]);
		}else{
			sum+=arr[i];
			printf("%d"),arr[i];
		}
	}
}