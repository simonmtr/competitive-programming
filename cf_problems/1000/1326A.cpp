#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n==1) {
            cout << -1 << endl;
            continue;
        }
        cout << 4;
        for (int i = 1; i<n; i++) {
            cout << 7;
        }
        cout << endl;
    }
}
