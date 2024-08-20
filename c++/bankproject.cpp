#include <iostream>
using namespace std;

class Bank
{
protected:
    int pin = 0000;
    int ac_no;
    string b_name;
    string ac_type;
    // int amount;
    double total_balance;

public:
    void enter_pin();
    void create_account();
    void show_account();
    void withdrawal();
};

void Bank::enter_pin()
{
    int b_pin;
    cout << "Enter your pin number:";
    cin >> b_pin;
    if (b_pin != pin)
    {
        cout << "Invalid PIN. Access denied.\n";
    }
    else
    {
        show_account();
    }
};

void Bank::create_account()
{
    cout << "Enter Your Account Number: \n \n";
    cin >> ac_no;
    cout << "Enter Account Holder Name: \n \n";
    cin >> b_name;
    cout << "Enter Which Type of Account you Want to Create: \n \n";
    cin >> ac_type;
    cout << "Enter Deposite You Want To Deposite: \n";
    cin >> total_balance;
    cout << "Your Account Created Successfully";
}

void Bank::show_account()
{
    cout << "\n----    Your Detail ----\n";
    cout << "Account Number:" << ac_no;
    cout << "Account Holder Name:" << ac_type;
    cout << "Total Balance" << total_balance;
}

void Bank::withdrawal()
{
    double wamount;
    cout << "\n----  Withdraw ---- \n";
    int acount_num;
    cout << "Enter Your Account Number:";
    cin >> acount_num;
    if (acount_num = ac_no)
    {
        cout << "Enter Withdrwa Amount:";
        cin >> wamount;
        if (wamount <= total_balance)
        {
            total_balance -= wamount;
            cout << "Amount Widrawl Sucessfully : \n"
                 << "Your Balance is: \n"
                 << total_balance;
        }
        else
        {
            cout << "Blance is Not Sufficient";
        }
    }
    else
    {
        cout << "Invalid Account Number!\n";
    }
}

int main()
{
    Bank b1;
    b1.enter_pin();
    b1.create_account();
    return 0;
}