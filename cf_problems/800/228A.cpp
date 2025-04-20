#include <iostream>
#include <bits/stdc++.h>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long h[4];
    for (int i = 0; i<4; i++) {
        cin >> h[i];
    }
    set<int> colors;
    long long count = 0;
    for (int i = 0; i<4; i++) {
        if (colors.count(h[i])) {
            count++;
        } else {
            colors.insert(h[i]);
        }
    }
    cout << count;

}
