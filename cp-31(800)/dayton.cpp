#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool val = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == k)
            {
                val = true;
                break;
            }
        }

        if (val)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}