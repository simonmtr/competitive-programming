#include <iostream>
#include <bits/stdc++.h>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    set<int> levels;
    for (int i = 0; i<2; i++) {
        int l;
        cin >> l;
        for (int j = 0; j<l;j++) {
            int c;
            cin >> c;
            if (!levels.count(c)) {
                levels.insert(c);
            }
        }
    }
    if (levels.size() == n) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
}
