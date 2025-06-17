#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int roll_no;

public:
    Student(string n, int r) : name(n), roll_no(r) {}
    void displayStudent() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
    }
};

class Marks : virtual public Student {
protected:
    int marks;

public:
    Marks(string n, int r, int m) : Student(n, r), marks(m) {}
    void displayMarks() {
        cout << "Marks: " << marks << endl;
    }
};

class Sports : virtual public Student {
protected:
    int sports_score;

public:
    Sports(string n, int r, int s) : Student(n, r), sports_score(s) {}
    void displaySports() {
        cout << "Sports Score: " << sports_score << endl;
    }
};

class Result : public Marks, public Sports {
public:
    Result(string n, int r, int m, int s)
        : Student(n, r), Marks(n, r, m), Sports(n, r, s) {}

    char calculateGrade() {
        int total = marks + sports_score;
        if (total >= 90)
            return 'A';
        else if (total >= 75)
            return 'B';
        else if (total >= 60)
            return 'C';
        else if (total >= 45)
            return 'D';
        else
            return 'F';
    }

    void displayResult() {
        displayStudent();
        displayMarks();
        displaySports();
        int total = marks + sports_score;
        cout << "Total Score: " << total << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    Result r("Shitesh", 12, 67, 20);
    r.displayResult();

    return 0;
}
