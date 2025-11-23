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
        vector<int> numbers(n);
        for (int i = 0; i<n; i++) {
            cin >> numbers[i];
        }

        vector<int> dp(n);
        for (int i = n - 1; i >= 0; i--) {
            dp[i] = numbers[i];
            int temp = i + numbers[i];
            if (temp < n) {
              dp[i] += dp[temp];
            }
          }
          cout << *max_element(dp.begin(), dp.end()) << endl;
    }
}
