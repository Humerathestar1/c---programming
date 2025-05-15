#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    int input(){
        cout<<"enter the name:"<<endl;
        cin>>name;
        cout<<"enter the roll no"<<endl;
        cin>>rollno;
        return 0;
    }
    int display(){
        cout<<"Name = "<<name<<"\n"<<"Roll NO ="<<rollno;
        return 0;
    }
};

int main()
{
    student s;
    s.input();
    s.display();
    return 0;
}
