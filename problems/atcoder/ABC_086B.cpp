#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    cin >> a >> b;
    string c = a + b;
    int d = stoi(a+b);
    if (sqrt(d) == (int)sqrt(d)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}
