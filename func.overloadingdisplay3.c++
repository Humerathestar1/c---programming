//display Information (Name only, Name + Age, Name + Age + Address)
#include <iostream>
using namespace std;

class person{
    public:
 void display(string name){
     cout<<"the name is "<<name<<endl;
 }
 void display(string name,int age){
     cout<<"the name is "<<name<<", the age is:"<<age<<endl;
     
 }
 void display(string name,int age,string address){
     cout<<"the name is: "<<name<<", the age is:"<<age<<", the address is "<<address<<endl;
 }
};

int main()
{
  person p;
  p.display("humaira");
  p.display("humaira",18);
  p.display("humaira",18,"Bhopal");

    return 0;
}
