#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int ll;
using namespace std; 
int main() { fastio
    ll a,b;
    int tc,n;
    cin>>tc;
    while(tc--){
        cin>>n;
        set<int> numeros;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            numeros.insert(abs(a-b));
        }
        if(numeros.size()==1){
            cout<<"yes\n";
        }else{
            cout<<"no\n";
        }
        if(tc)cout<<"\n";
    }
    return 0;
}
