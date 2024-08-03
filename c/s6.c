#include<stdio.h>
//print A   c  E  g  I  k... 
int main() {
    char letter,i;
    for(i = 0; i <= 5; i++) {
        if(i % 2== 0) {
            letter ='A'+i*2;
        } else {
            letter ='a'+i*2;
        }
		printf("%c \t",letter);
    }
    return 0;
}
                                                