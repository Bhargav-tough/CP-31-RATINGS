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
        
        int ones = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 1) ones++;
        }
        
        if (ones == 0 || ones == n) {
            cout << "YES" << endl;
        } else if (n == 2 && ones == 2) {
            cout << "YES" << endl;
        } else {
            bool canArrange = true;
            if (ones > (n + 1) / 2) {
                canArrange = false;
            }
            if (canArrange) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}