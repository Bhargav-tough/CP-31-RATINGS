#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        
        ll a[n];
        ll ans = 0, cn1 = 0, cnt2 = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == -1)
                cnt2++;
            else
                cn1++;
        }

        while (!(cn1 >= cnt2 && cnt2 % 2 == 0)) {
            cnt2--;
            cn1++;
            ans++;
        }

        cout << ans << nline;
    }
    
    return 0;
}
