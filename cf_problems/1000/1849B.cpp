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
        vector<int> ms(n);
        for (int i = 0; i<n; i++) {
            int temp;
            cin >> temp;
            if (temp % k == 0) {
                ms[i] = k;
            } else {
                ms[i] = temp%k;
            }
        }
        vector<int> ordered(n);
        iota(ordered.begin(), ordered.end(), 0);
        stable_sort(ordered.begin(), ordered.end(), [&](int i, int j) {
            return ms[i] > ms[j];
          });
        for (int i = 0; i<n; i++) {
            cout << ordered[i] + 1 << " ";
        }
        cout << endl;
    }
}
