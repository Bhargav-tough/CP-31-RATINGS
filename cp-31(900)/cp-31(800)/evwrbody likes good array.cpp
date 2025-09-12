#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
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

        ll arr[n];
        for (ll i = 0; i < n; i++) 
            cin >> arr[i];

        ll count = 0;

        for (ll i = 0; i < n - 1; i++)
        {
            if ((arr[i] & 1) == (arr[i + 1] & 1))
                count++;
        }

        cout << count << nline;
    }

    return 0;
}
