#include <iostream>
using namespace std;

class Calculator {
public:
    int a, b;

    void input(int x, int y) {
        a = x;
        b = y;
    }

    void add() {
        cout << "Sum: " << a + b << endl;
    }

    void subtract() {
        cout << "subtract: " << a - b << endl;
    }

    void multiply() {
        cout<<"multiply: " << a * b << endl;
    }

    void divide() {
        if (b != 0)
            cout << "Division: " << (float)a / b << endl;
        else
            cout << "Cannot divide by zero" << endl;
    }
};

int main() {
    Calculator c;
    c.input(10, 2);
    c.add();
    c.subtract();
    c.multiply();
    c.divide();
    return 0;
}
