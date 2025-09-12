#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, x, c = 0;
        bool seg = false;

        cin >> n;
        while (n--) {
            cin >> x;
            if (x) {
                seg = true;
            } else if (seg) {
                ++c;
                seg = false;
            }
        }

        if (seg) {
            ++c;
        }

        cout << min(c, 2) << '\n';
    }

    return 0;
}
