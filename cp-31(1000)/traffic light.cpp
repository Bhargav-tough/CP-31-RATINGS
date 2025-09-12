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
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        s+=s;
        n*=2;
        
        if (c == 'g') {
            cout << 0 << endl;
            continue;
        }
        
        int last=-1;
        int res=INT_MIN;
        
        for(int i=n-1;i>=0;i--){
            if(s[i]=='g'){
                last=i;
            }
            if(s[i]==c){
                res=max(res,last-i);
            }
        }
        
        cout << res << endl;
    }
    
    return 0;
}