#include <iostream>
#include <bits/stdc++.h>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    set<long long> cubes;
    long long maxvalue = 1'000'000'000'000L;
    for (long long i = 1; i * i * i <= maxvalue; i++) {
        cubes.insert(i * i * i);
    }
    while (t--) {
        long long n;
        bool found = false;
        cin >> n;
        for (long long i = 1; i * i * i <= n; i++) {
            if (cubes.count(n - i * i * i)) {
              cout << "YES" << endl;
              found = true;
              break;
            }
        }
        if (!found) {
            cout << "NO" << endl;
        }
    }
}
