 #include<iostream>

using namespace std;

class Report{

    private:
    int adno;
    char name[20];
    int sub1,sub2,sub3,sub4,sub5; 
    float marks;
    float avrage;

    public:
    void  readinfo();
    void displayinfo(){
       cout<<"adno:"<<adno<<endl;
       cout<<"name:"<<name<<endl;
       cout<<"sub1:"<<sub1<<endl;
       cout<<"sub2:"<<sub2<<endl;
       cout<<"sub3:"<<sub3<<endl;
       cout<<"sub4:"<<sub4<<endl;
       cout<<"sub5:"<<sub5<<endl; 

   };
   void calculatemarks(){
         marks=sub1+sub2+sub3+sub4+sub5;
          cout<<"marks:"<<marks<<endl;
   };

   void calculateavrage(){
        avrage=marks/5;
          cout<<"avrage:"<<avrage<<endl;
   };
};

void Report::readinfo(){
    cout<<"enter adno:";
    cin>>adno;
    cout<<"enter name:";
    cin>>name;
    cout<<"enter marks of 1 subjects:";
    cin>>sub1;
   cout<<"enter marks of 2 subjects:";
    cin>>sub2;
    cout<<"enter marks of 3 subjects:";
    cin>>sub3;
    cout<<"enter marks of 4 subjects:";
    cin>>sub4;
    cout<<"enter marks of 5 subjects:";
    cin>>sub5;
};

int main(){
    class Report r1,r2;

    r1.readinfo();
    r1.displayinfo();
    r1.calculatemarks();
    r1.calculateavrage();

    r2.readinfo();
    r2.displayinfo();
    r2.calculatemarks();
    r2.calculateavrage();
}