#include <iostream>
using namespace std;

class calculator{
    public:
    int add(int a,int b){
        int result = a+b;
        cout<<"The integar value is:"<<result<<endl;
        return result;
    }
    float add(float a,float b){
        int result = a+b;
        cout<<"The float value is:"<<result<<endl;
        return result;
    }
    double add(double a,double b){
       int result = a+b;
        cout<<"The double value is:"<<result<<endl;
        return result;
    }
};

int main()
{
    calculator c;
    c.add(10,5);
    c.add(10.3,8.9);
    c.add(2.5678,9.4532);

    return 0;
}
