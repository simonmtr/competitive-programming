#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, x;
    cin >> n >> m >> x;
    int left = 0, right = 0;
    for (int i = 0; i<m; ++i) {
        int temp;
        cin >> temp;
        if (temp < x) {
            left++;
        } else if (temp > x) {
            right++;
        }
    }
    cout << min(left, right);
}
