#include <iostream>
using namespace std;
class searching
{
    int arr[7];
    int key;
    int search;
    public:
void input(){
 cout<<"enter the size of the element"<<endl;
 for(int i=0;i<7;i++){
 cin>>arr[i];
 }
}
void key1(){
    cout<<"enter the key";
    cin>>key;
}
 
 void search1(){
        
        for (int i=0;i<7;i++){
            if (arr[i]==key){
                search=arr[i];
                cout<<"index is:"<<i;
            }
        }
    }
};

int main()
{
    searching s;
    s.input();
    s.key1();
    s.search1();

    return 0;
}
