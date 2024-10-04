#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int ll;
using namespace std; 
int main(){        
    int tc,suma,c=1;
    cin>>tc;
    string number;
    while(tc--){
        cin>>number;
        suma=0;
        vector<int> vec(number.length(),0);
        for(int i=0;i<number.length();i++){
            vec[i]=number[i]-'0';       
            suma+=vec[i];
        }
        bool flag = true, turn=false;
        while(1){
            for(int j=0;j<vec.size();j++){
                if((suma-vec[j])%3==0 && vec[j]!=0){
                    suma-=vec[j];
                    vec[j]=0;
                    flag=false;
                    break;
                }                   
            }
            turn=!turn;
            if(flag==true)break;
            else flag=true;            
        }
        if(turn==false)
        cout<<"Case "<<c<<": "<<"S\n";    
        else
        cout<<"Case "<<c<<": "<<"T\n";    
        c++;
        }
}
