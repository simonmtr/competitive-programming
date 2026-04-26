#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;

    set<char> searchchars = {'A', 'C', 'G', 'T'};

    int longest = 0, cur = 0;

    for (char c : s) {
        if (searchchars.count(c)) {
            cur++;
            longest = max(longest, cur);
        } else {
            cur = 0;
        }
    }

    cout << longest;
}
