#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int res = -1;
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());

    if (k == 0) {
        res = nums[0] - 1;
    } else {
        res = nums[k - 1];
    }
    int counter = 0;

    for (int i = 0; i<n; ++i) {
        if (nums[i] <= res) {
            counter++;
        }
    }

    if (counter != k || res <= 0 || res > 1000 * 1000 * 1000) {
        cout << "-1";
        return 0;
    }
    cout << res;
    return 0;
}
