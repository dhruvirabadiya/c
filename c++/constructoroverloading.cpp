#include<iostream>
using namespace std;

class Hello{

    public:
    Hello(){
        cout<<"default constructor call:"<<endl;
    }

    Hello(int a){
        cout<<"value of a is:"<<a<<endl;
    }

    Hello(int a,int b){
         cout<<"value of a is:"<<a<<"value of b is:"<<b<<endl;
    }

    Hello(int a,char b){
        cout<<"value of a is:"<<a<<"value of b is:"<<b<<endl;
    }
};

int main()
{
       Hello obj,obj1(10),obj2(10,20),obj3(10,'a');
return 0;
}