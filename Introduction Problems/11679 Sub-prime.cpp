#include <iostream>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
int main(){ fastio
    int B, N, banco, deuda, bap;
    while(cin>>B>>N)
    {
        if(B+N==0)return 0;
        int rsv[B];
        for(int i=0; i < B; i++)cin>>rsv[i];
        for(int i=0; i < N; i++)
        {
            cin>>banco>>bap>>deuda;
            banco--;
            bap--;
            rsv[bap]+=deuda;
            rsv[banco]=rsv[banco]-deuda;
        }
        bool yon=true;
        for(int i=0;i<B;i++)
        {
            if(rsv[i]<0)
            { 
                cout<<"N\n";
                yon = false;
                break;
            }
        }
        if(yon)cout<<"S\n";   
    }
}
