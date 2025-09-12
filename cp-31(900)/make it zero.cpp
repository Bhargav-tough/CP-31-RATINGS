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
                int a;
                for (int i = 0; i < n; i++) {
                    cin>>a;
                }
                if (n & 1) {
                    cout<<4<<nl;
                    cout<<1<<" "<<n - 1<<nl;
                    cout<<1<<" "<<n - 1<<nl;
                    cout<<n - 1<<" "<<n<<nl;
                    cout<<n - 1<<" "<<n<<nl;
                } else {
                    cout<<2<<nl;
                    cout<<1<<" "<<n<<nl;
                    cout<<1<<" "<<n<<nl;
                }
            }
            return 0;
        }