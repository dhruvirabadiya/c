#include<iostream>
#include<fstream>

using namespace std;

int main(){
    char input[50];
    ofstream os;
    os.open("xyz.txt");

    cout<<"please enter your name:"<<endl;
    cin.getline(input,100);
    os<<input<<endl;

    cout<<"enter your contact number:"<<endl;
    cin>>input;
    cin.ignore();
    os<<input<<endl;
    os.close();

    ifstream is;
    string line;
    is.open("xyz.txt");
    cout<<endl<<"reading text file:"<<endl;
    while(getline (is,line)){
        cout<<line<<endl;
    }
    is.close();
}