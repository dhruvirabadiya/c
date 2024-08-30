#include<stdio.h>
#include <stdlib.h>
#define n 5

int stack[n];
int temp;
void display()
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", stack[i]);
    }
}

int main(){
    for(int i=0;i<n;i++){
           stack[i] = (rand() % 50) + 1;
    }
    printf("Before sorting array elements are - \n");  
    display();
    printf("\n");
    
     for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(stack[j]>stack[j+1]){
              temp=stack[j]; 
              stack[j]=stack[j+1];
              stack[j+1]=temp;
            }
        }
     }

      printf("\nAfter sorting array elements are - \n");    
      display();
    
}