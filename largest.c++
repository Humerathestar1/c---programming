#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter the value of a:";
    cin>>a;
    cout<<"enter the value of b:";
    cin>>b;
   cout<<"enter the value of c:";
    cin>>c;
    if(a>b){
        cout<<"A is the largest";
    }
    else if(b>c){
        cout<<"B is the largest";
    }
    else{
        cout<<"c is the largest";
    }


    return 0;
}
