#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int steps, m;
    cin >> steps >> m;
    int l = (steps+1)/2;
    int res = (l + m -1) / m * m;
    if (res > steps) {
        res = -1;
    }
    cout << res;
}
