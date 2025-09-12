#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

signed main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
    

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }
        
        int cnt = 1, val = 0;
        sort(a.begin(), a.end());
        
        for (int i = 0; i < n - 1; i++) {
            if (a[i + 1] - a[i] <= k) {
                cnt++;
            } else {
                cnt = 1;
            }
            val = max(val, cnt);
        }
        
        cout << n - val << endl;
    }
    
    return 0;
}
