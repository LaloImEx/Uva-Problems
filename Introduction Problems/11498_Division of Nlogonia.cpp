#include <iostream>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() { fastio

    int tc, n, m, x, y;
    bool tof = true;
    while(1)
    {        
        cin>>tc; if(tc == 0)return 0;        
        cin>>n>>m;        
        while(tc--)
        {                     
            cin>>x>>y;            
            if(x == n || y == m && tof) cout<<"divisa"<<"\n", tof = false;

            if(x > n && y > m && tof)cout<<"NE"<<"\n", tof = false;

            if(x < n && y > m && tof)cout<<"NO"<<"\n", tof = false;

            if(x < n && y < m && tof)cout<<"SO"<<"\n", tof = false;

            if(x > n && y < m && tof)cout<<"SE"<<"\n", tof = false;               
            tof = true;    
        }                
        
    }

}
