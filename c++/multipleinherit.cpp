#include<iostream>
using namespace std;
      
class Student{
    private:
     int admno;
     char sname[20];

    public:
 
    void getdata(){
        cout<<"enter admno:";
        cin>>admno;
        cout<<"enter student name:";
        cin>>sname;
    }

    void showdata(){
        cout<<"admno is:"<<admno<<endl;
        cout<<"name is:"<<sname<<endl;
    }

};

class Student1{

    public:
     float english,maths,science;
     float total,percentage;

    void getdatastud1(){
        cout<<"enter marks of english:";
        cin>>english;
        cout<<"enter marks of maths:";
        cin>>maths;
        cout<<"enter marks of science:";
        cin>>science;
    }

    void showdatastud(){
        cout<<"marks in english:"<<english<<endl;
        cout<<"marks in maths:"<<maths<<endl;
        cout<<"marks in science:"<<science<<endl;
       
    }


};


class derivestud : public Student,public Student1{
        public:
          void getdatastud(){
            getdata();
            showdata(); 
            getdatastud1();
            showdatastud();
         }
         void ctotal(){
            total= english+maths+science;
            cout<<"total marks is:"<<total<<endl;
         }
       
         void cpercentage(){
           percentage=total/3;
          cout<<"percentage is:"<<percentage<<endl;
         }
       
};

int main()
{
    derivestud std;
    std.getdatastud();
    std.ctotal();
    std.cpercentage();
    
return 0;
}