#include <bits/stdc++.h>

using namespace std;

long long dist(long long x, long long y, long long x2, long long y2) {
  return (x - x2) * (x - x2) + (y - y2) * (y - y2);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<long long> xs(n);
    vector<long long> ys(n);
    for (int i = 0; i < n; ++i) {
      cin >> xs[i] >> ys[i];
    }
    long long xstart;
    long long ystart;
    long long xt;
    long long yt;
    cin >> xstart >> ystart >> xt >> yt;
    long long distme = dist(xstart, ystart, xt, yt);
    bool found = false;
    for (int i = 0; i < n; ++i) {
      if (distme >= dist(xt, yt, xs[i], ys[i])) {
        found = true;
        break;
      }
    }
    if (found) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
    }
  }
}
