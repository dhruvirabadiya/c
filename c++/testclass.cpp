#include<iostream>

using namespace std;

class Test{
    private:
    int testcode;
    char description[50];
    int nocandidate;
    int centerreqd;

    public:
    void schedule();
    void disptest(){
        cout<<"test code:"<<testcode<<endl;
        cout<<"description:"<<description<<endl;
        cout<<"no of candidate:"<<nocandidate<<endl;
    };
           
    void calcntr(){
        centerreqd=nocandidate/100+1;
        cout<<"center required:"<<centerreqd<<endl;
    }
};

void Test::schedule(){
      cout<<"enter testcode:";
      cin>>testcode;
      cout<<"enter description:";
      cin>>description;
      cout<<"enter no of candidate:";
      cin>>nocandidate;
};

int main(){
      class Test t1,t2,t3;

      t1.schedule();
      t1.disptest();
      t1.calcntr();

      t2.schedule();
      t2.disptest();
      t2.calcntr();

      t3.schedule();
      t3.disptest();
      t3.calcntr();

}