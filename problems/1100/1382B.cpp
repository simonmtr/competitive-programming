#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, ones = 0, check = 0;
        cin >> n;
        for (int i = 0; i<n; i++) {
            int temp;
            cin >> temp;
            if (!check && temp == 1 && i < n-1) {
                ones++;
            }
            if (temp != 1) {
                check = 1;
            }
        }
        if (ones % 2 == 0) {
            cout << "First" << endl;
        } else {
            cout << "Second" << endl;
        }
    }
}
