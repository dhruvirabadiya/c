#include<stdio.h>

int nSum(int n){
    if(n==0){
        return 0;
    }

    int res = n + nSum(n-1);

    return res;
}

int main(){
    int n=10;
    int sum=nSum(n);
    printf("sum of first %d natural numbers: %d",n,sum);
    return 0;
}