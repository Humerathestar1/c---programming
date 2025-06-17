#include <iostream>
using namespace std;

class student {
public:
    string name;
    int roll_no;

    void input() {
        cout << "Enter the student name: ";
        cin >> name;
        cout << "Enter the roll no: ";
        cin >> roll_no;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
    }
};

class marks : public student {
public:
    int maths;
    int physics;

    void input1() {
        cout << "Enter the marks of mathematics: ";
        cin >> maths;
        cout << "Enter the marks of physics: ";
        cin >> physics;
    }

    void display1() {
        cout << "Maths: " << maths << endl;
        cout << "Physics: " << physics << endl;
    }
};

class sports : virtual public student {
private:
    string sport;

public:
    void input2() {
        cout << "Enter the favorite sport: ";
        cin >> sport;
    }

    void display2() {
        cout << "Favorite Sport: " << sport << endl;
    }
};

class result : public marks {
public:
    int total;

    void calculate_total() {
        total = maths + physics;
        cout << "The total marks is: " << total << endl;
    }
};

int main() {
    result r;
    r.input();           // student details
    r.input1();          // marks input
    r.display();         // display student details
    r.display1();        // display marks
    r.calculate_total(); // calculate and display total

    return 0;
}
