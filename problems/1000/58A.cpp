#include <iostream>
#include <bits/stdc++.h>

using namespace std;



int main() {
    string s;
    cin >> s;
    string hello = "hello";
    int c = 0;
    for (int i = 0; i<s.length(); i++) {
        if (s[i] == hello[c]) {
            c++;
        }
    }
    if (hello.length() == c) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

