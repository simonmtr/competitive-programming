#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int ans = 0;
    for (int i = 1; i<=t; i++) {
        int temp;
        cin >> temp;
        if (i%2==1) {
            ans+= temp;
        }
    }
    cout << ans;
}
