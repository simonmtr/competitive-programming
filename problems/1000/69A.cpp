#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    int x, y, z;
    int sumx=0, sumy=0, sumz = 0;
    while(t--) {
        cin >> x >> y >> z;
        sumx += x;
        sumy += y;
        sumz += z;
    }
    if (sumx == 0 && sumy == 0 && sumz == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
