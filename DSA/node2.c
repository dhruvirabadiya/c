#include<stdio.h>

struct node
{
    int number,age;
    char name,lname;
    struct node *ptr;
};

int main(){
    struct node fperson,sperson,tperson;

    fperson.number=1;
    fperson.age=20;
    fperson.name='a';
    fperson.lname='e';

    sperson.number=2;
    sperson.age=22;
    sperson.name='h';
    sperson.lname='l';

    tperson.number=3;
    tperson.age=25;
    tperson.name='l';
    tperson.lname='q';

    fperson.ptr=&sperson;
    sperson.ptr=&tperson;
    tperson.ptr=&fperson;

    printf("first person detail is: number:%d \n age:%d \n name:%c \n lastname: %c \n",tperson.ptr->number,tperson.ptr->age,tperson.ptr->name,tperson.ptr->lname);

    printf("second person detail is: number %d \n age:%d \n name:%c \n lastname: %c \n",fperson.ptr->number,fperson.ptr->age,fperson.ptr->name,fperson.ptr->lname);

    printf("third person detail is: number %d \n age: %d \n name:%c \n lastname: %c \n",sperson.ptr->number,sperson.ptr->age,sperson.ptr->name,sperson.ptr->lname);
}
