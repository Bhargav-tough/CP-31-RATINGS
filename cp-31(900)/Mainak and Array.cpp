#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

signed main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        int res=0;
        for (int i=0;i<n-1;i++){
            res=max(res,a[n-1]-a[i]);
        }
        for (int i=1;i<n;i++){
            res=max(res,a[i]-a[0]);
        }
        for (int i=0;i<n-1;i++){
            res=max(res,a[i]-a[i+1]);
        }
        cout<<res<<endl;
        }
    }
