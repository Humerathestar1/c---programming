#include <iostream>
using namespace std;

class area
{
   private:
           int a,l,w,r;   //data members
                                          //data encapsulation
   public:
         
          int circle()                              //member function
          {
              cout<<"enter the radius:"<<endl;
              cin>>r;
             int circle1;
             circle1 = 3.14 * r;
            cout<<"\nthe area of circle  is = "<<circle1;
             return 0;
          }   
          int rectangle()
          {
              cout<<"\nenter the length and width:\n"<<endl;
              cin>>l>>w;
             int rectangle1;
             rectangle1 = l*w;
            cout<<"\nthe area of rectangle  is = "<<rectangle1;
             return 0;
          }
           int cube()
          {
              cout<<"\nenter the area:\n"<<endl;
              cin>>a;
             int cube1;
             cube1 = 6*a*a*a;
            cout<<"\nthe area of cube  is = "<<cube1;
             return 0;
          }
};

int main()
{
    area obj;
                //creation of object
    obj.circle();
    obj.rectangle();
    obj.cube();
    return 0;
}
