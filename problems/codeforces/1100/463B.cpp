#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, res = 0, energy = 0, current, last = 0;
    cin >> n;
    for (int i = 1; i<=n; i++) {
        cin >> current;
        energy += last - current;
        if (energy < 0) {
            res += -energy;
            energy = 0;
        }
        last = current;
    }
    cout << res << endl;
}
