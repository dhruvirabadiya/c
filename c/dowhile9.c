#include<stdio.h>
// print A c E g I k...
int main(){
    char letter;
	int i=0;
	do{
	   if(i%2==0){
	    letter = 'A'+i*2;
	   }else{
	     letter = 'a'+i*2;
	   }
	   printf("%c ",letter);
	   i++;
	}while(i<=5);
}
}