#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    for (int j = 0; j<t; j++) {
        int a, b;
        cin >> a >> b;
        if (a%b == 0) {
            cout << 0 << endl;
            continue;
        } else {
            cout << b-(a % b) << endl;
        }
    }
}
