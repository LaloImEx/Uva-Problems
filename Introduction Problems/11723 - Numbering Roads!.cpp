#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int N, R, LIM=0, C=0, OP = 1, C2;
                                
    cin>>N; cin>>R;
  
    while(N > 0||R>>0)
    {
            LIM = (R*26)+R;
            
            if(LIM<N) { cout<<"Case "<<OP++<<": "<<"impossible\n"; }
      
            else{
                    C = N/R;
                    C2 = N%R;              
                    if(C2==0)
                    {
                        C = C-1;
                        cout<<"Case "<<OP++<<": "<<C<<"\n"; 
                    }  

                    else
                    {
                      cout<<"Case "<<OP++<<": "<<C<<"\n";
                    }
                } 

            cin>>N; cin>>R;           
    }

}
