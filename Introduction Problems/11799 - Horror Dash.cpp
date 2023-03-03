#include <iostream>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() { fastio
    int tc, n, inp, aux, max, nc = 1;
    cin>>tc;
    while(tc--){
        cin>>n, aux = 0;        
        for(int l = 0; l < n; l++)
        {
            cin>>inp;
            if(inp > aux) max = inp, aux = inp;
        }
        cout<<"Case "<<nc<<": "<<max<<"\n";
        nc++;
    }        
}
