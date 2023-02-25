#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, st, r = 0;
    cin>>t;
    
    for(int o = 0; o < t; o++)
    {
        cin>>st;
        int v[st] = {0};
        int n = sizeof(v) / sizeof(v[0]);

        for(int xd = 0; xd < st; xd++)
        {
            cin>>v[xd];
        }

        sort(v, v + n);

        for(int p = 0; p < st-1; p++)        
        {
           r += abs(v[p]-v[p+1]);
        }

        cout<<r*2<<"\n";
        r = 0;
    }
}
