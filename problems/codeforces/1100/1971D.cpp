#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int res = 0;
        int minus_if_zero_one = 0;
       for (int i = 0; i + 1 < (int) s.size(); i++) {
            if (s[i] != s[i + 1]) {
                res++;
            }
            if (s[i] == '0' && s[i + 1] == '1') {
                minus_if_zero_one = 1;
            }
        }
        cout << res + 1 - minus_if_zero_one << endl;
    }
}
