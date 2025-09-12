#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s = to_string(n);
        int ans = INT_MAX;
        
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '0' || s[i] == '5') {
                for (int j = i - 1; j >= 0; j--) {
                    if ((s[i] == '0' && (s[j] == '0' || s[j] == '5')) || 
                        (s[i] == '5' && (s[j] == '2' || s[j] == '7'))) {
                        
                        int res = s.size() - i - 1;  
                        res += i - j - 1;           
                        ans = min(ans, res);
                    }
                }
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}