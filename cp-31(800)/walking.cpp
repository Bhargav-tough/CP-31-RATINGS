#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll x1, y1, x2, y2, moves = 0;
        cin >> x1 >> y1 >> x2 >> y2;

        if (x1 == x2 && y1 == y2) {
            cout << 0 << endl;
            continue;
        }

        if (y2 < y1) {
            cout << -1 << endl;
            continue;
        }

        while (y1 != y2) {
            y1++;
            x1++;
            moves++;
        }

        if (x1 < x2) {
            cout << -1 << endl;
            continue;
        }

        while (x1 != x2) {
            x1--;
            moves++;
        }

        cout << moves << endl;
    }

    return 0;
}
