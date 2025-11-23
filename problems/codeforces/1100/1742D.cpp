#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    vector<int> pairs[1001];
    for (unsigned int i = 1; i<=1000; ++i) {
        for (unsigned int j = 1; j<=1000; ++j) {
            if (__gcd(i, j) == 1) {
                pairs[i].push_back(j);
            }
        }
    }

    while (t--) {
        int n;
        cin >> n;
        vector<int> nums[1001];
        for (int i = 1; i <= n; ++i) {
            int temp; 
            cin >> temp;
            nums[temp].push_back(i);
        }

        int res = -1;
        for(int i = 1; i <= 1000; ++i) {
            for(int j : pairs[i]) {
                if(!nums[i].empty() && !nums[j].empty()) {
                    res = max(res, nums[i].back() + nums[j].back());
                }
            }
        }
        cout << res << endl;
    }
}
