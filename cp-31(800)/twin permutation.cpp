#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<ll> k;
        for (ll i = 0; i < n; i++) {
            ll val = n + 1 - a[i];
            k.push_back(val);
        }

        for (ll i = 0; i < n; i++) {
            cout << k[i] << " ";
        }
        cout << nline;
    }

    return 0;
}
