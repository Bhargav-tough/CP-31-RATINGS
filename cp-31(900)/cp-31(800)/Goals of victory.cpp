#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n-1);
        for (int i = 0; i < n-1; i++)
            cin >> a[i];
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < n-1; i++)
        {
            if (a[i] < 0)
            {
                sum1 += abs(a[i]);
            }
            else
            {
                sum2 += a[i];
            }
        }
        cout << sum1 - sum2 << endl;
    }
    return 0;
}