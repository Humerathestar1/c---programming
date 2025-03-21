#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter the value:";
    cin>>a>>b;
    cout<<"after swapping"<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<endl<<b;
    

    return 0;
}
