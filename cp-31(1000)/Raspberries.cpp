#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

int round(int a, int b) {
    if(a < b) return 1;
    if(a % b) return 1 + a / b;
    return a / b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vi a(n);
        int ev = 0;
        
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            if(a[i] % 2 == 0) ++ev;
        }
        
        int ans = INT_MAX;
        for(int i = 0; i < n; ++i) {
            ans = min(ans, round(a[i], k) * k - a[i]);
        }
        
        if(k == 4) {
            if(ev >= 2) ans = 0;
            else if(ev == 1) ans = min(ans, 1);
            else ans = min(ans, 2);
        }
        
        cout << ans << "\n";
    }
    return 0;
}