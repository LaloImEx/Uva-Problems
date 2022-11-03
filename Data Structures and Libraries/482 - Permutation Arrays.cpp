#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t, c = 0, x = 0, k = 0;
   double inp;
   string z;
   char dat = '.';
   vector<int> vorder;
   vector<vector<string>> vnumbers;
  
   cin >> t;  

   for (int xxx = 0; xxx < t; xxx++)
   {
      vnumbers.assign(5000, vector<string>());
      while (x == 0)
      {
         cin >> z;
         size_t found = z.find(dat);

         if (found != z.npos || c < 0)
         {
            x = 1;
         }
         else
         {
            vorder.push_back(stoi(z));
         }
      }

      x = 1;
      c = 0;
      k = vorder.size();
     
      vnumbers[vorder[0] - 1].push_back(z);
     
      while (x < k)
      {
         cin >> z;
         vnumbers[vorder[x] - 1].push_back(z);
         x++;
      }
     
      while (c < k)
      {
         cout << vnumbers[c][0] << "\n";
         c++;
      }

      cout<<"\n";      
      vorder.clear();
      x = 0;
   }
}
