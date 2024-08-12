#include<iostream>

using namespace std;

class Volume{
    int l;
    int b;
    int h;

    public:
    friend Volume add(Volume a,Volume b);

    void getdata(int l1,int b1,int h1){
        l=l1;
        b=b1;
        h=h1;
    }  

    int getvolume(){
        return l*b*h;
    }
};

Volume add(Volume a,Volume b){
    Volume c;
    c.l=a.l+b.l;
    c.b=a.b+b.b;
    c.h=a.h+b.h;

    return c;
}


int main(){
    class Volume l,b,h;

    l.getdata(2,2,2);
    b.getdata(5,5,5);

    cout<<"volume of l:"<<l.getvolume()<<endl;
    cout<<"volume of b:"<<b.getvolume()<<endl;

    h=add(l,b);
    cout<<"volume of h:"<<h.getvolume()<<endl;

}