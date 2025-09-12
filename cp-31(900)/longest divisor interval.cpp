#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

signed main() {
    int t;
    cin >> t;
    
    while (t--) {
        
        ll n;
        cin>>n;
        ll cnt(1);
        for(ll p = 2; n % p == 0 && p <= n; p++){++cnt;}
        cout<<cnt<<endl;
    }

}