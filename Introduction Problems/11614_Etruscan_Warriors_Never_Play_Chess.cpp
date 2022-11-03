#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
    double t, s;
  
    cin >> t;
    while( t-- && (cin >> s) )
    { 
      cout << long((sqrt(1+8*s)-1)/2)<<"\n"; 
    }  
    
    return 0;
}
