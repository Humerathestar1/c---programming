#include <iostream>
using namespace std;

int Add(int a,int b){
    cout<<"sum is"<<a+b<<endl;
    return a + b;
}
float Add(double a,float b){
    cout<<"sum is"<<a+b<<endl;
    return a + b;
}
float Add(float a,float b){
    cout<<"sum is"<<a+b<<endl;
    return a + b;
}
int main()
{
    
   Add(10,12);
   Add(10,9.5);
   Add(9.5,6.7);

    return 0;
}
