#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, x;
    cin >> n >> x;
    vector<long long> v(n);

    for (int i = 0; i<n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int res = 0;
    for (int i = 0; i < n; ++i) {
        if (x >= v[i]) {
            x -= v[i];
            res++;
        } else {
            break;
        }
    }
    if (res == n && x>0) {
        res--;
    }
    cout << res;

}
