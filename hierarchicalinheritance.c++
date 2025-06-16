#include <iostream>
using namespace std;

class university {
public:
    void Rules() {
        cout << "Rule 1: Attend classes regularly and participate actively." << endl;
        cout << "Rule 2: Respect and adhere to the university's code of conduct." << endl;
        cout << "Rule 3: Be attentive" << endl;
    }
};

class b_tech : public university {
public:
    void tech() {
        cout << "You must be qualified by maths" << endl;
        cout << "Your age should be between 17-18" << endl;
        cout << "You must have cleared the JEE exam" << endl;
    }
};

class mba : public university {
public:
    void mbaInfo() {
        cout << "You need a bachelor's degree first" << endl;
        cout << "You'll also need to prepare for and appear for MBA entrance exams like CAT, GMAT, etc." << endl;
    }
};

class bba : public university {
public:
    void bbaInfo() {
        cout << "You must have passed your 12th standard (or equivalent) from a recognized board." << endl;
        cout << "While commerce is common, students from any stream (science, arts, etc.) can apply." << endl;
    }
};

int main() {
    bba A;
    b_tech B;
    mba C;

    cout << " BBA Requirements " << endl;
    A.Rules();
    A.bbaInfo();

    cout << "\n B.Tech Requirements " << endl;
    B.Rules();
    B.tech();

    cout << "\n MBA Requirements"<<endl;
    cout<<"\n ------THANK_YOU----"<<endl;
    C.Rules();
    C.mbaInfo();

    return 0;
}
