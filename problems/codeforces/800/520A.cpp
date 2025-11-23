#include <iostream>
#include <bits/stdc++.h>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string s;
    cin >> n >> s;
    set<char> seen;
    for (int i = 0; i<n; i++) {
        if (!seen.count(tolower(s[i]))) {
            seen.insert(tolower(s[i]));
        }
    }
    if (seen.size() == 26) {
        cout << "YES";
        return 0;
    }
    cout << "NO";
}
