#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        int ts = 1;
        int l = -1;
        int r = n - 1;
        int res = 0;
        while (l < r)
        {
            if (a[r] * ts <= d && l < r)
            {
                ts++;
                l++;
            }
            else
            {
                res++;
                ts = 1;
                r--;
            }
        }
        cout << res << endl;
    }
    return 0;
}