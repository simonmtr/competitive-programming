#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int res = 1;
    while (res * 2 <= n) {
        res *= 2;
    }
    cout << res;
}
