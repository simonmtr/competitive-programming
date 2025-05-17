#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,k, res = 0;
    cin >> n >> k;
    if((n+1)/2 >= k) {
        res = k*2-1;
    } else {
        res = (k-(n+1)/2)*2;
    }
    cout << res;
}
