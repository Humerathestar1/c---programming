#include <iostream>
#include<string>
using namespace std;

class vehicle{
private:
    string brand;
    int year;
public:
   vehicle(){
       cout<<"enter the brand name"<<endl;
       cin>>brand;
       cout<<"enter the year"<<endl;
       cin>>year;
       
   }
   void show(){
       cout<<"enter the brand name"<<brand<<endl;
       cout<<"enter the year"<<year<<endl;
   }
};
class car:public vehicle{
private:
  string modelname;
public:
   car(){
       cout<<"enter the modelname";
       cin>>modelname;
   }
   void show(){
       vehicle::show();
       cout<<"the modelname is"<<modelname;
   }
    
};

int main()
{
   car c;
   c.show();

    return 0;
}
