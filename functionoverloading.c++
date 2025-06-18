#include <iostream>
using namespace std;
class printmethod{
public:

void print(int i){
    cout<<"value of i"<<i<<endl;
}
void print(float f){
    cout<<"value of f"<<f<<endl;
}
void print(char c){
    cout<<"value of c"<<c<<endl;
}

};

int main()
{
 printmethod obj;
 obj.print(10);
 obj.print(78.6f);
 obj.print('s');

    return 0;
}
