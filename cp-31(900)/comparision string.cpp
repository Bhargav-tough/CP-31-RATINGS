#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

signed main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin>>s;
        int cnt=1,val=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==s[i+1]){
                cnt++;
        }
        else{
            cnt=1;
        }
        val=max(cnt,val);

    }
    cout<<val+1<<endl;
}
}