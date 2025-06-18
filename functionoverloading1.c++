#include <iostream>
using namespace std;

class PrintMethod {
public:
    float Area_of_circle;
    int Area_of_rectangle;
    int Area_of_square;
    int Volume_of_cube;

    void area(float &r) {
        Area_of_circle = 3.14 * r * r;
        cout << "Area of circle is " << Area_of_circle << endl;
    }

    void area(int &l, int &b) {
        Area_of_rectangle = l * b;
        cout << "Area of rectangle is " << Area_of_rectangle << endl;
    }

    void area(double &s) {
        Area_of_square = s * s;
        cout << "Area of square is " << Area_of_square << endl;
    }

    void volume(int &a) {
        Volume_of_cube = a * a * a;
        cout << "Volume of cube is " << Volume_of_cube << endl;
    }

    void display() {
        cout << "\nFinal Values:" << endl;
        cout << "Circle Area: " << Area_of_circle << endl;
        cout << "Rectangle Area: " << Area_of_rectangle << endl;
        cout << "Square Area: " << Area_of_square << endl;
        cout << "Cube Volume: " << Volume_of_cube << endl;
    }
};

int main() {
    PrintMethod obj;

    float radius = 2.0f;
    int length = 2, breadth = 3;
    double side_square = 4.0;
    int side_cube = 5;

    obj.area(radius);
    obj.area(length, breadth);
    obj.area(side_square);
    obj.volume(side_cube);

    obj.display();

    return 0;
}
