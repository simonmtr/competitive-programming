#include <iostream>
#include <bits/stdc++.h>
#include <string>
typedef long long ll;

using namespace std;

int main() {
    string s;
    cin >> s;
    string res;
    if (s.length() == 1) {
        if (isupper(s[0])) {
            res = tolower(s[0]);
        } else {
            res = toupper(s[0]);
        }
        
        cout << res;
        return 0;
    }
    if (islower(s[0]) && isupper(s[1])) {
        res = toupper(s[0]);
    } else {
        res = tolower(s[0]);
    }

    for (int i = 1; i<s.length();i++) {
        if (isupper(s[i])) {
            res += tolower(s[i]);
        } else {
            cout << s;
            return 0;
        }
    }
    cout << res;
}

