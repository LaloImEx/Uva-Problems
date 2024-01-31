#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int ll;
using namespace std; 
int main(){
    int n, pos = 1;
    while(cin>>n&&n!=0){
        int x,all=0,o;
        int vec[n];
        o = n;
        for(int i=0;i<n;i++){
            cin>>x;
            vec[i]=x;
            all+=x;
        }
        int min = all/n, ans = 0;
        for(int i=0;i<n;i++){
            ans += max(0,vec[i]-min);
        }
        cout<<"Set #"<<pos<<"\n";
        cout<<"The minimum number of moves is "<<ans<<".\n";
        cout<<"\n";
        pos++;
    }
}
