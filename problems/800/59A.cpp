#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int lower=0, upper=0;
    for (int i = 0; i<s.length(); i++) {
        if (isupper(s[i])) {
            upper++;
        } else {
            lower++;
        }
    }
    string res;
    for (int i = 0; i<s.length(); i++) {
        if (upper > lower) {
            res += toupper(s[i]);
        } else {
            res += tolower(s[i]);
        }
    }
    cout << res;
}
