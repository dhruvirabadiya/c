#include<iostream>
using namespace std;

class Basetest{
      protected:
      int testcode;
      char description[50];
      int nocandidate;
      int centerread;

      public:
      void schedule(){
        cout<<"enter testcode:";
        cin>>testcode;
        cout<<"enter description:";
        cin>>description;
        cout<<"enter no of candidate:";
        cin>>nocandidate;
      }
};

class Derivetest:public Basetest{
    public:
       void disptest(){
            cout<<"testcode:"<<testcode<<endl;
            cout<<"description:"<<description<<endl;
            cout<<"no of candidate:"<<nocandidate<<endl;
       };
};

class Derivetest2:public Derivetest{
      public:
      void calcntr(){
        centerread=nocandidate/100+1;
        cout<<"center required:"<<centerread<<endl;
      }
};
      
int main()
{
    Derivetest2 test;
    test.schedule();
    test.disptest();
    test.calcntr();       
return 0;
}