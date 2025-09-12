#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

const int MAX = 1e6;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int val = 0;

        for (int i = 0; i < n - 1; i++) {
            val = max(val, abs(a[i + 1] - a[i]));
        }

        val = max(val, a[0]);
        val = max(val, 2 * (k - a[n - 1]));
        
        cout << val << endl;
    }
    return 0;
}
