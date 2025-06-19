#include <iostream>
using namespace std;

class car {
public:
    virtual void p1average() {
        cout << "Average" << endl;
    }

    virtual void luxury() {
        cout << "Luxury" << endl;
    }

    virtual void suv() {
        cout << "Suv" << endl;
    }
};

class alto : public car {
public:  
    void average() {
        cout << "This is Average" << endl;
    }

    void luxury() {
        cout << "This is Luxury" << endl;
    }

    void suv()  {
        cout << "This is Suv" << endl;
    }
};

int main() {
    alto c;
    c.p1average();
    c.average();
    c.luxury();
    c.suv();
    return 0;
}
