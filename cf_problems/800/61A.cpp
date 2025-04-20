#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b, c;
    cin >> a >> b;
    for (int i = 0; i<a.length();i++){
        if (a[i] != b[i]) {
            c += '1';
        } else {
            c+= '0';
        }
    }
    cout << c;
}
