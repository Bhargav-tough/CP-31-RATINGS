#include <bits/stdc++.h>
using namespace std;

bool isFair(long long n) {
    long long num = n;
    while (num) {
        int digit = num % 10;
        if (digit != 0 && n % digit != 0)
            return false;
        num /= 10;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        while (!isFair(n)) ++n;
        cout << n << '\n';
    }

    return 0;
}
