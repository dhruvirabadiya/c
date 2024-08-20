#include <iostream>
using namespace std;

class Base
{
public:
    virtual void display() = 0;
};

class derived : public Base
{
public:
    void display()
    {
        cout << "derive class function call:" << endl;
    }
};

int main()
{
    Base *b;
    derived c;
    b = &c;
    b->display();

    return 0;
}