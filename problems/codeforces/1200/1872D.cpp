#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;
        long long least = n/lcm(x, y);
        long long pos = n - n/x + least;
        long long neg = n/y - least;
        cout << (n*(n+1) - pos*(pos+1) - neg*(neg+1))/2 << endl;
    }
}
