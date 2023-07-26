#include <iostream>
#include <algorithm>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() { fastio
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a+b+c == 0)return 0;
        if(a==b && c==b)cout<<"wrong\n";
        else{
            if(a > b && a > c)
            {
                if(b*b+c*c == a*a)cout<<"right\n";
                else cout<<"wrong\n";
            }else{
                if(b > c && b > c)
                {
                if(a*a+c*c == b*b)cout<<"right\n";
                else cout<<"wrong\n";
                }            
                else
                {
                if(a*a+b*b == c*c)cout<<"right\n";
                else cout<<"wrong\n";
                }
            }
        }
    }
}
