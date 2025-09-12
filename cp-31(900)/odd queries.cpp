#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'



#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

signed main() {
    fio;
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        
        int psum[n + 10] = {0};
        for (int i = 1; i <= n; i++) {
            psum[i] = psum[i - 1] + arr[i - 1];
        }

        int l, r, k;
        while (q--) {
            cin >> l >> r >> k;
            bool ok = false;
            int a = psum[r] - psum[l - 1];
            k = k * (r - l + 1) + sum - a;
            if (k & 1) ok = true;
            cout << (ok ? "YES" : "NO") << '\n';
        }
    }
    return 0;
}
