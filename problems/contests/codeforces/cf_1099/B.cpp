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
        vector<long long> v(n);
        for (int i = 0; i<n; ++i) {
            cin >> v[i];
        }
        long long max_k = 0;
        for (int i = 1; i<n; ++i) {
            if (v[i-1] > v[i]) {
                max_k = max(max_k, v[i-1] - v[i]);
            }
        }
        bool possible = true;
        bool sorted = false;
        if (max_k == 0) {
            sorted = true;
        }
        
        long long p = v[0];
        for (int i = 1; i<n; ++i) {
            if (!possible || sorted) {
                break;
            }
            if (v[i] >= p) {
                p = v[i];
            } else {
                if (v[i] + max_k >=  p) {
                    p = v[i] + max_k;
                } else {
                    possible = false;
                }
            }
        }


        if (!possible) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}
