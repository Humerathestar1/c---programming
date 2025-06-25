#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of arrays: ";
    cin >> n;

    int a[n], b[n], sum[n];

    cout << "Enter elements of first array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter elements of second array: ";
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        sum[i] = a[i] + b[i];
    }

    cout << "Sum of arrays: ";
    for (int i = 0; i < n; i++) {
        cout << sum[i] << " ";
    }

    cout << "\nFinal output: ";
    for (int i = 0; i < n; i++) {
        cout << sum[i] << "  ";
    }

    return 0;
}
