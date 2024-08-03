#include<stdio.h>
/* 1 1 1 1 1
   3 3 3 3 3
   5 5 5 5 5
   7 7 7 7 7
   9 9 9 9 9*/
 int main(){
     for(int i=1;i<=10;i++){
	   if(i%2!=0){
	   for(int j=1;j<=5;j++){
	     printf(" %d ",i);
	    }
	    printf("\n");
	    }
	}
 }