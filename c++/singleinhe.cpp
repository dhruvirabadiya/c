#include<iostream>
using namespace std;

class Base{
       int a;
       int b;

       public:
       int c;
       void getdata(){
        a=10;
        b=20;
       }
       void printdata(){
        cout<<"A:"<<a<<endl;
        cout<<"B:"<<b<<endl;
        cout<<"C:"<<c<<endl;
       }
};


class derive : public Base{
         public:
         void getdata1(){
            c=30;
            getdata();
            printdata();
         }
};
      
int main()
{
       derive ob;
       ob.getdata1();
return 0;
}