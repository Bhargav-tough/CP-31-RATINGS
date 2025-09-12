#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
        ll sume=0;
        ll sumo=0;
        for(int i=0;i<n;i++){
            if(a[i]%2==0) sume+=a[i];
            else sumo+=a[i];
        }
        if(sumo%2==0||sumo==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
            }
    }
}