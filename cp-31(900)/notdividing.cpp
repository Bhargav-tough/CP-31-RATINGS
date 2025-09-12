#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

signed main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 1) {
                a[i] += 1;
            }
        }
        
        for (int i = 0; i < n - 1; i++) {
            
            
            if (a[i+1] % a[i] == 0) {
                a[i+1] += 1;
            }
        }
        
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << nl;
    }
    
    return 0;
}