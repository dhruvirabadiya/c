#include<stdio.h>
//1,4,3,16,5...
int main(){
    int i,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	   if(i%2==0){
	   printf("%d \n",i*i);
	   }else{
		   printf("%d \n",i);
	   }
	}
}