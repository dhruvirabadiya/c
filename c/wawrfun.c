#include<stdio.h>

//function without argument without return value
void convert(){
	int dollar=20;
    float ruppes=82.50;
    int total=dollar*ruppes;
    printf("total ruppes is: %d",total);	
}
void measure(){
     int feet=10;
	 int inches=12;
	 int total;
	 total=feet*inches;
	 printf("total inches is: %d \n",total);
}
void weather(){
	int celsius=20;
    float fahramhit;
    fahramhit=celsius*9/5+32;
    printf("total fahramhit is: %2.f",fahramhit);	
}
int main(){
	convert();
    measure();
	weather();
	 
}