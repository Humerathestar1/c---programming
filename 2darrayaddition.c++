#include <iostream>
using namespace std;

int main()
{
    int ar[3][3];
    int arr[3][3];
    int sum[3][3];

    cout << "1st matrix:" << endl;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> ar[i][j];

    cout << " 2nd matrix :" << endl;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> arr[i][j];

    cout << "\nFirst matrix:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            cout << ar[i][j] << "  ";
        cout << endl;
    }

    cout << "\nSecond matrix:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            cout << arr[i][j] << "  ";
        cout << endl;
    }

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            sum[i][j] = ar[i][j] + arr[i][j];

    cout << "\nSum of matrices:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            cout << sum[i][j] << "  ";
        cout << endl;
    }

    return 0;
}
