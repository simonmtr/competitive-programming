#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i<n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());
        long long res = 0, rem = 0;
        for (int i = 0; i < n; i++) {
            res += a[i] * (i % 2 ? -1 : 1);
        }
        for (int i = 0; i + 2 <= n; i += 2) {
            rem += a[i] - a[i + 1];
        }
        res = res - min(rem, k);
        cout << res << endl;
    }
}