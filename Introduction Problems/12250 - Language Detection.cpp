#include <bits/stdc++.h>
using namespace std;
int main()
{
    string en="HELLO",es="HOLA",ge="HALLO",fr="BONJOUR",it="CIAO",ru="ZDRAVSTVUJTE";
    string t,ter="#";
    int x=1,s=0;
    cin>>t;
    while(t != ter)
    {
        if(t.length()>14)

        {

        }
        else{

        if(t==es)
        {
            cout<<"Case "<<x<<": SPANISH\n";
            s=1;
        }

        if(t==en)
        {
            cout<<"Case "<<x<<": ENGLISH\n";
            s=1;
        }

        if(t==ge)
        {
            cout<<"Case "<<x<<": GERMAN\n";
            s=1;
        }

        if(t==fr)
        {
            cout<<"Case "<<x<<": FRENCH\n";
            s=1;
        }

        if(t==it)
        {
            cout<<"Case "<<x<<": ITALIAN\n";
            s=1;
        }

        if(t==ru)
        {
            cout<<"Case "<<x<<": RUSSIAN\n";
            s=1;
        }

        if(s==0)
        {
            cout<<"Case "<<x<<": UNKNOWN\n";
        }

        }
        cin>>t;
        s=0;
        x++;
    }
    return 0;

}
