#include <iostream>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() { fastio
    int sum;
    string line;    
    while(cin>>line)
    {
        if(line == "0") return 0;
        sum = 10;
        while(sum > 9){
            sum = 0;
            for(int n = 0; n < line.length(); n++)sum += int(line[n] - '0');
            line = to_string(sum);
        }
        cout<<sum<<"\n";
    }
    
}
