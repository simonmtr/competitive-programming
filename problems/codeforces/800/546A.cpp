#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int ic, m, w;
    cin >> ic >> m >> w;

    m -= ic;
    for (int i = 2; i<=w; i++) {
        m -=(i*ic);
    }
    if (m<0) {
        cout << abs(m);
    } else {
        cout << 0;
    }
    

}
