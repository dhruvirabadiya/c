
#include <iostream>

using namespace std;

class Largestnum{
    int num1;
    int num2;
    int num3;
    
    public:
    friend int findlargest(Largestnum n);
    
    void getdata(int a,int b,int c){
        num1=a;
        num2=b;
        num3=c;
    }
};
    int findlargest(Largestnum n){
        if(n.num1>=n.num2 && n.num1>=n.num3){
            return n.num1;
        }else if(n.num2>=n.num1 && n.num2>=n.num3){
            return n.num2;
        }else{
            return n.num3;
        }
}


int main() {
    class Largestnum n;
    
    n.getdata(3,15,8);
    cout << "The largest number is: " << findlargest(n) << endl;

}