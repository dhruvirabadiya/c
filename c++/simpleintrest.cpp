#include<iostream>

using namespace std;

int main(){
    int p,r,t,total_interest;
    cout<<"Enter the principal amount: ";
    cin>>p;
    cout<<"Enter the rate of interest: ";
    cin>>r;
    cout<<"Enter the time period: ";
    cin>>t;
    total_interest=p*r*t/100;
    cout<<"The total interest is:"<<total_interest;
}