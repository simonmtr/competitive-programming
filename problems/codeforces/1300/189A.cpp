#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    int l, a, b, c;
    cin >> l >> a >> b >> c;
    vector<int> dp(l+3, 0);
    if (a <= l) dp[a] = 1;
    if (b <= l) dp[b] = 1;
    if (c <= l) dp[c] = 1;
    for (int i = 1; i<=l; i++) {
        if (dp[i] > 0) {
            if (i+a <= l) dp[i+a] = max(dp[i+a], dp[i] + 1);
            if (i+b <= l) dp[i+b] = max(dp[i+b], dp[i] + 1);
            if (i+c <= l) dp[i+c] = max(dp[i+c], dp[i] + 1);
        }
    }
    cout << dp[l];

}
