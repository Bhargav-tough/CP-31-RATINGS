#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

const int MAX = 1e6;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin>>s;
        int count = 0;
        bool value = false;
        
      for(int i=0;i<n;i++)
        {
            if (s[i] == '.')
            {
                count++;
                
            }
            if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
            {
                value = true;
                break;
            }
            
        }
        if (value)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << count << endl;
        }
    }
}