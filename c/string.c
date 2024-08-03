#include<stdio.h>
//example of stirng..
int main(){
    char ch[50]={'a','b','c','d','\0'};
	for(int i=0;ch[i]!='\0';i++){
		printf("%c \n",ch[i]);
	}

}