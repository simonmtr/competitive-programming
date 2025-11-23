#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int ones=0, zeroes=0;
        string s;
        cin >> s;
        int slen = s.length();
        for (int i = 0; i<slen; i++) {
            if (s[i] == '0') {
                zeroes++;
            } else if (s[i] == '1') {
                ones++;
            }
        }
        string res = "";
        for (int i = 0; i<slen; i++) {
            if (s[i] == '0' && ones > 0) {
                res += '1';
                ones--;
            } else if (s[i] == '1' && zeroes > 0) {
                res += '0';
                zeroes--;
            } else {
                break;
            }
        }
        int reslen = res.length();
        int needed = abs(reslen-slen);
        cout << needed << endl;
    }
}
