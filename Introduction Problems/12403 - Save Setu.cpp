#include <iostream>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() { fastio
    int tc, inp, all = 0;
    string dor;
    cin>>tc;
    while(tc--)
    {
        cin>>dor;
        if(dor == "donate") cin>>inp, all+=inp;
        else cout<<all<<"\n";
    }
}
