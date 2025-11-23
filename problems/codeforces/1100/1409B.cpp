#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        long long res = 1e18;
        for (int i = 0; i<2; i++) {
            int a_res = min(n, a - x);
            int b_res = min(n - a_res, b - y);
            res = min(res, (a - a_res)  * 1ll * (b - b_res));
            swap(a, b);
			swap(x, y);
        }

        cout << res << endl;
    }
}
