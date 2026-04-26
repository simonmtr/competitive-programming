#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<int> v(n+1);

    for (int i = 1; i<=n; ++i) {
        int temp;
        cin >> temp;
        v[temp] = i;
    }
    for (int i = 1; i<=n; ++i) {
        cout << v[i] << " ";
    }

}
