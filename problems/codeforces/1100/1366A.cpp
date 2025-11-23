#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if (a > b) {
            swap(a,b);
        }
        if (a*2 <= b) {
            cout << a << endl;
        } else {
            cout << (a+b)/3 << endl;
        }
    }
 }
