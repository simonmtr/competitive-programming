#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, k;
    cin >> t;
    string s;
    while (t--) {
        cin >> n >> k >> s;
        int res = s.length();
        vector<int> whites(n+1);
        for (int i = 1; i<=n; i++) {
            whites[i] = whites[i-1] + int(s[i-1] == 'W');
        }
        for (int i = k; i<=n; i++) {
            res = min(res, whites[i] - whites[i-k]);
        }
        cout << res << endl;
    }
}
