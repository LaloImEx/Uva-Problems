#include <cstdio>
#include <vector>  
#include <iostream>

using namespace std;

int main ()
{
	
	vector<vector<int> > vec;
    int size,cases,inp, buscador;

    while(cin>>size>>cases)
    {    
	  vec.assign(1000000, vector<int>());

	  for(int x=1; x <= size; x++)
	  {
		cin>>inp;
		vec[inp].push_back(x);
	  }

    for(int t = 0; t < cases; t++)
    {
      cin>>inp>>buscador;

      if(inp-1 < vec[buscador].size() )
      {
        cout<<vec[buscador][inp-1]<<"\n";
      }
      else{
        cout<<"0\n";
      }

    }   
      
    }
}
