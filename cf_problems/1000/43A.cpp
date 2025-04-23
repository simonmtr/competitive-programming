#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int l, countfirst = 0, countsecond=0;
    string first="", second="";
    cin >> l;
    for (int i = 0; i<l; i++) {
        string cur;
        cin >> cur;
        if (first == "" || first == cur) {
            first = cur;
            countfirst++;
        } else if (second == "" || second == cur) {
            second = cur;
            countsecond++;
        }
    }
    if (countfirst > countsecond) {
        cout << first;
    } else {
        cout << second;
    }

}
