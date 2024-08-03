#include <stdio.h>
/*
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
*/
int main() {
    int n;
    //printf("Enter the number of rows: ");
    //scanf("%d", &n);

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 5 - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
    	printf("\n");
    }
    return 0;
}