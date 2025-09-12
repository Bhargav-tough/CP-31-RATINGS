#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k, b, s;
        cin >> n >> k >> b >> s;
        vector<int> a(n, 0);
        if (s < b * k || s > b * k + (k - 1) * n) {
            cout << -1 << endl;
            continue;
        }
        int lef = s - b * k;
        a[n-1] = b * k;
        for (int i = 0; i < n && lef > 0; i++) {
            int sum = min(lef, k - 1);
            a[i] += sum;
            lef -= sum;
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}