#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i<n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i<q; i++) {
        int temp;
        cin >> temp;
        int c = find(a.begin(), a.end(), temp) - a.begin();
        cout << c + 1 << " ";
        rotate(a.begin(), a.begin() + c, a.begin() + c + 1);
    }
}
