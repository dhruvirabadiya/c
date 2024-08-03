#include <stdio.h>
#include <string.h>
 //rever string...
int main()
{
    char ch[100];
    int i,length,temp;
  
     gets(ch);
	 for (i = 0; ch[i] != '\0'; i++);
	 length=i;
   
 
    for (i = 0; i<length/2; i++){
		temp=ch[i];
		ch[i]=ch[length-i-1];
		ch[length-i-1]=temp;
	}
	
	
	printf("reverse string is: %s \n",ch);
     
 
    return 0;
}