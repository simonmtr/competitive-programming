#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s = "";
    cin >> s;
    bool found = false;
    string res = "";
    for (int i = 0; i<n;++i) {
        if (found) {
            res += s[i];
            continue;
        }
        if (s[i] != 'o') {
            found = true;
            res += s[i];
        }
    }
    cout << res;
}
