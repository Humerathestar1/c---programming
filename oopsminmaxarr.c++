#include <iostream>
using namespace std;

class Check {
    private:
    int arr[6],max,min;

    public:
    void input() {
            cout << "Enter the elements in array:" << endl;
                 for (int i = 0; i < 6; i++) {
                      cin >> arr[i];
              }
         }

    void max1() {
        max=arr[0];
            for (int i = 0; i < 6; i++) {
            if (arr[i] >max) {
                   max =arr[i];
            }
        }
    }

    void min1() {
        min=arr[0];
        for (int i = 0; i < 6; i++) {
               if (arr[i]<min) {
                   min = arr[i];
                }
            }
 }

    void display(){
        cout << "maximum value are = " << max << endl;
        cout << "minimum value are= " << min << endl;
    }
};

int main() {
    Check c;
    c.input();
    c.max1();
    c.min1();
    c.display();

    return 0;
}
