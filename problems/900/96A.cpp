#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int zeroes=0, ones = 0;
    for (int i = 0; i<s.length(); i++) {
        if (s[i] == '0') {
            zeroes++;
            ones = 0;
        } else if (s[i] == '1') {
            ones++;
            zeroes = 0;
        }
        if (ones > 6 || zeroes > 6) {
            cout << "YES";
            return 0;
        } 
    }
    cout << "NO";
}
