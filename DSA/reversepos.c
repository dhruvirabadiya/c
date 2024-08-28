#include <stdio.h>

int main()
{
     int n;

     printf("Enter the value of n: ");
     scanf("%d", &n);

     int arr[n];

    for(int i=0;i<n/2;i++){
         temp=arr[i];
         arr[i]=arr[n-i-1];
         arr[n-i-1]=temp;
         printf("after swaping is: %d",arr[i]);
    }
}
