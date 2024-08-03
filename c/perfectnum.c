#include <stdio.h>
//print perfect number...
void perfectnum() {
    int n, rem, sum = 0, i;
	 
    printf("Enter the number: ");
    scanf("%d", &n);
	 
    for (i = 1; i < n; i++) {
        rem = n % i;
        if (rem == 0) {
            sum = sum + i;
        }	
    }
   
   
    if (sum == n) {
        printf("The number is perfect\n");
    } else {
        printf("The number is not perfect\n");
    }
}

int main() {
    perfectnum();
  
}
