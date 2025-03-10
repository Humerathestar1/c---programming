//string addition
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str,str2;
    cout<<"enter you first name:";
    cin>>str;
    cout<<"enter you last name:";
    cin>>str2;
    string fullname = str+str2;
    cout<<"full name  "<<fullname;

    return 0;
}
