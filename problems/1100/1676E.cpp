#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--) {
        long long n, q;
        cin >> n >> q;
        vector<long long> sugars(n), prefix(n);
        for (long long i = 0; i<n; i++) {
            cin >> sugars[i];
        }
        sort(sugars.rbegin(), sugars.rend());
        for(int i = 0; i < n; ++i) {
            prefix[i] = (i ? prefix[i - 1] : 0) + sugars[i];
        }
        while(q--) {
            long long qry; 
            cin >> qry;
            int left = 1, right = n, res = -1;
            while(left <= right) {
                int mid = (left + right) / 2;
                if(prefix[mid - 1] >= qry) {
                    res = mid;
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
            cout << res << endl;
        }
    }
}
