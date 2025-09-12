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
        string k=to_string(n);
        ll y=k.size();
        ll ans=(n/pow(10,y-1))+(y-1)*9;
        cout << ans << endl;

    }
}