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
        string s;
        cin >> s;
        int open = 0;
        int closed = 0;
        for (int i = 0; i<n; ++i) {
            char c = s[i];
            if (c == '(') {
                open++;
            } else {
                closed++;
                if ((open - closed)) {

                }
            }
        }
        if (open != closed) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}
