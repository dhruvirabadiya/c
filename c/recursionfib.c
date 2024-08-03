#include<stdio.h>
//fibonacci with recursion...
int fibonaci(int n){
    if(n==0){
	   return 0;
	}else if(n==1){
	   return 1;
	}else{
	  return fibonaci(n-1)+fibonaci(n-2);
	}
}

int main(){
    int total,n,i;
	printf("enter a number:");
	scanf("%d",&n);
	for(i = 0; i < n; i++){
			printf(" %d",fibonaci(i));
     
    }

}