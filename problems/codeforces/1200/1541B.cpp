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
        vector<long long> a(n);
        for (long long i = 0; i<n; i++) {
            cin >> a[i];
        }
        long long count = 0ll;
        for (long long i = 0; i<n; ++i) {
            for (long long j = a[i]-i-1; j<=n; j+=a[i]) {
                if (j > (i+1) && a[i]*a[j-1] == (i+j+1)) {
                    count++;
                }
            }
        }
        cout << count << "\n";
    }
}
