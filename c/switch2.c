#include<stdio.h>
//switch case...
void addition(){
     int a,b,c;
	 printf("enter a value of a:");
	 scanf("%d",&a);
	  printf("enter a value of b:");
	 scanf("%d",&b);
	 c=a+b;
	 printf("sum is: %d",c);
}

void substraction(){
      int a,b,c;
	  printf("enter a value of a:");
	 scanf("%d",&a);
	  printf("enter a value of b:");
	 scanf("%d",&b);
	  c=a-b;
	  printf("substraction is: %d",c);
}

void multiply(){
      int a,b,c;
	 printf("enter a value of a:");
	 scanf("%d",&a);
	  printf("enter a value of b:");
	 scanf("%d",&b);
	  c=a*b;
	  printf("addition is: %d",c);
}

void devide(){
      int a,b,c;
	  printf("enter a value of a:");
	 scanf("%d",&a);
	  printf("enter a value of b:");
	 scanf("%d",&b);
	  c=a/b;
	  printf("devision is: %d",c);
}


int main(){
       int n;
	   printf("enter a case number:");
	   scanf("%d",&n);
	   
	   switch(n){
	      case 1:
		  printf("addition:");
		  addition();
		   break;
		   
		  case 2:
		  printf("substraction:");
		  substraction();
		  break;
		  
		  case 3:
		  printf("multiply:");
		  multiply();
		  break;
		  
		  case 4:
		  printf("devision:");
		  devide();
		  break;
		  
		  default:
		  printf("no case found");
		  break;
	   }
	   
}