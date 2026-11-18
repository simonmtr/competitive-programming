#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    int k;
    cin >> n >> k;
    map<int, int> mapping;
    for (int i = 0; i < n; ++i) {
      int temp;
      cin >> temp;
      ++mapping[temp];
    }
    int start = -1;
    int prev = -1;
    int best = -1;
    int besta = -1;
    int bestb = -1;
    for (auto pair : mapping) {
      if (pair.second < k) {
        start = -1;
        continue;
      }
      if (start == -1 || pair.first != prev + 1) {
        start = pair.first;
      }
      prev = pair.first;
      if (prev - start > best) {
        best = prev - start;
        besta = start;
        bestb = prev;
      }
    }
    if (besta != -1) {
      cout << besta << " " << bestb << "\n";
    } else {
      cout << "-1" << "\n";
    }
  }
}
