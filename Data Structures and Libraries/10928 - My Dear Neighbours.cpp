#include <iostream>
using namespace std;
string linea; 

int espacios(string s)
{
    int count = 1;
    for(int as = 0; as < s.length(); as++)
    {
        if(s[as] == ' ')count++;        
    }
    return count;
}

int main()
{
    int t, np, c = 0, x = 0, last= 0,asz;
    cin>>t;

    for(int ss = 0; ss<t; ss++)
    {
        cin>>np;
        int ar[np+1];
        while(x < np+1)
        {
            getline(cin, linea);        
            last = espacios(linea);
            if(last > 0){ ar[x] = last;}
            x++;
        }
        
        x = 1,c = 0;
        asz = *(&ar + 1) - ar;
        linea = "";

        while(x < asz)
        {
            for(int o = 1; o < asz; o++)
            {
                if(ar[o] == x)linea += to_string(o)+" ";
            }

            if(linea != "")x = sizeof(ar);        
            x++;
        }
        x = 0;
        linea.erase(linea.length()-1);
        cout<<linea<<"\n";   
    }
}
