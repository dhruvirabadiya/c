#include<iostream>

using namespace std;

class Demo{
 
      int a,b;

      public:

     //default constructor
      Demo(){
           cout<<"enter b:";
           cin>>b;
      }
       
       //destructor
      ~Demo(){
        cout<<"destroy call"<<endl;
      }

      //paramiterized constructor
      Demo(int a1){
        a=a1;
      }

      void display(){
        cout<<"A:"<<a<<endl;
      }
      
};

int main(){
    Demo obj,obj1(10);
    obj1.display();
}