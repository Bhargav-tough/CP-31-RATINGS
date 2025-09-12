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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<ll> b;
        vector<ll> c;
        int mini = *min_element(a.begin(), a.end());
        bool equal = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != mini)
            {
                equal = false;
                break;
            }
        }
        if (equal)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] == mini)
                {
                    b.push_back(a[i]);
                    a[i] = -1;
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (a[i] != -1)
                {
                    c.push_back(a[i]);
                }
            }
            cout << b.size() << " " << c.size() << endl;
            for (auto i : b)
            {
                cout << i << " ";
            }
            cout << endl;
            for (auto i : c)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}
