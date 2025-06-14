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
        int res = a[0], sum = a[0], mnimum = min(0, a[0]);
        for (int i = 1; i<n; i++) {
            if (abs(a[i] % 2) == abs(a[i - 1] % 2)) {
                mnimum = 0;
                sum = 0;
            }
            sum += a[i];
            res = max(res, sum - mnimum);
            mnimum = min(mnimum, sum);
        }
        cout << res << endl;
    }
}
