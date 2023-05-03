#include <iostream>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() { fastio
    cout<<"Lumberjacks:\n";    
    string I;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {          
        bool tof = false;
        int v[10] = {0};
        cin>>v[0]>>v[1];
        if(v[0]>v[1])
        {
            for(int z = 2; z < 10; z++)
            {
                cin>>v[z];
                if(v[z]>v[z-1])
                {
                    tof = true;                
                    getline(cin,I);
                    break;
                }
            }        
            if(tof)cout<<"Unordered\n";
            else cout<<"Ordered\n";

        }else{
            for(int z = 2; z < 10; z++)
            {
                cin>>v[z];
                if(v[z]<v[z-1])
                {
                    tof = true;
                    getline(cin,I);
                    break;
                }
            }
            if(tof)cout<<"Unordered\n";
            else cout<<"Ordered\n";
        }
    }
}
