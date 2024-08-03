#include<stdio.h>
//file handling...
int main(){
     FILE *ptr;
	 
	 char string[50];
	 //append the file
	 /*ptr = fopen("abc.txt","a");
	 gets(string);
	 fprintf(ptr,"%s",string);
	 fclose(ptr);*/
	 
	 //write the file
	 /*ptr = fopen("abc.txt","w");
	 gets(string);
	 fprintf(ptr,"%s",string);
	 fclose(ptr);*/
	 
	 //read file
	 ptr = fopen("abc.txt","a");
	 gets(string);
	 fprintf(ptr,"%s ",string);
	 fclose(ptr);
	 
	 ptr=fopen("abc.txt","r");
	 while(fscanf(ptr,"%s",string)!=EOF){
		 printf("%s ",string);
	 }
	 fclose(ptr);
}