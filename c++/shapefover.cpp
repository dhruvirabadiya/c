#include<iostream>
using namespace std;
      
class Shape{
    
    int circle,square,rectangle,triangle;
    float pie=3.14;

    public:
    void shape(double r){
           circle=pie*r*r;
           cout<<"volume of circle are:"<<circle<<endl;
    }

    void shape(int side){
       square=side*side;
       cout<<"volume of square is:"<<square<<endl;
    }

   void shape(int length,int width){
        rectangle=length*width;
        cout<<"volume of rectangle is:"<<rectangle<<endl;
   }

   void shape(double base,double height){
     triangle=base*height/2;
     cout<<"volume of triangle is:"<<triangle<<endl;
    }


  };

int main()
{

     Shape s1;
     s1.shape(20);
     s1.shape(20);
     s1.shape(30,20);
     s1.shape(40.0,50.0);
       
return 0;
}