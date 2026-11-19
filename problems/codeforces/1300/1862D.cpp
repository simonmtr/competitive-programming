#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    long long left = 0, right = 2e9, best = 0;
    while (left <= right) {
      long long mid = left + (right - left) / 2;
      long long x = mid * (mid - 1) / 2;
      if (x <= n) {
        best = mid;
        left = mid + 1;
      } else {
        right = mid - 1;
      }
    }
    cout << best + (n - best * (best - 1) / 2) << '\n';
  }
}
