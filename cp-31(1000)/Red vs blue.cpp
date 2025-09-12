#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, r, b;
        cin >> n >> r >> b;
        
        vector<char> res(n);
        for (int i = 0; i < n; i++) {
            res[i] = 'R';
        }
        
        int val = r / (b + 1);
        int extra = r % (b + 1);
        
        int pos = 0;
        for (int i = 0; i < b; i++) {
            pos += val;
            if (i < extra) {
                pos++;
            }
            res[pos] = 'B';
            pos++;
        }
        
        for (int i = 0; i < n; i++) {
            cout << res[i];
        }
        cout << endl;
    }
    
    return 0;
}