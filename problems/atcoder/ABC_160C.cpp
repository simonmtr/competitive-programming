#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k, n;
    cin >> k >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int largest_gap = 0;
    for (int i = 1; i<n; ++i) {
        int gaps = abs(v[i] - v[i-1]);
        largest_gap = max(largest_gap, gaps);
    }
    int last_gap = (v[0] + k) - v[n-1];
    largest_gap = max(largest_gap, last_gap); 
    cout << k - largest_gap;
}
