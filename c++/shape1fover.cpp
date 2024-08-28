#include<iostream>
using namespace std;
      
class Shape{     
    int cube,cylinder,cuboid,prism;
    float pie=3.14;
    
    public:
    void shape(int a){
       cube=a*a*a;
       cout<<"area of cube is:"<<cube<<endl;
     }

     void shape(int r,int h){
        cylinder=pie*r*r*h;
        cout<<"area of cylinder is:"<<cylinder<<endl;
      }

      void shape(int l,int b,int h){
        cuboid=l*b*h;
         cout<<"area of cuboid is:"<<cuboid<<endl;
      }

      void shape(double b,double h){
        prism=b*h;
         cout<<"area of prism is:"<<prism<<endl;
      }

};


int main()
{
    Shape s1;
    s1.shape(40);
    s1.shape(20,50);
    s1.shape(20,30,40);
    s1.shape(30.0,30.0);
return 0;
}