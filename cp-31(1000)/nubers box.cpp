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
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        int mini = INT_MAX;
        int sum = 0;
        int neg = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] < 0)
                {
                    neg++;
                }
                int abs_val = abs(a[i][j]);
                mini = min(mini, abs_val);
                sum += abs_val;
            }
        }

        if (neg % 2 == 0)
        {
            cout << sum << '\n';
        }
        else
        {
            cout << sum - 2 * mini << '\n';
        }
    }

    return 0;
}
