#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int res = 0;
    for (int i = 0; i<t; i++) {
        res+= (i + 1) * (t - i) - i;
    }
    cout << res;
}
