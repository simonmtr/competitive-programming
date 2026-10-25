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
    set<long long> seen;
    long long cur_sum = 0;
    seen.insert(cur_sum);
    int res = 0;
    for (int i = 0; i < n; ++i) {
      int temp;
      cin >> temp;
      cur_sum += temp;
      if (seen.count(cur_sum)) {
        seen = {cur_sum};
        res++;
      } else {
        seen.insert(cur_sum);
      }
    }
    cout << res << "\n";
  }
}
