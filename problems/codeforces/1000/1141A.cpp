#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, m;
    cin >> n >> m;
    if (m%n != 0) {
        cout << -1;
        return 0;
    }
    long long multi = m/n;
    long long res = 0;
    while (multi%2 == 0) {
        res++;
        multi = multi/2;
    }
    while (multi%3 == 0) {
        res++;
        multi = multi/3;
    }
    if (multi != 1) {
        cout << -1;
        return 0;
    }


    cout << res;
    return 0;

}
