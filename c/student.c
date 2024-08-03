#include <stdio.h>

int main() {
    int student[5];
    int subject[3];
    int total;
    float percentage;
    char grade;
    int i, j;
    
    
    for (i = 0; i < 5; i++) {
        printf("Enter the marks of student %d:\n", i + 1);
        
        total = 0;
        
        for (j = 0; j < 3; j++) {
            printf("Enter the marks of subject %d:\n", j + 1);
            scanf("%d",&student[i],&subject[j]);
            total +=student[i],subject[j]; 
        }
        
        percentage = (float)total / 3;
        
       
        if (percentage >= 90) {
            grade = 'A';
        } else if (percentage >= 80) {
            grade = 'B';
        } else if (percentage >= 70) {
            grade = 'C';
        } else if (percentage >= 50) {
            grade = 'E';
        } else {
            grade = 'F';
        }
        
        printf("Total marks for student %d: %d\n", i + 1, total);
        printf("Percentage for student %d: %.2f\n", i + 1, percentage);
        printf("Grade for student %d: %c\n\n", i + 1, grade);
    }
    

    return 0;
}
