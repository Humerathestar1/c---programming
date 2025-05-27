#include <iostream>
using namespace std;

class add{
    
private:
   int a,b,sum=0;
public:
   add(){
       a = 90;
       b = 10;
       sum = a+b;
     
}
void display(){
    cout<<"The sum is: "<<sum<<endl;

}
};
int main()
{
    add a1;
    a1.display();

    return 0;
}
