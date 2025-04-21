#include <iostream>
using namespace std;
int main()
{
    int number,factorial=1;
    cout<<"enter the no:";
    cin>>number;
    if(number<0){
        cout<<"enter the positive no:";
    }
    else
    {
    for(int i=1;i<=number;i++){
        factorial *=i;
    }
    cout << "Factorial of " << number << " = " << factorial << endl;
    }

    return 0;
}
