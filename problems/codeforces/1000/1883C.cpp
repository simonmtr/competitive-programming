#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k, even_values = 0;
        cin >> n >> k;
        vector<int> nums(n);
        int max_distance = 0;
        bool divisible = false;
        for (int i = 0; i<n; i++) {
            cin >> nums[i];
            if (nums[i]%2 == 0) even_values++;
            if (nums[i] % k != 0) {
                max_distance = max(nums[i] % k, max_distance);
            } else {
                divisible = true;
            }
        }
        if (divisible) {
            cout << 0 << endl;
            continue;
        }
        if (k == 4) {
            if (even_values >= 2){
                cout << 0 << endl;
                continue;
            } else if (even_values >= 1 || max_distance == 3) {
                cout << 1 << endl;
                continue;
            } else {
                cout << 2 << endl;
                continue;
            }
        }
        cout << (k-max_distance) << endl; // for 2,3,5

    }
}
