#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, s2;
    cin >> s >> s2;
    if (s.length() != s2.length()) {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i<s.length(); i++) {
        if (s[i] != s2[s.length()-1-i]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
