#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int x, y, k, res = 0;
        cin >> x >> y >> k;
        if (x > y) {
            res = (x + k - 1) / k;
            res += max(res - 1, (y + k - 1) / k);
        } else {
            res = (y + k - 1) / k;
            res += max(res, (x + k - 1) / k);
        }
        cout << res << endl;
    }


}
