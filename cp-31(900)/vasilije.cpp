#include <iostream>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        ll n, k, x;
        cin >> n >> k >> x;
        
        ll low = (k * (k + 1)) / 2;
        ll high = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;
        
        if (x >= low && x <= high)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
