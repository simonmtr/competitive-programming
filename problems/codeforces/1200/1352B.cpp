#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int n_even = n - 2 * (k-1);
        if (n_even > 0 && n_even%2 == 0) {
            cout << "yes\n";
            for (int i = 0; i<k-1; ++i) {
                cout << "2 ";
            }
            cout << n_even << endl;
            continue;
        }

        int n_odd = n - (k - 1);
        if (n_odd > 0 && n_odd%2 == 1) {
            cout << "yes\n";
            for (int i = 0; i<k-1; ++i) {
                cout << "1 ";
            }
            cout << n_odd << endl;
            continue;
        }
        cout << "no\n";
    }
}
