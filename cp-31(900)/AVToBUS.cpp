#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

signed main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;
        if(n%2==0&&n>3){
            ll mini = ceil((double)n / 6);  
            ll maxi=n/4;
            cout<<mini<<" "<<maxi<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}