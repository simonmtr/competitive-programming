#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int angle;
        cin >> angle;
        if (360 % (180 - angle) == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
}
