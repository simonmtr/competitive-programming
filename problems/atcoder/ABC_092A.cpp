#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, d, x;
    cin >> n >> d >> x;
    int res = x;
    for (int i = 0; i<n; ++i) {
        int temp;
        cin >> temp;
        res += (d - 1)/temp + 1;        
    }
    cout << res;
}
