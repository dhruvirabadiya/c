#include<stdio.h>
//goto statement
int main(){
         for(int i=1;i<=10;i++){
		    if(i==6){
			   goto next;
			}
			printf("%d \t",i);
		 }
		 next: printf("\n");
		 for(int i=11;i<=20;i++){
		   printf("%d \t",i);
		 }
}