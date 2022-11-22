#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    int m, n, r, in, si = 0,ns = 0;
    
    while(cin >> m >> n)
    {   
        cout << n << " " << m << "\n";
        ns = 0;
        vector<vector<int>> v; 
        v.assign(m, vector<int>());
        
        for(int f = 0; f < m; f++)
        {
            v[f].assign(n,0);
        }      
        for(int x = 0; x < m; x++)
        {
            int nms[n] = {0};    
            cin>>r;

            if(r != 0)            
            {
                for(int a = 0; a < r; a++)
                {
                    cin>>in;
                    nms[in-1] = 1;
                }

                for(int l = 0; l < n; l++)
                {                    
                    if(nms[l] == 1)
                    {
                        cin>>in;
                        v[x][l] = in;
                    }                
                }                
            }
        } 

        string l1;
      
        for(int x = 0; x < n; x++)
        {
            l1 = "";
          
            for(int y = 0; y < m; y++)
            {
                if(v[y][x] != 0)
                {
                    ns += 1;
                    l1 += to_string( y + 1 );
                    if(y+1 < m)
                    {
                        l1+=" ";
                    }
                }
            }
          
            if(ns == 0)
            {
                cout<<ns;
            }
          
            else
            {
                cout<<ns<<" ";
            }
                       
            cout<<l1;
            cout<<"\n";

            for(int o = 0; o < m; o++)             
            {    
                if(v[o][x] > 0 || v[o][x] < 0)
                {
                    cout<<v[o][x];
                    if(o+1 < m)
                    {
                        cout<<" ";
                    }                    
                }
            }            
            cout<<"\n";
            ns = 0;
        }                            
    }    
}
