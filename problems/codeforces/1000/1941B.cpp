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
        vector<int> nums(n);
        for (int i = 0; i<n; i++) {
            cin >> nums[i];
        }
        bool no = false;

        for (int i = 0; i<n-2; i++) {
            if (nums[i] < 0) {
                no = true;
                break;
            }
            int multi = nums[i];
            nums[i] -= multi;
            nums[i+1] -= 2 * multi;
            nums[i+2] -= multi;

        }
        if (nums[n-1] != 0 || nums[n-2] != 0 || no) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
        
        
    }
}
