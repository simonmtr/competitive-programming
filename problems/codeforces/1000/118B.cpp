#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    for (int row = -n; row <= n; ++row) {
        int upper = n - abs(row);
        for (int i = 0; i<abs(row); ++i) {
            cout << "  ";
        }
        for (int i = 0; i < upper; ++i) {
            cout << i << " ";
        }
        for (int i = upper; i>0; --i) {
            cout << i << " ";
        }
        cout << 0 << endl;
    }

}
