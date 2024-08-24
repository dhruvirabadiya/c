#include<stdio.h>

int main(){
    int n;
    int arr[n],temp=0;

    printf("enter the value of n:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
         printf("enter the array element:");
         scanf("%d",&arr[n]);
    }

    for(int i=0;i<n;i++){
         temp=arr[i];
         arr[i]=arr[n-i-1];
         arr[n-i-1]=temp;
         printf("after swaping is: %d",arr[i]);

    }
}