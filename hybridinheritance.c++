#include <iostream>
using namespace std;

class Person {
public:
    string personName;

    void inputPerson() {
        cout << "Enter the person name: ";
        cin >> personName;
    }

    void displayPerson() {
        cout << "Person Name: " << personName << endl;
    }
};

class Employee : public Person {
public:
    string place;
    string company_name;

    void inputEmployee() {
        cout << "Enter the place: ";
        cin >> place;
        cout << "Enter the company name: ";
        cin >> company_name;
    }

    void displayEmployee() {
        cout << "Place: " << place << endl;
        cout << "Company Name: " << company_name << endl;
    }
};


class Salary {
public:
    int salary;

    void inputSalary() {
        cout << "Enter the salary: ";
        cin >> salary;
    }

    void displaySalary() {
        cout << "Salary: " << salary << endl;
    }
};


class Manager : public Employee, public Salary {
public:
    string department;

    void inputManagerData() {
        inputPerson();         
        inputEmployee();       
        inputSalary();         
        cout << "Enter the department: ";
        cin >> department;
    }

    void displayManagerData() {
        displayPerson();       
        displayEmployee();     
        displaySalary();       
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m;
    m.inputManagerData();
    m.displayManagerData();

    return 0;
}
