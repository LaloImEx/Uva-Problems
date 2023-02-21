#include <iostream>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main() { fastio

    int tc, num_walls, wallheight, hj = 0, actualwall, dif, lj = 0, Ncase = 0;
    cin>>tc;
    while(tc--)
    {        
        cin>>num_walls>>actualwall;
        for(int o = 0; o < num_walls-1; o++)
        {        
            cin>>wallheight;
            dif = actualwall - wallheight;
            if(dif > 0) lj++;
            else if( dif != 0) hj++;
            actualwall = wallheight;
        }
        Ncase++;
        cout<<"Case "<<Ncase<<": "<<hj<<" "<<lj<<"\n";
        lj = 0, hj = 0;
    }
    
}
