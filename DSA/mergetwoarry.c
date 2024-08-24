#include<stdio.h>

int main(){
    int n,n1,n2;
    int a[n];
    int a1[n1];
    int a2[n2];
    
        printf("enter the value of n:");
        scanf("%d",&n);

         for(int i=0;i<n;i++){
            printf("enter the value of array1 position element:",i);
            scanf("%d",&a[n]);
         }

         printf("enter the value of n1:");
         scanf("%d",&n1);

         for(int j=0;j<n1;j++){
            printf("enter the value of array2 position element:",j);
            scanf("%d",&a1[n1]);
         }    

        //  for(int i=0;i<n;i++){
        //     a2[n2]=a[n];
        //  }

        //  for(int j=0;j<n1;j++){
        //     a2[n2]=a1[n1];
        //  }

        //  printf("merged string is: %d \n",a2[n2]);
         
}