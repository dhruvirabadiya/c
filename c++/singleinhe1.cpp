#include<iostream>
using namespace std;
      
class Student{
    private:
    int admno;
    char sname[20];

    public:
     float english,maths,science;
      float total;

    void getdata(){
        cout<<"enter admno:";
        cin>>admno;
        cout<<"enter student name:";
        cin>>sname;
        cout<<"enter marks of english:";
        cin>>english;
        cout<<"enter marks of maths:";
        cin>>maths;
        cout<<"enter marks of science:";
        cin>>science;
    }

    void showdata(){
        cout<<"admno is:"<<admno<<endl;
        cout<<"name is:"<<sname<<endl;
        cout<<"marks in english:"<<english<<endl;
        cout<<"marks in maths:"<<maths<<endl;
        cout<<"marks in science:"<<science<<endl;
       
    }

};

class derivestud : public Student{
        public:
         void ctotal(){
            total= english+maths+science;
            cout<<"total marks is:"<<total<<endl;
         }
        void getdatastud(){
              getdata();
              showdata(); 
              ctotal();
        }
      
};

int main()
{
    derivestud std,std1;
    std.getdatastud();
    std1.getdatastud();
       
return 0;
}