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
        map<int, int> m;
        long long res = 0;
        for (int i = 0; i<n; ++i) {
            int x;
            cin >> x;
            x -= i;
            res+= m[x];
            m[x]++;
        }
        cout << res << endl;
    }
}
