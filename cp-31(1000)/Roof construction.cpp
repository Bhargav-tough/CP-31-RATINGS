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

        int k = 1LL << (__lg(n - 1));

        for (int i = n - 1; i >= k; --i)
            cout << i << ' ';
        for (int i = 0; i < k; ++i)
            cout << i << ' ';
        cout << '\n';
    }
}
