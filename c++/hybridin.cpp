#include<iostream>
using namespace std;

class Book{
      protected:
      int bno;
      char btitle[50];
      public:
      void input(){
         cout<<"enter a book number:";
         cin>>bno;
         cout<<"enter a book title:";
         cin>>btitle;
        
      }

      void display(){
        cout<<"book number is:"<<bno<<endl;
        cout<<"book title is:"<<btitle<<endl;
      }
};

class derivebook1 : public Book{
        protected:
         float price;
        float total;

      float totalcst(int n){
        return n*price;
      }
         public:
        void input1(){
            input();
         cout<<"enter book price:";
         cin>>price;
      }

      void display1(){
        display();
        cout<<"book price is:"<<price<<endl;
      }
        
};

class derivebook2:public derivebook1{
      void purchase(){
        int n;
        cout<<"enter  number of copies:";
        cin>>n;
        total=totalcst(n);
        cout<<"total cost to be paid:"<<total<<endl;
      }
};

class derivealldata:public derivebook2{
          public:
          void getallbookdata(){
           input1();
           display1();
          }

};


      
int main()
{
       derivealldata book;
       book.getallbookdata();
return 0;
}