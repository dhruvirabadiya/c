#include<stdio.h>
//odd number print
int main(){
    int i=0,sum=0;
	do{
       if(i%2!=0){
	      sum=sum+i;
	   }	
	   i++;
	}while(i<=5);
	printf("%d",sum);
}