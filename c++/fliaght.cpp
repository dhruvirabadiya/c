#include<iostream>
using namespace std;

class Flight {
    private:
        int fnumber;
        string destination;
        float distance;
        float fuel;

    public:
        void feedinfo();
        void showinfo() {
            cout << "Flight number: " << fnumber << endl;
            cout << "Destination: " << destination << endl;
            cout << "Distance: " << distance << endl;
            cout << "Fuel: " << fuel << endl;
        }

        void calfuel() {
            if (distance <= 1000) {
                fuel = 500;
            } else if (distance > 1000 && distance <= 2000) {
                fuel = 1100;
            } else if (distance > 2000) {
                fuel = 2200;
            } else {
                cout << "Distance not entered correctly" << endl;
            }
        }
};

void Flight::feedinfo() {
    cout << "Enter flight number: ";
    cin >> fnumber;
    cout << "Enter destination: ";
    cin >> destination;
    cout << "Enter distance: ";
    cin >> distance;
    calfuel();
}

int main() {
    Flight f1, f2;

    f1.feedinfo();
    f1.showinfo();

    f2.feedinfo();
    f2.showinfo();

    return 0;
}
