#include <iostream>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() { fastio    
    int tea, n, five = 5, c;
    while(cin>>tea)
    {
        c = 0;
        while(five--){
            cin>>n;
            if(n == tea)c++;
        }
        five = 5;
        cout<<c<<"\n";
    }
}
