#include <iostream>
using namespace std;

class Book
{
protected:
  int bno;
  char btitle[50];

public:
  void input()
  {
    cout << "Enter a book number: ";
    cin >> bno;
    cout << "Enter a book title: ";
    cin >> btitle;
  }

  void display()
  {
    cout << "Book number is: " << bno << endl;
    cout << "Book title is: " << btitle << endl;
  }
};

class derivebook1 : public Book
{
protected:
  float price;
  float total;

  float totalcst(int n)
  {
    return n * price;
  }

public:
  void input1()
  {
    input();
    cout << "Enter book price: ";
    cin >> price;
  }

  void display1()
  {
    display();
    cout << "Book price is: " << price << endl;
  }
};

class derivebook2 : public derivebook1
{
public:
  void purchase()
  {
    int n;
    cout << "Enter number of copies: ";
    cin >> n;
    total = totalcst(n);
    cout << "Total cost to be paid: " << total << endl;
  }
};

class derivealldata : public derivebook2
{
public:
  void getallbookdata()
  {
    input1();
    display1();
    purchase();
  }
};

int main()
{
  derivealldata book;
  book.getallbookdata();
  return 0;
}
