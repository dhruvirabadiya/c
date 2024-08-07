#include<iostream>

using namespace std;

class Student{

    private:
    int admno;
    char sname[20];
    float eng,maths,science;
    float total;

    public:
    Student(){
    cout<<"enter admno:";
     cin>>admno;
     cout<<"enter student name:";
     cin>>sname;
     cout<<"enter marks of english:";
     cin>>eng;
     cout<<"enter marks of maths:";
     cin>>maths;
     cout<<"enter marks of science:";
     cin>>science;
    }

    void showdata(){
        cout<<"admno:"<<admno<<endl;
        cout<<"name:"<<sname<<endl;
        cout<<"english:"<<eng<<endl;
        cout<<"maths:"<<maths<<endl;
        cout<<"science:"<<science<<endl;
    }

    Student(int total){
        total = eng + maths + science;
        cout<<"total:"<<total<<endl;
        
    }

    ~Student(){
        cout<<"destructor is destroy:";
    }
};

int main(){
     Student s1,s2;
   
    s1.showdata();
    s1.ctotal();
 
    s2.showdata();
    s2.ctotal();
    
}