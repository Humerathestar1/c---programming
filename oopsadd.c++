#include <iostream>
using namespace std;

class add
{
   private:
           int a,b;   //data members
                                          //data encapsulation
   public:
          int input()
          {
              cout<<"enter the element of a and b"<<endl;
              cin>>a>>b;
              return 0;
          }
          int sum()                              //member function
          {
             int sum1;
             
             sum1 = a+b;
            cout<<"the addition is = "<<sum1;
             return 0;
          }           
};

int main()
{
    add obj;
    obj.input();        //creation of object
    obj.sum();
    return 0;
}
