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
        }
};

class derive2 : public derive{
           public:
           void product(){
            cout<<"addition is:"<<a*b;
           }
};
      
int main()
{
       derive2 obj;
       obj.getA();
       obj.getB();
       obj.product();
return 0;
}