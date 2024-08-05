#include<iostream>

using namespace std;

class Student{
    private:
    int admno;
    char sname[20];
    float eng,maths,science;
    float total;

    public:
    void getdata();
    void showdata(){
        cout<<"admno:"<<admno<<endl;
        cout<<"name:"<<sname<<endl;
        cout<<"english:"<<eng<<endl;
        cout<<"maths:"<<maths<<endl;
        cout<<"science:"<<science<<endl;
    }

    void ctotal(){
        total = eng + maths + science;
        cout<<"total:"<<total<<endl;
        
    }
};

void Student::getdata(){
     cout<<"enter admno:";
     cin>>admno;
     cout<<"enter student name:";
     cin>>sname;
     cout<<"enter marks of english:";
     cin>>eng;
     cout<<"enter marks of matsh:";
     cin>>maths;
     cout<<"enter marks of science:";
     cin>>science;
};

int main(){
    class Student s1,s2,s3;
    s1.getdata();
    s1.showdata();
    s1.ctotal();

   s2.getdata();
    s2.showdata();
    s2.ctotal();

    s3.getdata();
    s3.showdata();
    s3.ctotal();
    
}