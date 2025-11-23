#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, index;
    cin >> n >> m;
    double temp, curmax(0);
    for (int i = 1; i<=n; i++) {
        cin >> temp;
        if (ceil(temp/m) >= curmax) {
            index = i;
            curmax = ceil(temp/m);
        }
        
    }
    cout << index;
}
