#include <stdio.h>
#include <iostream>
#include <array>
#include <string.h>
using namespace std;

int main()
{
    string a, b; 
    int t,r=0;
    cin>>t;

    for(int c=0;c<t;c++)
    { 
        cin>>a;

            if(a=="1"||a=="4"||a=="78")
            {
                cout<<"+\n";            
                b="+\n";
            }
            else{r++; b = "+\n";}

            if(a[a.size()-1]=='5' && a[a.size()-2]=='3')
            {
                cout<<"-\n";
                b="-\n";
            }
            else{r++;b="-\n";}

            if(a[0]=='9' && a[a.size()-1]=='4')
            {
            cout<<"*\n";
            b="*\n";
            }
            else{b="*\n";r++;}

            if(a[0]=='1' && a[1]=='9' && a[2]=='0' &&  r>2)
            {
            cout<<"?\n";
            b="?\n";
            }
            else{r++;b="?\n";}

            if(r==4){cout<<b;}
            
        r=0;
    }
    return 0;
}
    
