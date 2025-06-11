#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        long long n, x;
        cin >> n >> x;
        vector<long long> savings(n);
        long long total = 0;
        for (long long i = 0; i<n; i++) {
            cin >> savings[i];
            total += savings[i];
        }
        if (total/n >= x) {
            cout << n << endl;
            continue;
        }
        long long res = n;
        sort(savings.begin(), savings.end());
        for (long long i = 0; i < n; i++) {
            total -= savings[i];
            res--;
            if (res == 0) {
                cout << res << endl;
                break;
            }
            if (total / res >= x) {
                cout << res << endl;
                break;
            }
        }
    }

}
