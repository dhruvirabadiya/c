#include<iostream>

using namespace std;

class Students{
    private:
    int rollno;
    char name[50];
    
    public:
    void getdata();
    void printdata(){
        cout<<"rollno:"<<rollno<<endl;
        cout<<"name:"<<name<<endl;
    }
};

void Students::getdata(){
     cout<<"enter the rollno:";
     cin>>rollno;
     cout<<"enter the name:";
     cin>>name;
};
int main(){
     class Students obj,obj2,obj3;

     obj.getdata();
     obj.printdata();

     obj2.getdata();
     obj2.printdata();

     obj3.getdata();
     obj3.printdata();
}