#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

const int MAX=1e6;

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(NULL);
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        if (k == 1) {
            if (is_sorted(a.begin(), a.end())) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
