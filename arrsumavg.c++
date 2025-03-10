//array diaplay the sum and average 
#include <iostream>
using namespace std;
int main()
{
    int arr[5],i,sum=0,avg=0;
    cout<<"enter the value of array:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
        sum=sum+arr[i];
        avg=sum/5;
    }
    cout<<"\n"<<sum<<endl;
        
        cout<<"\n"<<avg<<endl;

    return 0;
}
