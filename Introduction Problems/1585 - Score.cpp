#include <iostream>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() { fastio
    int tc, i=1, res=0;
    string line;
    cin>>tc;
    while(tc--)
    {   
        res = 0;
        cin>>line;
        for(int d = 0; d < line.length(); d++)
        {
            if(line[d] == 'O') res += i, i++;
            else i = 1;
        }
        cout<<res<<"\n", i = 1;    
    }
}
