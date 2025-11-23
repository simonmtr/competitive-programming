#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--) {
        long long n, k, q, res = 0, len = 0;
        cin >> n >> k >> q;
        vector<long long> nums(n);
        for (int i = 0; i<n; i++) {
            cin >> nums[i];
            if (nums[i] <= q) {
                len++;
            } else {
                len = 0;
            }
            res += max(0ll, (len - k + 1));
        }
        cout << res << endl;
    }
   
}
