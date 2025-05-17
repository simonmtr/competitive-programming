#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long ntimes, ones, n, goal;
        cin >> ntimes >> ones >> n >> goal;

        if (goal%n<=ones && n * ntimes + ones >= goal) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
