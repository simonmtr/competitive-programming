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
        vector<int> a(n + 2);
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            while (temp > n) {
                temp = temp/2;
            }
            while (a[temp] and temp > 0) {
                temp = temp/2;
            }
            a[temp] = 1;
        }
        if (a[0]) {
            cout  << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}
