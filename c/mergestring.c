#include <stdio.h>
//merge two string
int main() {
    char str1[100] = "skill";
    char str2[100] = "qode";
    char str3[200];

    int i, j;

   
    for (i = 0; str1[i] != '\0'; i++) {
        str3[i] = str1[i];
    }

    
    for (j = 0; str2[j] != '\0'; j++, i++) {
        str3[i] = str2[j];
    }

   
    str3[i] = '\0';

    
    printf("Merged string: %s \n", str3);

    return 0;
}
