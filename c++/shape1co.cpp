#include<iostream>
using namespace std;
      
class Shape{
      
      int cube,cylinder,cuboid;
      double prism;
      float pie=3.14;
      public:
      Shape(int a){
        cube=a*a*a;
        cout<<"area of cube is:"<<cube<<endl;
      }

      Shape(int r,int h){
        cylinder=pie*r*r*h;
        cout<<"area of cylinder is:"<<cylinder<<endl;

      }

      Shape(int l,int b,int h){
         cuboid=l*b*h;
         cout<<"area of cuboid is:"<<cuboid<<endl;
      }

      Shape(double b,double h){
        prism=b*h;
        cout<<"area of prism is:"<<prism<<endl;

      }

};

int main()
{
    Shape s1(10),s2(10,20),s3(10,20,30),s4(30.0,40.0);
       
return 0;
}