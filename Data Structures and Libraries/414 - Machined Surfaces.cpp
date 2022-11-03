#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, sz = 0, final = 0,num;
    string in;
    cin>>N;
    while(N != 0)
    {
        vector <vector<string> > Vec;
        Vec.assign(N, vector<string>());

        for(int a = 0; a<N; a++)
        //a indica la posicion de vector de vectores en la que estamos
        {
            
            stringstream st;
            for(int c=0 ; c<2 ; c++)//aqui se llenan los valores del vector
            {    
                cin>>in;
                st<<in;
                if(in.size() == 25)
                {
                    c=2;
                }
            }
            
            Vec[a].push_back(st.str());     

            if(Vec[a][0].size() > sz)
            {
            sz = Vec[a][0].size();
            }
        
        }

        for(int x = 0; x < N; x++)
        {
            num = sz - Vec[x][0].size();
            final = num + final;
        }

        cout<<final<<"\n";
        final = 0;
        sz = 0;

        cin>>N;         
    }
}

