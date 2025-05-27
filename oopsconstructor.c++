#include <iostream>
using namespace std;

class student{
    
private:
   string name;
   int age;
public:
   student(){
     name = "Humaira";
     age = 18;
}
void display(){
    cout<<"The name is "<<name<<endl;
    cout<<"The age is"<<age<<endl;
}
};
int main()
{
    student s1;
    s1.display();

    return 0;
}
