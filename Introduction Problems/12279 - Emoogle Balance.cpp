#include <iostream>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() { fastio

    int n, tc, sum, negs, posi, nc = 1;
    while(cin>>tc && tc > 0)
    {
        sum = 0;
        for(int x = 0; x < tc; x++){
            cin>>n;
            if(n > 0)sum++;
            else sum--;
        }
        cout<<"Case "<<nc<<": "<<sum<<"\n";
        nc++;
    }    
}
