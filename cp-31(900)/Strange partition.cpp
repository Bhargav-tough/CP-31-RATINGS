#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        ll maxi = 0;
        for (ll i = 0; i < n; i++) {
            maxi += (a[i] + x - 1) / x;
        }
        
        sort(a.begin(), a.end());
        
        ll mini = 0;
        for (ll i = 0; i < n; i++) {
            mini += a[i];
        }
        mini=(mini+x-1)/x;
        
        cout << mini << " " << maxi << endl;
    }
    return 0;
}