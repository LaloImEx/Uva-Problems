#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int a,b,c,t,con=0,x=1;
    cin>>t;    
    while(con<t)
    { 
        cin>>a>>b>>c;

        if(a==b&&b==c)
        {
            cout<<"Case "<<x<<": "<<b<<"\n";
        }
        
        else
        {
            if((b>a&&b<c)||(b<a&&b>c))  
        {
            cout<<"Case "<<x<<": "<<b<<"\n";
        }

        if((a>b&&a<c)||(a<b&&a>c))
        {
           cout<<"Case "<<x<<": "<<a<<"\n";
        }

        if((c>a&&c<b)||(c<a&&c>b))
        {
            cout<<"Case "<<x<<": "<<c<<"\n";
        }
        }

        x++;
        con++;
    }
    return 0;
}
