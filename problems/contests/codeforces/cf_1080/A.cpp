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
        int a[n];
        bool found = false;
        bool found2 = false;
        for (int i = 0; i<n; ++i) {
            cin >> a[i];
            if(a[i] == 67) {
                found = true;
            }
            if (a[i] == 1) {
                found2 = true;
            }
        }

        if (found || (found && found2)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }


    }
}
