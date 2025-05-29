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
        vector<int> a(n), b(n);
        for (int i = 0; i<n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i<n; i++) {
            cin >> b[i];
        }
        int res = 0;
        int sum = 0;
        priority_queue<int> queue;
        for (int i = 0; i < n && i < k; i++) {
            sum += a[i];
            queue.push(b[i]);
            res = max(res, queue.top() * (k - i - 1) + sum);
        }
        cout << res << endl;
    }
}
