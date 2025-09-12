#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int cnt = 0;
        for (int a = 0; a < k; a++)
        {
            if (s[a] == 'W') cnt++;
        }

        int res = cnt;
        int i = 0;
        int j = k;

        while (j < n)
        {
            if (s[i] == 'W') cnt--;
            if (s[j] == 'W') cnt++;
            res = min(res, cnt);
            i++;
            j++;
        }

        cout << res << endl;
    }
    return 0;
}
