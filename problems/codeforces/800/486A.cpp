#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    long long res = 0;
    if (n%2 == 1) {
        res = -(n/2 + 1);
    } else {
        res = n/2;
    }
    cout << res;
    
}
