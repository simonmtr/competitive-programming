#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long s, n;
    cin >> s >> n;
    long long min_dragon_s = 0;
    vector<pair<int, int>> dragons;
    for (long long i = 0; i<n;i++) {
        long long x, y;
        cin >> x >> y;
        min_dragon_s = min(min_dragon_s, x);
        dragons.push_back({x,y});
    }
    if (s < min_dragon_s) {
        cout << "NO";
        return 0;
    }
    sort(dragons.begin(), dragons.end(), [](auto &left, auto &right) {
        return left.first < right.first;
    });
    for (int i = 0; i<n;i++) {
        if (dragons[i].first < s){
            s+= dragons[i].second;
        } else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
