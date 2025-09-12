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

        vector<int> res;
        bool val = true;
        int cnt = 1;
        int start = 0;

        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[i + 1]) {
                cnt++;
            } else {
                if (cnt == 1) {
                    val = false;
                    break;
                } else {
                    res.push_back(i + 1);
                    for (int j = 0; j < cnt - 1; j++) {
                        res.push_back(start + j + 1);
                    }
                    cnt = 1;
                    start = i + 1;
                }
            }
        }

        if (val) {
            if (cnt == 1) {
                val = false;
            } else {
                res.push_back(n);
                for (int j = 0; j < cnt - 1; j++) {
                    res.push_back(start + j + 1);
                }
            }
        }

        if (val) {
            for (int i = 0; i < n; i++) {
                cout << res[i] << " ";
            }
            cout << '\n';
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}
