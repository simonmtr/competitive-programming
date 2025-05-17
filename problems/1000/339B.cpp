#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, m, res=0, current = 1;
    cin >> n >> m;
    for (long long i = 0; i<m; i++) {
        long long temp;
        cin >> temp;
        if (temp >= current) {
            res += temp - current;
        } else {
            res += n- (current - temp);
        }
        current = temp;
    }
    cout << res;
}
