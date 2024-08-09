#include<iostream>
using namespace std;


class Demo{

      public:
    void test(){
        cout<<"default function call:"<<endl;
    }

    void test(int a){
        cout<<"parameter function call:"<<a<<endl;
    }

    void test(int a,int b){
        cout<<"addition of a and b:"<<a+b<<endl;
    }
};

int main()
{
    Demo d;
     d.test();   
     d.test(10);
     d.test(10,20);

return 0;
}