#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, r;
        cin >> n >> r;

        vector<pair<ll, ll>> a(n);
        for (ll i = 0; i < n; i++) cin >> a[i].second;
        for (ll i = 0; i < n; i++) cin >> a[i].first;

        sort(a.begin(), a.end());

        ll rem = n - 1, total = r;
        for (ll i = 0; i < n; i++) {
            if (a[i].first >= r) break;
            ll cnt = min(rem, a[i].second);
            total += cnt * a[i].first;
            rem -= cnt;
        }

        total += r * rem;
        cout << total << endl;
    }
}
