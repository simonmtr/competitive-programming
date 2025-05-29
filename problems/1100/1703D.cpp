#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<string,bool> substring_map;
        vector<string> substrings(n);
        for (int i = 0; i<n; i++) {
            cin >> substrings[i];
            substring_map[substrings[i]] = true;
        }
        for (int i = 0; i<n; i++) {
            bool found_substring_match = false;
            for (int j = 1; j < substrings[i].length(); j++) {
                string front_part = substrings[i].substr(0, j);
                string back_part = substrings[i].substr(j, substrings[i].length() - 1);
                if (substring_map[front_part] && substring_map[back_part]) {
                    found_substring_match = true;
                }
            }
            cout << found_substring_match;
        }
        cout << endl;
    }
}
