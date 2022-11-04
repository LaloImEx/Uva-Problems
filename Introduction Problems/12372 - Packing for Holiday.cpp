#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, t;
    cin >> t;
    for (int x = 0; x < t; x++)
    {
        cin >> a >> b >> c;
        if (a > 20 || b > 20 || c > 20)
        {
            cout << "Case " << x + 1 << ": bad\n";
        }
        if (a <= 20 && b <= 20 && c <= 20)
        {
            cout << "Case " << x + 1 << ": good\n";
        }
    }
}
