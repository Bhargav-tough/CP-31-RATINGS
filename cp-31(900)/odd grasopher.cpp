#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll x, n;
        cin >> x >> n;

        ll result = x;
        ll sign = (x % 2 == 0) ? -1 : 1;

        switch (n % 4) {
            case 1: result += sign * n; break;
            case 2: result -= sign; break;
            case 3: result -= sign * (n + 1); break;
        }

        cout << result << '\n';
    }

    return 0;
}
