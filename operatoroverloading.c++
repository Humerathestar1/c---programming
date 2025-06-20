#include <iostream>
using namespace std;

class complex{
private:
float real, img;
public:
complex(float r = 0,float i = 0):real(r),img(i){}
complex operator + (const complex &c)
{
    return complex(real + c.real,img+c.img);
    
}
void display(){
    cout<<real<<"+"<<img<<"i"<<endl;
}
};

int main()
{
    complex c1(4.5,2.5);
    complex c2(9.4,3.5);
    complex c3 = c1+c2;
    cout<<"sum =";
    c3.display();
    return 0;
}
