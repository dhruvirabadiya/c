//find position of element which sum is equal of target value..

#include<stdio.h>
int main(){
    int array[5]={2,4,3,5,21};
    int n=5;
    int target=9;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(array[i]+array[j]==target){
                printf("poition of array is %d and %d",i,j);
            }
        }
    }

}