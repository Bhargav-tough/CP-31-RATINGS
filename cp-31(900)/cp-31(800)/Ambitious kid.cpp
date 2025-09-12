#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
signed  main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
         mini=min(mini,abs(a[i]));
        }
        cout<<mini<<endl;
    }
}