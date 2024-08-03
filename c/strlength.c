#include <stdio.h>
#include <string.h>
 //print length of string..
int main()
{
    char ch[100];
    int i,length;
  
     gets(ch);
	 
 
    for (i = 0; ch[i] != '\0'; i++);
	length=i;
    printf("length of string is: %d \n",length);
     
 
    return 0;
}