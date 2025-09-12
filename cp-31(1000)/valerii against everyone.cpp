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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] = pow(2, a[i]);
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        int l1 = 0;
        int l2 = 0;
        bool val = false;
        while (l1 < n)
        {
            int sum1 = a[l1];
            int sum2 = sum - sum1;
            if (sum1 != sum2)
            {
                l1++;
                sum1 += a[l1];
            }
            else
            {
                val = true;
                break;
            }
        }
        if (val)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
