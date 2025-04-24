#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int n = 1;
    if (t == 0) {
        n = 1;
    } else if (t%4 == 0) {
        n = 6;
    } else if (t%4 == 1) {
        n = 8;
    } else if (t%4 == 2) {
        n = 4;
    } else if (t%4 == 3) {
        n = 2;
    }

    cout << n;
}
