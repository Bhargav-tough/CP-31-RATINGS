#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

bool isSubstring(const string& l, const string& s) {
    int n = l.size();
    int m = s.size();
    for (int i = 0; i <= n - m; i++) {
        bool match = true;
        for (int j = 0; j < m; j++) {
            if (l[i + j] != s[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return true;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

    
        if (isSubstring(x, s)) {
            cout << 0 << endl;
            continue;
        }

        string l = x;
        int count = 0;

        while (l.size() <= 2 * n + m) {  
            count++;
            l += l;  
            if (isSubstring(l, s)) {
                cout << count << endl;
                break;
            }
        }

    
        if (l.size() > 2 * n + m && !isSubstring(l, s)) {
            cout << -1 << endl;
        }
    }

    return 0;
}
