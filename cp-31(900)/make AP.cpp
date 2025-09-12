#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long x, y, z;
        cin >> x >> y >> z;

        bool ans = false;

        long long n1 = 2 * y - z; 
        if (n1 / x > 0 && n1 % x == 0) 
            ans = true;

        long long n2 = (x + z) / 2;
        if (n2 / y > 0 && n2 % y == 0 && (z - x) % 2 == 0)
            ans = true;

        long long n3 = 2 * y - x;
        if (n3 / z > 0 && n3 % z == 0)
            ans = true;

        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
