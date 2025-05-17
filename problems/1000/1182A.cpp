#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    if (t%2 == 1) {
        cout << 0;
        return 0;
    }
    int res = pow(2,t/2);
    cout << res; 
}
