#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    int n, m, op, mp;
    cin >> n >> m >> op >> mp;
    if (m * op <= mp) {
        cout << n*op;
    } else {
        int calc = (n/m)*mp + min((n%m)*op,mp);
        cout << calc;
    }
}
