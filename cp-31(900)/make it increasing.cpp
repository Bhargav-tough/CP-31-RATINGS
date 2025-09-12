#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }
        
        int count = 0;
        bool val = true;
        
        for (int i = 0; i < n - 1; i++)
        {
            while (i < n - 1 && a[i] >= a[i + 1])
            {
                if (a[i] == 0) {
                    val = false;
                    break;
                }
                
                a[i] = a[i] / 2;
                count++;
                
                i = -1;
                break;
            }
            
            if (!val) {
                break;
            }
        }
        
        if (val) {
            cout << count << endl;
        } else {
            cout << "-1" << endl;
        }
    }
    return 0;
}