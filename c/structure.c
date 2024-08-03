#include<stdio.h>
//example of structure..
struct student{
      int rollno;
	  char name[50];
};

int main(){
       struct student stu;
	   for(int i=0;i<3;i++){
	      stu.rollno=i+1;
		  printf("enter student name:");
		   gets(stu.name);
		  printf("student rollno is: %d \n",stu.rollno);
		  printf("student name is: %s \n",stu.name);
	   }
}