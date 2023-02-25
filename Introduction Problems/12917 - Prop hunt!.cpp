#include <iostream>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
int main() { fastio
  
    int p,h,o;   
    while(cin>>p>>h>>o)
    {
        if(p+h > o) cout<<"Hunters win!\n";      
        else cout<<"Props win!\n";                
    }
}
