#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1, s2;
    cin >> s1 >> s2;
    string l1, l2;
    for (int i = 0; i<s1.length(); i++) {
        l1+=tolower(s1[i]);
        l2+=tolower(s2[i]);
    } 
    if (l1<l2) {
        cout << -1;
    } else if (l1==l2) {
        cout << 0;
    } else {
        cout << 1;
    }

}
