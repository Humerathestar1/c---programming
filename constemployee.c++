#include <iostream>
using namespace std;
 class bank_employee
 {
    int age,salary,account_no;
    char name[10];
    int id;
    public:
    bank_employee(){
        salary = 300000;
    }
    void input(){
        
        cout<<"enter the age"<<endl;
        cin>>age;
        cout<<"enter the accno:"<<endl;
        cin>>account_no;
        cout<<"enter the name"<<endl;
        cin>>name;
        cout<<"enter the id"<<endl;
        cin>>id;

    }
    void display(){
        cout<<"employeee details:"<<endl;
        cout<<"age is"<<age<<endl;
        cout<<"salary is"<<salary<<endl;
        cout<<"account no"<<account_no<<endl;
        cout<<"name is"<<name<<endl;
        cout<<"id is"<<id;
    }
 };

int main()
{
    bank_employee obj;
    obj.input();
    obj.display();

    return 0;
}
