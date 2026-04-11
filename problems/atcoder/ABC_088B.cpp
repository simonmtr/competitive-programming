#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i<n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    int alice = 0, bob = 0;
    for (int i = 0; i<n;++i) {
        if (i%2) {
            bob += v[i];
        } else {
            alice += v[i];
        }
    }
    cout << alice - bob;
}
