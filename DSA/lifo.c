//last in first out stack
#include<stdio.h>

#define n 5

int stack[n];
int top=-1;
//for add the element
void push(int x){
    if(top>=n-1){
        printf("stack is empty");    
    }else{
        top+=1;
        stack[top]=x;
    }
}
//enter element at position 1
void first(int x){
    if(top>=n-1){
        printf("stack is empty");
    }else if(top<0){
           top++;
           stack[top]=x;
    }else{
      for(int i= n-1; i >= 0; i--) {
            stack[i] = stack[i-1];
        }
        stack[0] = x;
        top++;
    
    }
}

//for remove the element
void pop(){
    if(top<0){
        printf("stack is empty");
    }else{
        top--;
    }
}

void display(){
    for(int i=0;i<=top;i++){
        printf("%d \t",stack[i]);
    }
}


int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    first(50);
    display();
}