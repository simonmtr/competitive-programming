#include <iostream>
#include <bits/stdc++.h>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    string b;
    while (cin >> s) {
        b += s;
        if (s[s.length()-1] == '}') {
            break;
        }
    }
    set<char> c;
    for (int i = 0; i<b.length();i++) {
        if (i == 0 || i == b.length()-1 || b[i] == ',' || b[i] == ' ') {
            continue;
        }
        if (!c.count(b[i])) {
            c.insert(b[i]);
        }
    }
    cout << c.size();
}
