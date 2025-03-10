//check even or odd using for loop
#include <iostream>
using namespace std;

int main()
{
    int num;
    for(int i=0;i<5;i++){
    cout<<"enter the no:\n";
    cin>>num;
    
    if(num%2==0){
        cout<<"even no\n";
    }
    else{
        cout<<"odd no\n";
    }
    }
    return 0;
}
