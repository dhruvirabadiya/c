#include<stdio.h>

void reverse(){
    int n,i,rev=0,rem;
    printf("enter a number:");
    scanf("%d",&n);

    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    printf("reverse number is: %d",rev);
}

int main(){
       reverse();
}