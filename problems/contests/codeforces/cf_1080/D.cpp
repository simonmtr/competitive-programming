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
        vector<int> a(n);
        vector<int> prefix_val
        for (int i = 2; i<n; ++i) {
            cin >> a[i];
        }
        for (int j = 0; j<n; ++j) {
            for (int i = -1000; i<1001; ++i) {
                long long digit_res = 0;
                for (int k = 0; k<n; ++k) {
                    long long temp_res = a[k] * abs(k - i);
                    digit_res += temp_res;
                }
                if (digit_res == a[j]) {
                    cout << i << " ";
                }
            }
            
        }
        cout << endl;
    }
}
