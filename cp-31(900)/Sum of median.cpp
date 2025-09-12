#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t,n,k,a;
    cin>>t;
    while(t--){
        vector<ll>v;
        cin>>n>>k;
        ll mul = n*k,j = 0,div = 0,sum = 0;
        div = n/2;
        for(ll i=0; i<mul; i++){
            cin>>a;
            v.push_back(a);
        }
        for(ll i=mul-1-div; i>=0; i-=div+1){
                       sum += v[i];
            j++;
            if(j == k)break;
        }
        cout<<sum<<endl;
    }
    return 0;
}