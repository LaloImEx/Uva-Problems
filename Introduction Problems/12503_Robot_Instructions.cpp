#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int ll;
using namespace std; 
int main(){
    int tc,n;
    string s;
    cin>>tc;    
    while(tc--){
        cin>>n;
        int ans=0,z; 
        char steps[n]={' '};
        for(int i=0;i<n;i++){
            cin>>s;
            if(s[0]=='L'){
                steps[i]='L';                
                ans--;
            }
            if(s[0]=='R'){
                steps[i]='R';            
                ans++;
            }
            if(s[0]=='S'){
                cin>>s;     
                cin>>z;                
                z = z-1;
                if(steps[z]=='L'){
                    steps[i]='L';                    
                    ans--;
                }
                if(steps[z]=='R'){                    
                    steps[i]='R';
                    ans++;
                }
            }            
        } 
        cout<<ans<<"\n"; 
    }
}
