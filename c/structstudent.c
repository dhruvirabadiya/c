#include<stdio.h>
//print student details with structure...
struct student{
    int student[5];
    int subject[3];
	int total;
	float percentage;
	char grade;
};

int main(){
    struct student std;
	for(int i=0;i<5;i++){
     std.student[i]=i+1;
	 printf("Enter the marks of student %d:\n", i + 1);
	 
	 std.total=0;
	 
	 for(int j=0;j<3;j++){
	 std.subject[j]=j+1;
	 printf("Enter the marks of subject %d:\n", j + 1);
	  scanf("%d",&std.student[i],&std.subject[j]);
	 std.total +=std.student[i],std.subject[j]; 
	 
	 }
	  std.percentage = (float)std.total / 3;
	  
	   if (std.percentage >= 90) {
            std.grade = 'A';
        } else if (std.percentage >= 80) {
            std.grade = 'B';
        } else if (std.percentage >= 70) {
            std.grade = 'C';
        } else if (std.percentage >= 50) {
            std.grade = 'E';
        } else {
            std.grade = 'F';
        }
        
        printf("Total marks for student %d: %d\n", i + 1, std.total);
        printf("Percentage for student %d: %.2f\n", i + 1, std.percentage);
        printf("Grade for student %d: %c\n\n", i + 1, std.grade);
	}
}