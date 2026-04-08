#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    int res = n*100/108;

    if ((int) floor(res*1.08) == n) {
        cout << res;
    } else if ((int) floor((res + 1) * 1.08) == n) {
        cout << res + 1;
    } else {
        cout << ":(";
    }
}
