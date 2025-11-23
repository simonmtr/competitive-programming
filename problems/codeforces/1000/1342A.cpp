#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--) {
        long long x, y, a, b, res;
        cin >> x >> y >> a >> b;

        if (x > y) {
            long long temp = x;
            x = y;
            y = temp;
        }
        res = min((x*a+y*a),(x*b+(y-x)*a));
        cout << res << endl;
    }
}
