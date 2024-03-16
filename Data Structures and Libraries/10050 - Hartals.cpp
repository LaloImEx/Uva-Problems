#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int ll;
using namespace std; 
int main(){
    int t,n,p;
    cin>>t;
    while(t--){
        cin>>n>>p;
        int arr[n+1]={0};
        int x;
        for(int i=0;i<p;i++){
            cin>>x;
            for(int j=x;j<=n;j+=x){
                arr[j]=1;                
            }                        
        }
        int ans=0;
        int vie=6,sab=7;
        for(int i=1;i<n+1;i++){         
            if(vie==i || sab==i){
                arr[i]=0;
                if(i==vie)vie+=7;
                if(i==sab)sab+=7;
            }
            if(arr[i]==1){                            
                ans++;
            }
            
        }
        cout<<ans<<"\n";
    }
}
