#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>res;
        bool val=true;
        int cnt=1;
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                cnt++;
            }
            else{
                if(cnt==1){
                    val=false;
                    break;
                }
                else{
                    for(i=0;i<cnt;i++){
                        res.push_back(cnt-i);
                    }
                }
            }


        }
        if(val){    
            for(int i=0;i<n;i++){
                cout<<res[i]<<" ";
            }
            cout<<endl;
            }
            else{
                cout<<-1<<endl;
            }
            
    }
}