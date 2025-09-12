#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        map<int, int> mp;
        vector<int> v;
        int x;

        for (int i = 0; i < n; i++) {
            cin >> x;
            mp[x]++;
        }

        if (mp.size() > 2) {
            cout << "NO" << endl;
            continue;
        }

        if (mp.size() == 2) {
            for (auto it : mp) {
                v.push_back(it.second);
            }
            if (abs(v[0] - v[1]) >= 2) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
