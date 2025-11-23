#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<long long> sums(n+1);
        for (long long i = 0; i < n; i++) {
            sums[i + 1] = sums[i] + a[i];
        }
        long long res = 0;
        for (long long i = 0; i < k + 1; i++){
            res = max(res, sums[n - (k - i)] - sums[2 * i]);
        }
        cout << res << endl;
    }
}
