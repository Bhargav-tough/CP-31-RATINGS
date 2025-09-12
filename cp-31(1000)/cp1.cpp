#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool val = false;

        for (int i = 1; i <= n - 2 && !val; i++) {
            char b = s[i];
            string ac = s.substr(0, i) + s.substr(i + 1);
            if (ac.find(b) != string::npos) {
                val = true;
            }
        }

        for (int i = 1; i <= n - 3 && !val; i++) {
            string b = s.substr(i, 2);
            string ac = s.substr(0, i) + s.substr(i + 2);
            if (ac.find(b) != string::npos) {
                val = true;
            }
        }

        cout << (val ? "Yes" : "No") << endl;
    }

    return 0;
}