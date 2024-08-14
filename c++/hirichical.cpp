#include<iostream>
using namespace std;

class Base{
      protected:
      int a;
      public:
      void getA(){
        cout<<"enter a:";
        cin>>a;
      }
};

class derive:public Base{
    protected:
    int b;
    public:
    void getB(){
       cout<<"enter b:";
        cin>>b;
        cout<<"addition of a and b is:"<<a*b<<endl;
    }
};

class derive2:public Base{
         protected:
         int c;
         public:
         void getc(){
            cout<<"enter c:";
            cin>>c;
            cout<<"addition of a and c is:"<<a*c<<endl;
         }
};
      
int main()
{
    
    derive obj1;
    obj1.getA();
    obj1.getB();

    derive2 obj;
    obj.getA();
    obj.getc();

       
return 0;
}