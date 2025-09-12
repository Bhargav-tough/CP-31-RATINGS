#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (auto c : s)
        {
            mp[c]++;
        }
        int odd = 0;
        for (auto c : mp)
        {
            if (c.second % 2 != 0)
                odd++;
        }
        if (k < odd - 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}