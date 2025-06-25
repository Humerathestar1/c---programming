#include <iostream>
using namespace std;

int main()
{
      int  even_count=0;
        int odd_count=0;
    int arr[10],n;
    for(int i=0;i<5;i++){
        cin>>n;

        if(i%2==0){
        even_count+=1;

        }
        else{
            odd_count+=1;
        }
    }
    cout<<"even is:"<<even_count<<endl;
    cout<<"odd is:"<<odd_count<<endl;
    return 0;
}
