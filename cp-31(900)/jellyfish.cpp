#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        
        vector<ll> v(n);
        ll ans = b;

        for (ll i = 0; i < n; i++) {
            cin >> v[i];
            ans += min((ll)v[i], a - 1);  
        }
        
        cout << ans << endl;
    }

    return 0;
}
