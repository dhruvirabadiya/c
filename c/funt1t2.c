#include<stdio.h>
//function with no argument and no return value..
void circle(){
    float pie=3.14;
	int r,total;
	
	printf("enter the radius:");
	scanf("%d",&r);
	total=pie*r*r;
	printf("total radius is: %d \n",total);
}

void square(){
	int side,stotal;
	printf("enter the value of side:");
	scanf("%d",&side);
	stotal=side*side;
    printf("area of square is: %d \n",stotal);
}

void rectangle(){
	int length,width,rtotal;
	printf("enter the value of length:");
	scanf("%d",&length);
	printf("enter the value of width:");
	scanf("%d",&width);
	rtotal=length*width;
	printf("area of rectangle is: %d \n",rtotal);
}

void triangle(){
	int base,height;
	printf("enter the value of base:");
	scanf("%d",&base);
	printf("enter the value of height:");
	scanf("%d",&height);
	printf("area of triangle is: %d",base*height/2);
}
//function with no argument with return value..
int circle1(){
	int r;
	float pie=3.14;
	int total;
	printf("enter the value of radius:");
	scanf("%d",&r);
	total=pie*r*r;
	return total;
}
int square1(){
	int side,stotal;
	printf("enter the value of side:");
	scanf("%d",&side);
	stotal=side*side;
	
	return stotal;
}

int rectangle1(){
	int length,width,rtotal;
	printf("enter the value of length:");
	scanf("%d",&length);
	printf("enter the value of width:");
	scanf("%d",&width);
	rtotal=length*width;
	
	return rtotal;
}

int triangle1(){
	int base,height,ttotal;
	printf("enter the value of base:");
	scanf("%d",&base);
	printf("enter the value of height:");
	scanf("%d",&height);
	ttotal=base*height/2;
	
}
int main(){
    circle();square();rectangle();
	int total,stotal,rtotal,ttotal;
	total=circle1();
	stotal=square1();
	rtotal=rectangle1();
	ttotal=triangle1();
	printf("area of circle is: %d \n",total);
	printf("area of square is: %d \n",stotal);
	printf("area of rectangle is: %d \n",rtotal);
	printf("area of triangle is: %d",base*height/2);
}