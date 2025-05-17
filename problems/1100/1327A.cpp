#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        if ((k*k) <= n && ((n%2==1 && k%2==1) || (n%2==0 && k%2==0))) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }   
    }
}
