#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    float price;

    void getData() {
        cout << "Enter book title: ";
        cin >> title;

        cout << "Enter author name: ";
        cin >> author;

        cout << "Enter price: ";
        cin >> price;
    }

    void showData() {
        cout << "\nBook Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book b;     // Create object of Book class
    b.getData();  // Call function to take input
    b.showData(); // Call function to display output

    return 0;
}
