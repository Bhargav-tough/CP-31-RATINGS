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
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        int count=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                count++;
            }
            else{
                maxi=max(maxi,count);
                count=0;
            }
        }
        maxi=max(maxi,count);
        cout<<maxi<<endl;
    }
}