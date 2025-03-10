//2d array
#include <iostream>
using namespace std;

int main()
{
    int arr[3][3],r,c;
    cout<<"enter the value of r and c:";
    for( r=0;r<3;r++){
        for(c=0;c<3;c++){
            cin>>arr[r][c];
        }
    }
     for( r=0;r<3;r++){
        for(c=0;c<3;c++){
            cout<<arr[r][c];
        }
        cout<<"\n";
     }
    return 0;
}
