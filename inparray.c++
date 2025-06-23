#include <iostream>
using namespace std;

int main()
{
    int a[10],i;
    cout<<"enter the elements of array"<<endl;
    for(i=0;i<=9;i++){
        cin>>a[i];
    }
     cout << "\nThe elements of the array are:" << endl;
    for ( i = 0; i <=9; i++) {
        cout << a[i];
    }

    return 0;
}
