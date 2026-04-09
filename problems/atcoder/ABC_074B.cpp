#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int res = 0;
    for (int y = 0; y<n; ++y) {
        int x;
        cin >> x;
        res += 2 * min(abs(x), abs(x - k));
    }
    cout << res;
}
