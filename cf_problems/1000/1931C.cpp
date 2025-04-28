#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int prefix = 0, suffix = 0;
        int pre_num = n+1, suf_num = n+1;
        bool prefound = false;
        for (int i = 0; i<n; i++) {
            int temp;
            cin >> temp;

            if (i == 0) {
                pre_num = temp;
                suf_num = temp;
            }

            if (temp == pre_num && !prefound) {
                prefix++;
            } else {
                prefound = true;
            }

            if (temp == suf_num) {
                suffix++;
            } else {
                suffix = 1;
                suf_num = temp;
            }
        }
        // cout << "suf: " << suffix << "|" << "pref: " << prefix << endl;
        int res = 0;
        if (suf_num == pre_num) {
            res = n - (suffix + prefix);
        } else {
            res = min(n-suffix, n-prefix);
        }
        if (res <0) {
            res = 0;
        }
        cout << res << endl;
    }

}
