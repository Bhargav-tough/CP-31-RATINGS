#include <bits/stdc++.h>
using namespace std;

int main() {
    long t;
    cin >> t;
    while (t--) {
        long n, a, b;
        cin >> n >> a >> b;
        cout << ((a == n && b == n) | (a + b  <= n-2) ? "Yes" : "No") << endl;
    }
}