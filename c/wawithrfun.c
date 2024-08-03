#include<stdio.h>

int circle(){
    int r;
	float pie=3.14;
	int total;
	printf("enter the value of radius:");
	scanf("%d",&r);
	total=pie*r*r;
	return total;

}
int square(){
	int side,stotal;
	printf("enter the value of side:");
	scanf("%d",&side);
	stotal=side*side;
	
	return stotal;
}
int main(){
    int total,stotal;
	total=circle();
	stotal=square();
	printf("area of circle is: %d \n",total);
	printf("area of square is: %d \n",stotal);
}