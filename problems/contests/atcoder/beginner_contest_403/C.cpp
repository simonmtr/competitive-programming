#include <iostream>
#include <bits/stdc++.h>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, q;
    cin >> n >> m >> q;
    set<int> all_perm;
    set<pair<int, int>> view_perm;
    for (int i = 0; i<q; i++) {
        int type, x, y;
        cin >> type >> x;
        if (type == 1) {
            cin >> y;
            view_perm.insert({x, y});
        } else if (type == 2) {
            all_perm.insert({x});
        } else if (type == 3) {
            cin >> y;
            if (all_perm.find(x) != all_perm.end() || view_perm.find({x, y})!= view_perm.end()) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

}
