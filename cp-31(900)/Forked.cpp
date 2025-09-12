#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

signed main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;

        set<pair<int, int>> kingmv, qunmv;

        for (int dx : {a, -a}) {
            for (int dy : {b, -b}) {
                kingmv.insert({xk + dx, yk + dy});
                kingmv.insert({xk + dy, yk + dx});
            }
        }

        for (int dx : {a, -a}) {
            for (int dy : {b, -b}) {
                qunmv.insert({xq + dx, yq + dy});
                qunmv.insert({xq + dy, yq + dx});
            }
        }

        int cnt = 0;
        for (const auto& pos : kingmv) {
            if (qunmv.count(pos)) {
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
