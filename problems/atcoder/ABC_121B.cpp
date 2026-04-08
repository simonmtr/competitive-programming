#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, c;
    cin >> n >> m >> c;
    vector<int> b(m);
    int res = 0;
    for (int i = 0; i<m; ++i) {
        cin >> b[i];
    }
    for (int i = 0; i<n; ++i) {
        vector<int> a(m);
        int cur = c;
        for (int j = 0; j<m; ++j) {
            cin >> a[j];
            cur += a[j] * b[j];
        }
        if (cur > 0) res++;
    }
    cout << res;
}
