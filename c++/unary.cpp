#include<iostream>
using namespace std;
      
class Complex{
    int x;
    int y;

    public:
    void getdata(int a,int b){
        x=a;
        y=b;
    }

    void display(){
        cout<<"value of x:"<<x<<endl;
        cout<<"value of y:"<<y<<endl;

    }

    void operator-(){
        x=-x;
        y=-y;
    }
};

int main()
{
       Complex s;
       s.getdata(4,-5);
       s.display();
       cout<<"after function call:"<<endl;
       -s;
       s.display();
return 0;
}