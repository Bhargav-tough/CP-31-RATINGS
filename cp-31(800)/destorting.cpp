#include <bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool sorted = true;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                sorted = false;
                break;
            }
        }

        if (!sorted) {
            cout << "0" << endl;
        } else {
            int mini = INT_MAX;

            for (int i = 0; i < n - 1; i++) {
                mini = min(mini, abs(a[i] - a[i + 1]));
            }

            if (mini == 0) {
                cout << "1" << endl;
            } else {
                
                cout << (mini / 2)+1 << endl;
            }
        }
    }

    return 0;
}
