#include<iostream>
using namespace std;

class Bank{
    protected:
      int pin=0000;
      int ac_no;
      int b_name;
      int ac_name;
      int amount;
      int total_balance;

    public:
    void enter_pin();
    void create_account();
    void withdrawal();
};
      
void Bank::enter_pin(){
        cout<<"Enter your pin number:";
        cin>>pin;
};

void Bank::create_account(){
    cout<<"\t\t\t\tEnter Your Account Number:";
    cin>>ac_no;
    cout<<"\t\t\t\tEnter Account Holder Name:";
    cin>>b_name;
    cout<<"\t\t\t\tEnter Which Type of Account you Want to Create:";
    cin>>ac_name;
    cout<<"\t\t\t\tEnter Deposite You Want To Deposite:";
    cin>>amount;
    cout<<"Your Account Created Successfully";
}

void Bank::withdrawal(){
    cout<<"Enter Amount You Want To Withdrwal:";
    cin>>amount;
}

int main()
{
    Bank b1;
    b1.enter_pin();
    b1.create_account();   
return 0;
}