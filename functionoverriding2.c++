#include <iostream>
using namespace std;
class base{
public:

   virtual void print(){
       
        cout<<"This is a base class"<<endl;
    }
};
class derived:public base{
public:
    void print(){
        base::print();
                cout<<"This is a derived class "<<endl;

    }
};
  

int main()
{
    derived c;
    c.print();


    return 0;
}
