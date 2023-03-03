#include <iostream>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() { fastio
    int tc, inp, aux, n;
    string str = "", esc1 = "1 2 3 4 5", esc2 = "2 3 4 5 6";
    cin>>tc;    
    while(tc--)
    {        
        for(int x = 0; x < 5; x++)
        {
            cin>>inp;
            str += to_string(inp)+" ";
        }
        str.erase(str.length()-1);
        if(str == esc1 || str == esc2) cout<<"Y\n";
        else cout<<"N\n";
        str = "";
    }
}
