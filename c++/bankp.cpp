#include <iostream>
using namespace std;

class Bank
{
protected:
    int pin = 0000;
    int ac_no;
    string acholder_name;
    string ac_type;
    int balance;
    double total_amount;

public:
    void ac_Pin();
    void create_account();
    void show_accountdetail();
    void Withdrwal();
    void Deposite();
    void Totalbalance();
};
void Bank::ac_Pin()
{
    int bank_pin;
    cout << "Enter Your Pin Number:";
    cin >> bank_pin;
    if (bank_pin != pin)
    {
        cout << "Pin Is Invalid Cant Access" << endl;
    }
}

void Bank::create_account()
{
    cout << "<----Create Your Account:----> \n";

    cout << "Enter Your Account Number:";
    cin >> ac_no;
    cout << "Enter Account Holder Name:";
    cin >> acholder_name;
    cout << "Enter Which Type Of Account You Want To Open:";
    cin >> ac_type;
    cout << "Enter Money You Want To Deposite:";
    cin >> balance;
    cout << "Account Created Successfully" << endl;
}

void Bank::show_accountdetail()
{
    cout << "Account Number is:" << ac_no << endl;
    cout << "Account Holder Name is:" << acholder_name << endl;
    cout << "Account Type is:" << ac_type << endl;
    cout << "Your Balance is:" << balance << endl;
}

void Bank::Withdrwal()
{
    int withdrwal_ammount;
    cout << "----Withdrawal Amount---->";

    int account_num;
    cout << "Enter Bank Account Number:";
    cin >> account_num;
    if (account_num == ac_no)
    {
        cout << "Enter The Amount You Want To Withdrwal:";
        cin >> withdrwal_ammount;
        total_amount = withdrwal_ammount -= balance;
        cout << "Amount Withdrwal Sucessfully" << endl;
    }
    else
    {
        cout << "Incorrect Account Number";
    }
}

void Bank::Deposite()
{
    int deposite_amount;

    cout << "----Deposite Amount---->";
    int account_num;
    cout << "Enter Bank Account Number:";
    cin >> account_num;
    if (account_num == ac_no)
    {
        cout << "Enter Amount You Want To Deposite:";
        cin >> deposite_amount;
        total_amount = deposite_amount += balance;
        cout << "Amount Withdrwal Sucessfully" << endl;
    }
    else
    {
        cout << "Incorrect Account Number";
    }
}

void Bank::Totalbalance()
{
    cout << "----Total Balance--->";
    int account_num;
    cout << "Enter Your Account Number:";
    cin >> account_num;
    if (account_num == ac_no)
    {
        cout << "Total Amount In Your Account:" << total_amount << endl;
    }
    else
    {
        cout << "Incorrect Account Number";
    }
}

int main()
{
    Bank b1;
    int choice;
    b1.ac_Pin();
    b1.create_account();
    do
    {
        cout << "1.Show Bank Details " << endl;
        cout << "2.Withdrwal Amount" << endl;
        cout << "3.Deposite Amount " << endl;
        cout << "4.Check Balance" << endl;
        cout << "0.Exit" << endl;
        cout << "---->Enter Your Choice:<----";
        cin >> choice;

        switch (choice)
        {

        case 1:
            b1.show_accountdetail();
            if (choice != 0)
            {
                cout << "Continue For Service Or Not (Yes=1/no=0):";
                cin >> choice;
            }
            break;

        case 2:
            b1.Withdrwal();
            if (choice != 0)
            {
                cout << "Continue For Service Or Not (Yes=1/no=0):";
                cin >> choice;
            }
            break;

        case 3:
            b1.Deposite();
            if (choice != 0)
            {
                cout << "Continue For Service Or Not (Yes=1/no=0):";
                cin >> choice;
            }
            break;

        case 4:
            b1.Totalbalance();
            if (choice != 0)
            {
                cout << "Continue For Service Or Not (Yes=1/no=0):";
                cin >> choice;
            }
            break;

        case 0:
            cout << "Exit";
            break;

        default:
            cout << "Invalid Option Selected";
        }

    } while (choice != 0);
}