#include <iostream>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() { fastio
    int tc, inp, nset = 1, n = 13, des;
    cin>>tc;
    while(tc--){
        des = 1;
        for(int o = 0; o < n; o++)
        {
            cin>>inp;            
            if(inp == 0)des = 0;
        }
        if(des)cout<<"Set #"<<nset<<": "<<"Yes\n";
        else cout<<"Set #"<<nset<<": "<<"No\n"; 
        nset++;      
    }
}
