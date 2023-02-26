#include <iostream>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() { fastio    
    int rows,colum,t, res = 0, diagonals;    
    string line;
    string dr = "\\";
    while(cin>>rows>>colum)
    {    
        getline(cin, line);
        t = rows;
        while(t--)
        {
            diagonals = 0;            
            getline(cin, line);            
            for(int I = 0; I < line.length(); I++)
            {                               
                if(line[I] == '/' || line[I] == dr[0]) diagonals++; 
                if(diagonals%2 == 1 && line[I] == '.')res++;
            }                      
            res += (diagonals/2);
        }              
        cout<<res<<"\n";
        res = 0;
    }
}
