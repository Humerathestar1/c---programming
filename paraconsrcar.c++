#include <iostream>
using namespace std;

class car {
    int model_no, engine_no, seater;
    char carname[50];
    float average;

public:
    // Parameterized constructor
    car(int m, int e, float a) {
        model_no = m;
        engine_no = e;
        average = a;
    }

    // Input function for additional info
    void input() {
        cout << "Enter the car name: ";
        cin >> carname;
        cout << "Enter the seater: ";
        cin >> seater;
    }

    // Display function
    void display() {
        cout << "\nCar Details:\n";
        cout << "Car Name: " << carname << endl;
        cout << "Seater: " << seater << endl;
        cout << "Engine No: " << engine_no << endl;
        cout << "Model No: " << model_no << endl;
        cout << "Average (km/l): " << average << endl;
    }
};

int main() {
    // Create object with given model no, engine no, average
    car obj(8943, 1496, 15.0);
    
    obj.input();
    obj.display();

    return 0;
}
