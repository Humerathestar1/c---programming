//4. Interest Calculator (Simple Interest, Compound Interest)
#include <iostream>
#include <cmath>
using namespace std;

class calculate{
    public:
    float interest(float p,float r,float t){
        float simpleinterest = p*r*t/100;
        cout<<"the simple interest is:  "<<simpleinterest<<endl;
        return simpleinterest;
        
    }
    float interest(float p,float r,float t,bool iscompound){
      float amount = p*pow((1+r/100),t);
       float compoundinterest = amount - p;
        cout<<"compound interest is:  "<<compoundinterest<<endl;
        return compoundinterest;
    }
};

int main()
{
    calculate c;
    c.interest(10000,5,2);
    c.interest(10000,5,2,true);

    return 0;
}
