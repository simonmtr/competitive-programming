#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int ones=0, twos=0, threes=0;
    for (int i = 0; i<s.length(); i+=2) {
        if (s[i] == '1') {
            ones++;
        } else if (s[i] == '2') {
            twos++;
        } else if (s[i] == '3') {
            threes++;
        }
    }
    int am = ones+twos+threes;
    for (int i = 0; i < am; i++) {
        if (ones > 0) {
            cout << 1;
            ones--;
        } else if (twos > 0) {
            cout << 2;
            twos--;
        } else if (threes > 0) {
            cout << 3;
            threes--;
        }
        if (i < am-1) {
            cout << "+";
        }
    }
}
