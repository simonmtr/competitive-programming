#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i<n; ++i) cin >> v[i];

    vector<int64_t> dp(n);
    dp[0] = 0;
    for (int i = 1; i<n; ++i) {
        dp[i] = numeric_limits<int64_t>::max();
        for (int j = 1; j <= k && (i - j)>= 0; ++j) {
            dp[i] = min(dp[i], dp[i - j] + abs(v[i] - v[i-j]));
        }
    }
    cout << dp.back();
}
