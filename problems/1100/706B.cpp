#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int s[n];
    for (int i = 0; i<n; i++) {
        cin >> s[i];
    }
    sort(s, s+n);
    int d;
    cin >> d;
    for (int i = 0; i<d; i++) {
        int temp;
        cin >> temp;
        int ans = upper_bound(s,s+n, temp)-s;
        cout << ans << endl;
    }


}
