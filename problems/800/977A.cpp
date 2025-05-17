#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a;
    cin >> n >> a;

    for (int i = 0; i<a; i++) {
        if (n%10 != 0) {
            n -= 1;
        } else {
            n/=10;
        }
    }
    cout << n;
}
