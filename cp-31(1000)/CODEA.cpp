#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 998244353;
const int MAXN = 1e5 + 5;

vector<int> p1(MAXN);

void pre() {
    p1[0] = 1;
    for (int i = 1; i < MAXN; i++) {
        p1[i] = (p1[i - 1] * 2) % MOD;
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    pre();
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> p(n), q(n);
        for (int i = 0; i < n; i++) cin >> p[i];
        for (int i = 0; i < n; i++) cin >> q[i];
        
        vector<int> r(n);
        
        for (int i = 0; i < n; i++) {
            int maxi = 0;
            for (int j = 0; j <= i; j++) {
                int val = (p1[p[j]] + p1[q[i-j]]) % MOD;
                maxi = max(maxi, val);
            }
            r[i] = maxi;
        }
        
        for (int i = 0; i < n; i++) {
            cout << r[i] << " ";
        }
        cout << '\n';
    }
    
    return 0;
}