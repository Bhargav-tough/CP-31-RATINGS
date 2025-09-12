#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n';

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (c % 2 != 0 && a == b) {
            cout << "First" << endl;
        } else if (a > b) {
            cout << "First" << endl;
        } else {
            cout << "Second" << endl;
        }
    }
    
    return 0;
}