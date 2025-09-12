#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll xori = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            xori ^= a[i];
        }
        
        if (xori == 0)
        {
            cout << 0 << nline;
        }
        else
        {
            if (n % 2 == 1)
            {
                cout << xori << nline;
            }
            else
            {
                cout << -1 << nline;
            }
        }
    }

    return 0;
}
