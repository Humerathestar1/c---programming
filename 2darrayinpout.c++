#include <iostream>
using namespace std;

int main()
{
    int a[3][3];
    
    cout<<"enter the rows and column"<<endl;
    for(int i=0;i<3;i++){
        
        for(int j = 0; j <3; j++) {
            cin>>a[i][j];
    }
     cout<<endl;

      }
       cout<<"3x3 matrix display"<<endl;
    for(int i=0;i<3;i++){
        
        for(int j = 0; j <3; j++) {

        cout<<a[i][j]<<"  ";
    }
     cout<<endl;

      }
      

    return 0;
}
