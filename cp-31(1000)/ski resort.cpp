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
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] = (a[i] <= q) ? 1 : 0;
        }
        int cnt1 = 0;
        int way = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                cnt1++;
            }
            else
            {
                if (cnt1 >= k)
                {
                    int l = cnt1 - k + 1;
                    way += (l * (l + 1)) / 2;
                }
                cnt1 = 0;
            }
        }
        if (cnt1 >= k)
        {
            int l = cnt1 - k + 1;
            way += (l * (l + 1)) / 2;
        }
        cout << way << endl;
    }
    return 0;
}