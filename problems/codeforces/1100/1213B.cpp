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
        vector<int> prices(n);
        for (int i = 0; i<n; i++) {
            cin >> prices[i];
        }
        int bad_days = 0;
        int min_value_to_date = INT_MAX;
        for (int i = n-1; i >= 0; i--) {
            if (prices[i] > min_value_to_date) {
                bad_days++;
            }
            min_value_to_date = min(min_value_to_date, prices[i]);
        }
        cout << bad_days << endl;
    }
}
