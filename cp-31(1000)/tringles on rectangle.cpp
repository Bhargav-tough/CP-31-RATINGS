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
        int w, h;
        cin >> w >> h;

        int k1, k2, k3, k4;
        
        cin >> k1;
        vector<int> s1(k1);
        for (int i = 0; i < k1; i++) cin >> s1[i];

        cin >> k2;
        vector<int> s2(k2);
        for (int i = 0; i < k2; i++) cin >> s2[i];

        cin >> k3;
        vector<int> s3(k3);
        for (int i = 0; i < k3; i++) cin >> s3[i];

        cin >> k4;
        vector<int> s4(k4);
        for (int i = 0; i < k4; i++) cin >> s4[i];

        int l1 = s1[k1 - 1] - s1[0];  
        int l2 = s2[k2 - 1] - s2[0];  
        int l3 = s3[k3 - 1] - s3[0];  
        int l4 = s4[k4 - 1] - s4[0];  

        int area1 = l1 * h;
        int area2 = l2 * h;

        int area3 = l3 * w;
        int area4 = l4 * w;

        int max_area = max({area1, area2, area3, area4});

        cout << max_area << '\n';
    }

    return 0;
}
