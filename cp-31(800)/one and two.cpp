#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count=0;
        int res;
        for (int i = 0; i < n; i++){
            if(a[i]==2)
            {
                count++;
                }
        }
                if(count==0){
                    res=1;
                }
                else if(count%2==1){
                    res=-1;
                }
                else{
                    int count2=0;
                    for(int i=0;i<n;i++){
                       if(a[i]==2){
                        count2++;
                       }
                       if(count2==count/2){
                        res=i+1;
                        break;
                       }
                    }
                }
                cout << res << endl;
        }
        return 0;
    }
