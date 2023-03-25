#include <iostream>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

bool prueba(int ve[], int k, int sz)
{
    int c;
    for(int i=0;i<sz-1;i++)
    {
        c = ve[i+1]-ve[i];
        if(c > k) return false;
        else if(c == k) k--;            
    }
    return true;
}

int main() { fastio
    int tc,len,L,R,m,nc=1; cin>>tc;
    while(tc-->0)
    {
        cin>>len; len+=1;
        int v[len]; v[0]=0;
        for(int i=1; i<len; i++)cin>>v[i];
        L=1, R=v[len-1];
        while(L<R)
        {
            m = L + (R-L)/2;
            if(prueba(v,m,len)) R = m;            
            else L=m+1;            
        }
        cout<<"Case "<<nc<<": "<<R<<"\n";
        nc++;
    }
}
