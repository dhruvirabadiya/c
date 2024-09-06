#include<stdio.h>

int Factorial(int n){
    if(n==0||n==1){
        return 1;
    }else{
        return n*Factorial(n-1);
    }
}

int main(){
    int total, n;
    printf("enter n:");
    scanf("%d",&n);
    total=Factorial(n);
    printf("factorial is:n %d",total);
}