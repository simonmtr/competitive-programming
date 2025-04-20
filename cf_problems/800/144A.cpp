#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int i_max = 0, i_min = 0, v_max = 0, v_min = 200;
    for (int i = 0; i<n;i++) {
        int c;
        cin >> c;
        if (c > v_max) {
            i_max = i;
            v_max = c;
        }
        if (c <= v_min) {
            i_min = i;
            v_min = c;
        }
    }
    int correction = 0;
    if (i_max > i_min) {
        correction++;
    }
    int res = i_max + (n-1-i_min) - correction;
    cout << res;
}
