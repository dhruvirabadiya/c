#include<iostream>
using namespace std;
      
class Shape{     
    int cube,cylinder,cuboid,prism;
    float pie=3.14;
    
    public:
    void cubeshape(int a){
       cube=a*a*a;
       cout<<"area of cube is:"<<cube<<endl;
     }

     void cylindershape(int r,int h){
        cylinder=pie*r*r*h;
        cout<<"area of cylinder is:"<<cylinder<<endl;
      }

      void cuboidshape(int l,int b,int h){
        cuboid=l*b*h;
         cout<<"area of cuboid is:"<<cuboid<<endl;
      }

      void prismshape(double b,double h){
        prism=b*h;
         cout<<"area of prism is:"<<prism<<endl;
      }

};


int main()
{
    Shape s1;
    s1.cubeshape(40);
    s1.cylindershape(20,50);
    s1.cuboidshape(20,30,40);
    s1.prismshape(30,30);
return 0;
}