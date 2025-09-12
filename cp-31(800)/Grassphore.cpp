#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n';

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll x,k;
        cin>>x>>k;
        if(x%k==0){
            cout<<2<<endl;
            cout<<1<<" "<<x-1<<endl;;
        }else{
            cout<<1<<endl;
            cout<<x<<endl;
        }
    }
}