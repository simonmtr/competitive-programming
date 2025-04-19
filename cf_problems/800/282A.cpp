#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int counter = 0;
    while (t--) {
        string s;
        cin >> s;
        if (s[0] == '+' || s[1] == '+') {
            counter++;
        } else {
            counter--;
        }
    }
    cout << counter;
}
