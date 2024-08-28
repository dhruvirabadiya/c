#include <stdio.h>

#define n 5

int stack[n];
int top = -1;


void push(int x) {
    if (top >= n - 1) {
        printf("Stack is full\n");
    } else {
    
        for (int i = top; i >= 0; i--) {
            stack[i + 1] = stack[i];
        }
        stack[0] = x;
        top++;
    }
}


void pop() {
    if (top < 0) {
        printf("Stack is empty\n");
    } else {
      
        for (int i = 0; i < top; i++) {
            stack[i] = stack[i + 1];
        }
        top--;
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);

    pop();

    for (int i = 0; i <= top; i++) {
        printf("%d \t", stack[i]);
    }
    printf("\n");

    return 0;
}
