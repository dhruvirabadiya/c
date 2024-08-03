#include<stdio.h>
//print total of odd number...
int main(){
    int i,sum=0;
	for(i=0;i<=5;i++){
	 if(i%2!=0){
	  sum=sum+i;
	 }
	}
	printf("%d",sum);
} 