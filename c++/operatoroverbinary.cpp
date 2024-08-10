#include<iostream>
using namespace std;

class Complex{

    int x;
    int y;

    public:
    Complex(){
        x=0;
        y=0;
    }

    Complex(int a,int b){
        x=a;
        y=b;
    }

    void display(){
        cout<<"value of x:"<<x<<endl;
        cout<<"value of y:"<<y<<endl;
    }

    Complex operator+(Complex e){
        Complex t;
        t.x=x+e.x;
        t.y=y+e.y;
    }
};
      
int main()
{
    Complex s1,s2,s3;
    s1=Complex(3,6);
    s2=Complex(2,4);   
    cout<<"first object display:"<<endl;
    s1.display();
    cout<<"second object display:"<<endl;
    s2.display();
    cout<<"final output:"<<endl;
    s3=s1+s2;
    s3.display();
return 0;
}