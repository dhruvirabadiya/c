#include<iostream>
using namespace std;

class Hello{
    public:
    static int number;
    int i=0;
    Hello(){
        number++;
        i++;
    }

    static void display(){
        cout<<"static function call...:"<<number<<endl;
    }
};

int Hello::number=0;
      
int main()
{
    Hello h1;
    h1.display();
    Hello h2;
    h2.display();

    Hello h3,h4,h5,h6;

    cout<<"static:"<<h3.number;
       
return 0;
}