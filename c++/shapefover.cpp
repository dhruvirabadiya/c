#include<iostream>
using namespace std;
      
class Shape{
    
    int circle,square,rectangle,triangle;
    float pie=3.14;

    public:
    void circleshape(double r){
           circle=pie*r*r;
           cout<<"volume of circle are:"<<circle<<endl;
    }

    void squareshape(int side){
       square=side*side;
       cout<<"volume of square is:"<<square<<endl;
    }

   void rectangleshape(int length,int width){
        rectangle=length*width;
        cout<<"volume of rectangle is:"<<rectangle<<endl;
   }

   void triangleshape(double base,double height){
     triangle=base*height/2;
     cout<<"volume of triangle is:"<<triangle<<endl;
    }


  };

int main()
{

     Shape s1;
     s1.circleshape(20);
     s1.squareshape(20);
     s1.rectangleshape(30,20);
     s1.triangleshape(40.0,50.0);
       
return 0;
}