#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int xOne, xTwo, yOne, yTwo;
    cin >> xOne >> yOne >> xTwo >> yTwo;


    if (xOne == xTwo) {
        int d = abs(yOne - yTwo);
        if (d == 0) {
            cout << -1;
            return 0;
        }
        cout << xOne + d << ' ' << yOne << ' ' << xTwo + d << ' ' << yTwo;
        return 0;
    } else if (yOne == yTwo) {
        int d = abs(xOne - xTwo);
        if (d == 0) {
            cout << -1;
            return 0;
        }
        cout << xOne << ' ' << yOne + d << ' ' << xTwo << ' ' << yTwo + d;
        return 0;
    } else if (abs(xOne - xTwo) == abs(yOne - yTwo)) {
        cout << xOne << ' ' << yTwo << ' ' << xTwo << ' ' << yOne;
        return 0;
    }
    cout << -1;
    return 0;

}
