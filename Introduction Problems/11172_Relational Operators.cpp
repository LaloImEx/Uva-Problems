#include <stdio.h>
#include <iostream>
#include "string"
#include "stdlib.h"
using namespace std;

int main()
{
    int c,a,b;
    cin>>c;

    for(int x=0;x<c;x++)
    {
        cin>>a>>b;
        
        if(a<b)
        {
            cout<<"<\n";        
        }

        if(a>b)
        {
            cout<<">\n";
        }

        if(a==b)
        {
            cout<<"=\n";
        }
    }
