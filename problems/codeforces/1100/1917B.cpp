#include <iostream>
#include <bits/stdc++.h>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<char> distinct_chars;
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            distinct_chars.insert(s[i]);
            count += distinct_chars.size();
        }
        cout << count << endl;
    }
}
