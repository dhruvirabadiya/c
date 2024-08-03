#include<stdio.h>
//switch case...
int main(){
   int a;
    printf("enter a number:");
    scanf("%d",&a);

    switch(a){
	    case 1:
		printf("select number is 1:");
		break;
		
		case 2:
		printf("select number is 2:");
		break;
		
		case 3:
		printf("select number is 3:");
		break;
		
		default:
		printf("selected number is not found:");
		break;
	}	
}