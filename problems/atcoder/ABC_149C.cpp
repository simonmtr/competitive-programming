#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long x) {
    if (x < 2) {
        return false;
    }
    for (long long i = 2; i * i <= x; ++i) {
        if (x % i == 0) return false;
    }
    return true;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long x;
    cin >> x;

    while (!isPrime(x)) {
        x++;
    }

    cout << x;
}