#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll mini = LLONG_MAX;
        ll mini2 = LLONG_MAX;
        ll sum = 0;
        while (n--) {
            int m;
            cin >> m;
            vector<long long> a(m);
            for (int i = 0; i < m; i++) {
                cin >> a[i];
            }
            sort(a.begin(), a.end());
            
            mini = min(mini, a[0]);
            mini2 = min(mini2, a[1]);
            sum += a[1];
        }
        cout << (sum + mini) - mini2 << endl;
    }
    return 0;
}