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
        for (int i = 0; i<n; ++i) {
            cin >> a[i];
        }
        int res = 0;
        for (int i = 0; i<n; ++i) {
            int opp = 7 - a[i];
            if (a[i+1] == opp || a[i+1] == a[i]) {
                res++;
                i++;
            }
        }
        cout << res << endl;
    }

}
