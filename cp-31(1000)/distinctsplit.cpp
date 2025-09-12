#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        unordered_set<char> ste;
        vector<int> pre(n+1, 0);
        vector<int> suff(n+1, 0);

        for(int i=0; i<n; i++){
            ste.insert(s[i]);
            pre[i+1] = ste.size();
        }

        ste.clear();

        for(int i=n-1; i>=0; i--){
            ste.insert(s[i]);
            suff[i] = ste.size();
        }

        int ans = 0;
        for(int i=0; i<=n; i++){
            ans = max(ans, pre[i] + suff[i]);
        }
        
        cout << ans << endl;
    }
    return 0;
}