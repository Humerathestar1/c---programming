#include <iostream>
using namespace std;
class virat_Record{
    public:
    inline void odiRecord(){
        int odi_runs,match,century;
        cout<<"Enter Odi runs:";
        cin>>odi_runs;
        cout<<"enter the match:";
        cin>>match;
        cout<<"enter the century:";
        cin>>century;
        float avg = odi_runs/match;
        cout<<"odi avrage is:"<<avg<<endl;
        cout<<"century of odi is:"<<century<<endl;
        
    }
    inline void testRecord(){
        int test_runs,match,century;
        cout<<"Enter test runs:";
        cin>>test_runs;
        cout<<"enter the match:";
        cin>>match;
        cout<<"enter the century:";
        cin>>century;
        float avg = test_runs/match;
        cout<<"test avrage is:"<<avg<<endl;
        cout<<"century of test  is:"<<century<<endl;
    }
    inline void t20Record(){
        int t20_runs,match,century;
        cout<<"Enter t20 runs:";
        cin>>t20_runs;
        cout<<"enter the match:";
        cin>>match;
        cout<<"enter the century:";
        cin>>century;
        float avg = t20_runs/match;
        cout<<"t20 avrage is:"<<avg<<endl;
        cout<<"century of t20 is:"<<century<<endl;
    }
    
};

int main()
{
    virat_Record obj;
    obj.odiRecord();
    obj.testRecord();;
    obj.t20Record();
    return 0;
}
