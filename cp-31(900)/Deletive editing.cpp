#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

signed main() {
    int T;
    cin >> T;

    while (T--) {
        string s, t;
        cin >> s >> t;

        map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        map<char, int> mt;
        for (int i = 0; i < t.size(); i++) {
            mt[t[i]]++;
        }

        string x = "", ans = "";

        for (char c : s) {
            if (mt.count(c)) x += c;
        }

        for (char c : x) {
            if (mp[c] > mt[c]) mp[c]--;
            else if (mt.count(c)) ans += c;
        }

        if (ans == t) cout << "YES" << nl;
        else cout << "NO" << nl;
    }

    return 0;
}
