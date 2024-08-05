#include<iostream>

using namespace std;

class Book{
    private:
    
    int bno;
    char btitle[20];
    float price;
    float total;
    
    float totalcst(int n) {
            return n * price;
        }

    
    public:
    void input();
    
    void display(){
        cout<<"book number:"<<bno<<endl;
        cout<<"book title:"<<btitle<<endl;
        cout<<"book price:"<<price<<endl;
    };
    
    void purchase(){
        int n;
        cout << "Enter the number of copies to be purchased: ";
        cin >> n;
        total = totalcst(n);
        cout << "Total cost to be paid: " << total << endl;
    };
};

void Book::input(){
    cout<<"enter book number:";
    cin>>bno;
    cout<<"enter book title:";
    cin>>btitle;
    cout<<"enter boom price:";
    cin>>price;
};

int main(){
    class Book b;
    b.input();
    b.display();
    b.purchase();
}