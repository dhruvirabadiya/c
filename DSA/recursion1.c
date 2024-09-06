#include<stdio.h>

int Fibonaci(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return Fibonaci(n-1)+Fibonaci(n-2);
    }
}

int main(){
    int total,n,i;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d \n",Fibonaci(i));
    }
}