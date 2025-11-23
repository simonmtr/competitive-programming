#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int r;
    cin >> r;
    int freerooms = 0;
    for (int i = 0; i < r; i++) {
        int p, q;
        cin >> p >> q;
        if (q-p >=2) {
            freerooms++;
        }
    }
    cout << freerooms;
}
