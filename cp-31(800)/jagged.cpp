#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

const int MAX = 1e6;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
    

        while (true) {
            bool possible = false;
            for (int i = 1; i < n - 1; i++) {
                if (a[i-1] < a[i] && a[i] > a[i+1]) {
                    swap(a[i], a[i+1]);
                    possible = true;
                }
            }
            if (!possible) break;
        }

        bool valid = true;
        for (int i = 1; i < n; ++i) {
            if (a[i] < a[i-1]) {
                valid = false;
                break;
            }
        }

        if (valid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
