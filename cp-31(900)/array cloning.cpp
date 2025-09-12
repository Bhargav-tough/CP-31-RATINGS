#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        vector<int> v(n);
        int maxi = -1e9;
        map<int, int> map;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            map[v[i]]++;
            maxi = max(maxi, map[v[i]]);
        }
        
        if (maxi == n)
        {
            cout << "0" << endl;
            continue;
        }
        
        int res = n - maxi;
        int opra = 0;
        int count = maxi;
        while (res > 0)
        {
            opra++;
            opra += res > count ? count : res;
            res -= count;
            count *= 2;
        }
        
        cout << opra << endl;
    }
    return 0;
}
