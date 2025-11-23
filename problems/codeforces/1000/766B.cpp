#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int l[n];
    for (int i = 0; i<n; i++) cin >> l[i];
    sort(l, l+n);
    for (int i = 1; i<n-1; i++) {
        if(l[i-1] + l[i] > l[i+1]) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}
