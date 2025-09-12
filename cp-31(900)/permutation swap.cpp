#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'


long gcd(long a, long b) {
    return (b == 0) ? a : gcd(b, a % b);
}

signed main() {
    int t;
    cin >> t;
    
    while (t--) {
        long n;
        cin >> n;
        vector<long> arr(n);
        
        for (long i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        long g = 0;
        for (long p = 1; p <= n; p++) {
            long diff = p - arr[p-1];
            diff = abs(diff);
            g = gcd(g, diff);
        }
        
        cout << g << "\n";
    }
    return 0;
}