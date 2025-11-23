#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;
        vector<long long> heights(n);
        for (long long i = 0; i<n; i++) {
            cin >> heights[i];
        }
        long long left = 0, right = INT_MAX, result = 0;
        while (left <= right)
        {
            long long mid = left + (right - left) / 2;

            bool valid = true;

            long long current_water = 0;

            for (int i = 0; i < n; i++)
            {
                if (heights[i] < mid) {
                    current_water += (mid - heights[i]);
                }
            }

            if (current_water > x) {
                valid = false;
            }
            if (valid)
            {
                result = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    
        cout << result << endl;
    }
}
