#include<iostream>

using namespace std;

int main(){
    int rate,qty,amt,dis,billamt,gst;
    float totalamt;
    cout<<"Enter the rate of the product: ";
    cin>>rate;
    cout<<"Enter the quantity of the product: ";
    cin>>qty;
    amt=rate*qty;
    cout<<"amount is:"<<amt<<endl;
    dis=amt*5/100;
    cout<<"Discount is:"<<dis<<endl;
    billamt=amt-dis;
    cout<<"Bill amount is:"<<billamt<<endl;
    gst=billamt*18/100;
    cout<<"GST is:"<<gst<<endl;
    totalamt=billamt+gst;
    cout<<"net bill is:"<<totalamt;
  

}