#include <iostream>
using namespace std;

int main()
{
     int arr[6],max,min;
     cout<<"enter the element";
     for(int i=0;i<6;i++){
         cin>>arr[i];
     }
     max = arr[0];
     for(int i=0;i<6;i++){
         if(arr[i]>max)
         max = arr[i];
         
     }
     min = arr[0];
     for(int i=0;i<6;i++){
         if(arr[i]<min)
         min = arr[i];
         
     }
     cout<<"the maximum value are = "<<max<<endl;
     cout<<"the maximum value are = "<<min<<endl;

     
}
