#include <iostream>
using namespace std;

// single argument
// template<class T>
//  void display(T t1){
//      cout<<"displaying template:"<<t1<<endl;
//  }

// multiple argument
//  template<class x,class y>
//  void display(x a,y b){
//      cout<<"displaying template:"<<a<<"\t"<<b<<endl;
//  }

// multiple argument same datatype
template <class t>
t sum(t x, t y)
{
    return x + y;
}

int main()
{
    // display(200);
    // display(20.05);
    // display('a');

    // display(200,'a');
    // display(400,25.5);
    // display('d',20);

    cout << sum(1, 25) << endl;
    cout << sum(25.4, 1.5);

    return 0;
}