#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++) {
            mp[a[i]].push_back(i);
        }

        int val = 0;
        vector<int> res(n + 1);
        res[0] = 0;
        
        int pos = 1;
        
        for (auto it = mp.rbegin(); it != mp.rend(); it++) {
            int cnt = it->first;
            vector<int>& indices = it->second;
            
            for (int z : indices) {
                int dist = (pos - 1) / 2 + 1;
                val += cnt * 2 * dist;
                
                if ((pos - 1) % 2 == 0) {
                    res[z + 1] = dist;
                } else {
                    res[z + 1] = -dist;
                }
                pos++;
            }
        }

        cout << val << '\n';
        for (int i = 0; i <= n; i++) {
            cout << res[i];
            if (i < n) cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}