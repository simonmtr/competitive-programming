#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, x;
    cin >> t >> x;
    vector<pair<int, int>> res;
    int last = 0;
    for (int i = 0; i<=t; ++i) {
        int temp;
        cin >> temp;
        if (i == 0) {
            last = temp;
            res.push_back({i, temp});
            continue;
        }
        // cout <<"temp: " <<temp << endl;
        // cout <<"last: " << last << endl;
        if (abs(temp - last) >= x) {
            res.push_back({i, temp});
            last = temp;
            continue;
        }
    }
    int rs = res.size();
    // cout << rs << endl;
    for (int i = 0; i < rs; ++i) {
        cout << res[i].first << " " << res[i].second << '\n';
    }
}
