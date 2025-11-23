#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        long long n, k, res;
        cin >> n >> k;
        int multi = (n+k-1)/k;
        res = ((multi*k)+n-1)/n;
        cout << res << endl;
    }
}
    