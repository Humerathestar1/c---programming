#include <iostream>
#include <string>
using namespace std;

class book {
private:
    string author;
    string title;
    string publication;
    float cost;
    int issueday;
    int depositday;

public:
    book() {
        author = "";
        title = "";
        publication = "";
        cost = 0.0;
        issueday = 0;
        depositday = 0;
    }

    book(string a, string t, string p, float c, int i, int d) {
        author = a;
        title = t;
        publication = p;
        cost = c;
        issueday = i;
        depositday = d;
    }

    void bookinfo() {
        cout << "Author: ";
        cin>>author;
        cout << "Title: ";
        cin>>title;
        cout << "Publication: ";
        cin>>publication;
        cout << "Cost: ";
        cin >> cost;
        cout << "Issue Day: ";
        cin >> issueday;
        cout << "Deposit Day: ";
        cin >> depositday;
        cin.ignore();
    }

    void displayBookInfo() {
        cout << "\nBook Information" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publication: " << publication << endl;
        cout << "Cost: " << cost << endl;
        cout << "Issued Day: " << issueday << endl;
        cout << "Deposit Day: " << depositday << endl;
    }

    friend void showBook(book b);
};

void showBook(book b) {
    cout << "\n[ Friend Function]" << endl;
    cout << "Title: " << b.title << endl;
    cout << "Author: " << b.author << endl;
    cout << "Publication: " << b.publication << endl;
    cout << "Cost: " << b.cost << endl;
    cout << "Issued Day: " << b.issueday << endl;
    cout << "Deposit Day: " << b.depositday << endl;
}

int main() {
    book b1;
    b1.bookinfo();
    b1.displayBookInfo();
    showBook(b1);

    return 0;
}
