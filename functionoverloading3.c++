//Volume Calculator (Cube, Cuboid, Cylinder)
#include <iostream>
using namespace std;

class Volume{
public: 
int formula;
   int compute(int s){
      formula = s*s*s;
      cout<<"cube is:"<<formula<<endl;
      return formula;
    }

    
   int compute(int l,int w,int h){
        formula = l*w*h;
        cout<<"cuboid is:"<<formula<<endl;
        return formula;
    }

    int compute(int r,int s){
        formula = 3.14f*r*r*s;
        cout<<"cylinder is:"<<formula<<endl;
        return formula;
    }
};

int main()
{
    Volume v;
    v.compute(2);
    v.compute(2,3,1);
    v.compute(2,3);

    return 0;
}
