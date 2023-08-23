#include <iostream>
#include <vector>
#include <algorithm>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() { fastio
    int inp,u=0;
    vector<int> v;
    while(cin>>inp){        
        v.push_back(inp);    
        sort(v.begin(),v.end());
        if(v.size()==1)cout<<"1\n";        
        else{
            if(v.size()%2==0){
                u = v[v.size()/2]+v[v.size()/2-1];
                cout<<u/2<<"\n";
            }else{
                cout<<v[(v.size()/2)]<<"\n";
            }
        }
    }
}
