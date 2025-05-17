#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s, t;
        cin >> s >> t;
        int sl = s.length(), tl = t.length();
        int gcd = __gcd(s.length(), t.length());
        string s_res = "";
        int s_i = tl/gcd;
        while (s_i--) {
            s_res += s;
        }
        string t_res = "";
        int t_i = sl/gcd;
        while (t_i--) {
            t_res += t;
        }
        if (t_res == s_res) {
            cout << s_res << endl;
        } else {
            cout << -1 << endl;
        }
    }
}
