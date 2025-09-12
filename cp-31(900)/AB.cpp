#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
   int t;
   cin >> t;
   
   while (t--) {
       string s;
       cin >> s;
       int cnab = 0;
       int cnba = 0;
       
       for (int i = 0; i < s.size() - 1; i++) {
           if (s[i] == 'a' && s[i + 1] == 'b') {
               cnab++;
           }
           if (s[i] == 'b' && s[i + 1] == 'a') {
               cnba++;
           }
       }
       
       if (cnba > cnab) {
           string k = s;
           for (int i = 0; i < k.size(); i++) {
               if (k[i] == 'b' && cnba > cnab) {
                   k[i] = 'a';
                   cnba--;
               }
           }
           cout << k << endl;
       }
       else if (cnba < cnab) {
           string k = s;
           for (int i = 0; i < k.size(); i++) {
               if (k[i] == 'a' && cnab > cnba) {
                   k[i] = 'b';
                   cnab--;
               }
           }
           cout << k << endl;
       }
       else {
           cout << s << endl;
       }
   }
   
   return 0;
}