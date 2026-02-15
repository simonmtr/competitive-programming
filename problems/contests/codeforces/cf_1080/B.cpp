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
        vector<int> a(n+1,0);
        for (int i = 1; i<=n; ++i) {
            cin >> a[i];
        }
        bool poss = true;
        for (int i = 1; i<=n; ++i) {
            int index = i;
            int value = a[i];
            while (index % 2 == 0) {
                index = index/2;
            }
            while (value % 2 == 0) {
                value = value / 2;
            }
            if (value != index) {
                poss = false;
            }
        }
        if (poss) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
}
