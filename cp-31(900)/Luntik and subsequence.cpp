#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int cnt1=0;
        int cnt0=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                cnt1++;
            }
            if(a[i]==0){
                cnt0++;
            }
        }
        
        cout<<(1<<cnt0)*cnt1<<endl;
    }
}
        ll n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll cnt1=0;
        ll cnt0=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                cnt1++;
            }
            if(a[i]==0){
                cnt0++;
            }
        
        }
        cout<<(ll)((ll)1<<cnt0)*cnt1<<endl;
    
    }
}