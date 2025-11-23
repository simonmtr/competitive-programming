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
        vector<int> a(n);
        for (int i = 0; i<n; i++) {
            cin >> a[i];
        }
        long long res = -1;
        for (int k = 1; k <= n; ++k) {
            if (n % k == 0) {
                long long mximum = -1e18, mnimum = 1e18;
                for (int i = 0; i < n; i += k) {
                    long long cur_sum = 0;
                    for (int j = i; j < i + k; ++j) {
                        cur_sum += a[j];
                    }
                    mximum = max(mximum, cur_sum);
                    mnimum = min(mnimum, cur_sum);
                }
                res = max(res, mximum - mnimum);

            }
        }
        cout << res << endl;
    }
}
