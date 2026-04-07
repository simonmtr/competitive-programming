#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int passed = 0, overseas_passed = 0;
    for (int i = 0; i<n; ++i) {
        char cur = s[i];
        if (cur == 'a' && passed < (a+b)) {
            passed++;
            cout << "Yes" << '\n';
        } else if (cur == 'b' && passed < (a+b) && overseas_passed < b) {
            overseas_passed++;
            passed++;
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
    }
}
