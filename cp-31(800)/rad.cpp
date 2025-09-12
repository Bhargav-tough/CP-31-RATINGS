#include <bits/stdc++.h>
using namespace std;

string decryptPassword(string s) {
    int n = s.size();
    int i = 0;
    while (i < n && isdigit(s[i]) && s[i] != '0') {
        i++;
    }
    int k = i;
    for (int j = 0; j < n; ++j) {
        if (s[j] == '0') {
            s[j] = s[k - 1];
            k--;
        }
    }
    for (int j = i; j < n; ++j) {
        if (s[j] == '*') {
            swap(s[j - 1], s[j - 2]);
        }
    }
    string result = "";
    for (int j = i; j < n; ++j) {
        if (s[j] != '*') {
            result += s[j];
        }
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    
    string result = decryptPassword(s);
    cout << result << '\n';

    return 0;
}
