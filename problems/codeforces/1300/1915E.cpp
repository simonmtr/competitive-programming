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
    long long pref = 0;
    set<long long> seen = {0};
    bool found = 0;
    for (int i = 0; i < n; ++i) {
      long long temp;
      cin >> temp;
      if (i % 2 == 0) {
        pref = pref + temp;
      } else {
        pref = pref - temp;
      }
      if (seen.count(pref) && found < 1) {
        cout << "YES" << '\n';
        found = 1;
      } else {
        seen.insert(pref);
      }
    }
    if (found < 1) {
      cout << "NO" << '\n';
    }
  }
}
