#include<stdio.h>

struct node
{
    int data;
    char ch;
    struct node *ptr;
};


int main(){
    struct node first,second,x;

    first.data=65;
    first.ch='A';
    first.ptr=NULL;

    second.data=97;
    second.ch='a';
    second.ptr=NULL;

    x.data=70;
    x.ch='c';
    x.ptr=NULL;

    // printf("first: %d \t %c \n",first.data,first.ch);
    // printf("second: %d \t %c \n",second.data,second.ch);

    first.ptr=&second;
    second.ptr=&x;
    x.ptr=&first;

    printf("first: %d \t %c \n",first.ptr->data,first.ptr->ch);
    printf("second: %d \t %c \n",second.ptr->data,second.ptr->ch);
    printf("x: %d \t %c \n",x.ptr->data,x.ptr->ch);


}