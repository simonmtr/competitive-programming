#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main() {
    string s;
    string res;
    cin >> s;
    for (int i = 0; i<s.length(); i++) {
        if (s[i] >='A' && s[i] <= 'Z') {
            res += s[i];
        }
    }
    cout << res;
}
