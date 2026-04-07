#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<long long> v(n);
    long long fullsum = 0;
    for (int i = 0; i<n; ++i) {
        cin >> v[i];
        fullsum += v[i];
    }
    long long meanval_floor = fullsum / n;
    long long meanval_ceil = (fullsum + n - 1) / n;
    long long res_floor = 0, res_ceil = 0;
    for (int i = 0; i<n; ++i) {
        long long cur = v[i] - meanval_floor;
        res_floor += cur*cur;
        cur = v[i] - meanval_ceil;
        res_ceil += cur*cur;
    }
    cout << min(res_ceil, res_floor);
}
