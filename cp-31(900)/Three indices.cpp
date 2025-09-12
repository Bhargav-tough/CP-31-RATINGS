#include <bits/stdc++.h>
using namespace std;

const int N = 1000;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        
        cin >> n;
         vector<int>a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool val = false;
        for (int i = 1; i < n - 1; i++) {
            if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
                cout << "YES" << endl;
                cout << i << " " << i + 1 << " " << i + 2 << endl;
                val = true;
                break;
            }
        }

        if (!val) {
            cout << "NO" << endl;
        }
    }

    return 0;
}
