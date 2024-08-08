#include<iostream>
using namespace std;
      
class Shape{
     int square,rectangle;
     float circle,triangle;
     float pie=3.14;
     public:
    Shape(double r){
     
      circle=pie*r*r;
        cout<<"area of circle is:"<<circle<<endl;
    }

    Shape(int side){
        square=side*side;
          cout<<"area of square is:"<<square<<endl;
    }

    Shape(int length,int width){
        rectangle=length*width;
         cout<<"area of rectangle is:"<<rectangle<<endl;
    }

   Shape(double base,double height){
        triangle=base*height/2;
      cout<<"area of triangle is:"<<triangle<<endl;

   }


};

int main()
{
       Shape s1(20.0),s2(20),s3(10,20),s4(20.0,30.0);
   

}