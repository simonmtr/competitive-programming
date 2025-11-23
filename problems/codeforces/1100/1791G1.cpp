#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, c;
        cin >> n >> c;
        priority_queue<int> pq;
        for (int i = 1; i<=n; ++i) {
            int temp;
            cin >> temp;
            pq.push(-temp-i);
        }
        int res = 0;
        while (!pq.empty()) {
            int cur = -pq.top();
            if (cur > c) {
                break;
            }
            pq.pop();
            res++;
            c -= cur;
        }
        cout << res << endl;
    }
}
