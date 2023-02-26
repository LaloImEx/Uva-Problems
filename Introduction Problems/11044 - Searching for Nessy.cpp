#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,tc, r;
    cin>>tc;
    for(int b = 0; b < tc; b++)
    {
        cin>>x>>y;
        r = (x/3)*(y/3);
        cout<<r<<"\n";
    }
}
