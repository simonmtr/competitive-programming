#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, m;
    cin >> n >> m;
    long long a[n], b[m];
    for (long long i = 0; i<n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (long long i = 0; i<m; ++i) {
        cin >> b[i];
        cout << upper_bound(a, a + n, b[i]) - a << " ";
    }
}
