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
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    map<int, int> counts;
    map<int, int> reach;
    int y = a[0];
    while (y != 1) {
      counts[y] = 0;
      reach[y] = 0;
      if (y % 2 == 1) {
        y += 1;
      } else {
        y /= 2;
      }
    }
    counts[1] = 0;
    reach[1] = 0;
    counts[2] = 0;
    reach[2] = 0;
    for (int i = 0; i < n; ++i) {
      int x = a[i];
      int steps = 0;
      while (x != 1) {
        if (counts.count(x)) {
          counts[x] += steps;
          ++reach[x];
        }
        if (x % 2 == 1) {
          x += 1;
        } else {
          x /= 2;
        }
        ++steps;
      }
      counts[1] += steps;
      ++reach[1];
      if (steps == 0) {
        counts[2] += 1;
        ++reach[2];
      }
    }
    int mincount = -1;
    for (const auto &[key, value] : reach) {
      if (value != n) {
        continue;
      }
      if (mincount == -1) {
        mincount = counts[key];
      }
      if (counts[key] < mincount) {
        mincount = counts[key];
      }
    }
    cout << mincount << "\n";
  }
}
