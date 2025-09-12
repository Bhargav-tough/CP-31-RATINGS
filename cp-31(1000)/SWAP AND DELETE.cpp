#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int cnt0 = count(s.begin(), s.end(), '0');
        int cnt1 = s.size() - cnt0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                if (cnt1) cnt1--;
                else break;
            } else {
                if (cnt0) cnt0--;
                else break;
            }
        }
        cout << cnt0 + cnt1 << '\n';
    }
    return 0;
}
