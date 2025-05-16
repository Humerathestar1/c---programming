#include <iostream>
using namespace std;
 class duration{
     private:
       int date;
       int month;
       int year;
       public:
     int input(){
         cout<<"enter the date = \nmonth = \n year = \n";
         cin>>date>>month>>year;
         return 0;
     }
     int display(){
         cout<<"date is"<<date<<endl;
         cout<<"month is"<<month<<endl;
         cout<<"year is"<<year<<endl;
         return 0;
     }
 };

int main()
{
    duration d;
    d.input();
    d.display();

    return 0;
}
