#include<iostream>

using namespace std;

class Flight{
     private:
     int fnumber;
     char destination;
     float distance;
     float fuel;

     public:
      void feedinfo();
      void showinfo(){
           cout<<"flight number:"<<fnumber<<endl;
           cout<<"destination:"<<destination<<endl;
           cout<<"distance:"<<distance<<endl;
      }

      void calfuel(){
        if(distance<=1000){
            fuel=500;
        }else if(distance>=1000&&distance<=2000){
            fuel=1100;
        }else if(distance>=2000){
            fuel=2200;
        }else{
            printf("distance not enterd correctly");
        }
       
      };
};

void Flight::feedinfo(){
    cout<<"enter flight number:";
    cin>>fnumber;
    cout<<"enter destination:";
    cin>>destination;
    cout<<"enter distance:";
    cin>>distance;
};


int main(){
    class Flight f1,f2;

    f1.feedinfo();
    f1.calfuel();
    f1.showinfo();

    f2.feedinfo();
    f2.calfuel();
    f2.showinfo();
}