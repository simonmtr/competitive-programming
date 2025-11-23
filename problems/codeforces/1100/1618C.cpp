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
        long long d1 = 0, d2 = 0;
        vector<long long> a(n + 1);
        for (int i = 1; i<=n; i++) {
            cin >> a[i];
            if (i%2) {
                d1 = __gcd(d1, a[i]);
            } else {
                d2 = __gcd(d2, a[i]);
            }
        }
        int found = 0;
        for (int i = 2; i <= n; i+=2) {
            if (a[i]%d1 == 0) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            cout << d1 << endl;
            continue;
        }
        found = 0;
        for (int i = 1; i <= n; i+=2) {
            if (a[i]%d2 == 0) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            cout << d2 << endl;
            continue;
        }
        cout << 0 << endl;
    }
}
