#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long res = 0;
        for (long long i = 1; i<=n/2; i++) {
            res += i*i;
        }
        cout << res * 8 << endl;
    }
}
