#include <iostream>
using namespace std;

class methods{
    public:
    void print(string a){
        cout<<"The string is:"<<a<<endl;
    }
    int print(int a){
        cout<<"The integar value is:"<<a<<endl;
        return a;
    }
void print(char a){
        cout<<"The char value is:"<<a<<endl;
        
    }
};

int main()
{
    methods c;
    c.print("humaira");
    c.print(18);
    c.print('k');

    return 0;
