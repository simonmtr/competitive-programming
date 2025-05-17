#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int bc, count = 0;
        string s;
        cin >> bc >> s;
        int opencount = 0, closecount = 0;
        for (int i = 0; i<bc; i++) {
            if (s[i] == ')') {
                if (opencount <= closecount) {
                    count++;
                } else {
                    closecount++;
                }
            } else if (s[i] == '(') {
                opencount++;
            }
        }
        cout << count << endl;
    }
}
