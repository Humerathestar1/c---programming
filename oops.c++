#include <iostream>
using namespace std;

class item {
private:
    int numbers;
    float coast;

public:
    void getdata(int a, float b);  
    void putdata(void) {
        cout << "numbers: " << numbers << endl;
        cout << "coast: " << coast << endl;
    }
};

// Definition of getdata function
void item::getdata(int a, float b) {
    numbers = a;
    coast = b;
}

int main() {
    item x;
    x.getdata(123, 44.56);
    x.putdata();

    cout << "y obj" << endl;

    item y;
    y.getdata(127, 889.0);
    y.putdata();

    return 0;
}
