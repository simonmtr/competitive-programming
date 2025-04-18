#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    long long t;
    cin >> t;
    long long amount[100005];
    long long dp[100005];
    long long max_i=100003;
    while(t--) {
        long long number;
        cin >> number;
        amount[number]++;
    }
    dp[0] = 0;
    dp[1] = amount[1];
    for (long long i = 2; i<=max_i; i++) {
        dp[i] = max(dp[i-1], dp[i-2] + (amount[i]*i));
    }
    cout << dp[max_i];
}
