#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> getStreaks(const vector<int>& v) {
    unordered_map<int, int> res;
    int cur = v[0], len = 1;
    for (int i = 1; i < v.size(); i++) {
        if (v[i] == cur) {
            len++;
        } else {
            res[cur] = max(res[cur], len);
            cur = v[i];
            len = 1;
        }
    }
    res[cur] = max(res[cur], len);
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        auto sa = getStreaks(a);
        auto sb = getStreaks(b);

        int ans = 0;
        unordered_set<int> vals;
        for (auto& p : sa) vals.insert(p.first);
        for (auto& p : sb) vals.insert(p.first);

        for (int x : vals) {
            int total = sa[x] + sb[x];
            ans = max(ans, total);
        }

        cout << ans << '\n';
    }

    return 0;
}
