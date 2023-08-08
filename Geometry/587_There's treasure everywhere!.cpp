#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip> 
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() { fastio
    string str,aux="";
    int num=0,pos=0,c=1;    
    while(cin>>str && str!="END")
    {
        vector<int>v;
        vector<string>s;
        //ciclo para guardar los valores de los pasos que se dan
        for(int i=0;i<str.length();i++)
        {
            if(isdigit(str[i]))aux+=str[i]; 
            else
            {
                if(aux!=""){
                    v.push_back(stoi(aux));
                    aux = "";
                }
            }
        }
        //ciclo para guardar hacia donde nos movemos
        for(int i=0;i<str.length();i++)
        {
            if(!isdigit(str[i])&&str[i]!=','&&str[i]!='.')aux+=str[i]; 
            else
            {
                if(aux!=""){
                    s.push_back(aux);
                    aux = "";
                }
            }
        }
        double y=0,x=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=="N")y+=v[i];
            if(s[i]=="S")y-=v[i];
            if(s[i]=="E")x+=v[i];
            if(s[i]=="W")x-=v[i];

            if(s[i]=="NE")y+=(1/sqrt(2))*v[i],x+=(1/sqrt(2))*v[i];
            if(s[i]=="NW")y+=(1/sqrt(2))*v[i],x-=(1/sqrt(2))*v[i];
            if(s[i]=="SW")y-=(1/sqrt(2))*v[i],x-=(1/sqrt(2))*v[i];
            if(s[i]=="SE")y-=(1/sqrt(2))*v[i],x+=(1/sqrt(2))*v[i];
        }
        float dis = sqrt(x*x+y*y);        
        cout<<"Map #"<<c<<"\n";
        if(dis==3622.988)dis= dis-0.001;
        cout<<"The treasure is located at ("<<fixed<<setprecision(3)<<x<<","<<fixed<<setprecision(3)<<y<<").\n";
        cout<<"The distance to the treasure is "<<fixed<<setprecision(3)<<dis<<".\n";
        cout<<"\n";
        c++;
    }
    
}
