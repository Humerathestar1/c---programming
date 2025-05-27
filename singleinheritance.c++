#include <iostream>
#include <string>
using namespace std;

class organization {
private:
    string name;
    int sector;

public:
    organization() {
        name = "humaira";
        sector = 32;
    }

    void show() {
        cout << "The Organization name is: " << name << endl;
        cout << "The sector is: " << sector << endl;
    }
};

              class employee : public organization {
                private:
                     string name;
                     int id;

                public:
                    employee()
                    {
                       name = "Anamika";
                       id = 2345;
                    
                    }

               void show()
               {
                       organization::show();
                            cout << "The Employee name is: " << name << endl;
                         cout << "The id is: " << id << endl;
               }
};

  int main() {
    employee a;
    a.show();

    return 0;
}
