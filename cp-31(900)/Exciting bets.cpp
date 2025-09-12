#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << 0 << " " << 0 << endl;
            continue;
        }

        ll d = abs(a - b);
        ll rem = a % d;
        ll moves = min(rem, d - rem);
        cout << d << " " << moves << endl;
    }
    return 0;
}
