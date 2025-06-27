#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3], C[3][3];

    cout << "Enter elements of matrix A:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Enter elements of matrix B:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < 3; j++) {
            cin >> B[i][j];
        }
    }
    cout << "\nMatrix A:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << A[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "\nMatrix B:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << B[i][j] << "  ";
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            C[i][j] = 0;
    for (int i = 0; i < 3; i++) {         
        for (int j = 0; j < 3; j++) {     
            for (int k = 0; k < 3; k++) { 
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "\nMatrix Multiplication :" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << C[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}

