#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    int cur = 1, res = 0;
    while (cur < b) {
        cur = cur - 1 + a;
        res++;
    }
    cout << res;
}
