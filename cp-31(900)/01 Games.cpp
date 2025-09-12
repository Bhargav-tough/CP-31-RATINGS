#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int cnt1 = 0;
        int cnt0 = 0;
        for (auto i : s)
        {
            if (i == '1')
            {
                cnt1++;
            }
            else
            {
                cnt0++;
            }
        }
        
        int ans=min(cnt0,cnt1);
        if(ans%2==0){
            cout<<"NET"<<endl;
        }
        else{
            cout<<"DA"<<endl;
        }
    }
    return 0;
}