#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, k;
    cin >> n >> k;
    if (k == 0) {
        cout << n;
        return 0;
    }
    long long res = n % k;
    res = min(res, k-res);
    cout << res;

}
