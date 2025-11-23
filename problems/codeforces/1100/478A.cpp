#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int total = a + b + c + d + e;
    if (total < 5) {
        cout << "-1";
    } else if (total % 5 == 0) {
        cout << total/5;
    } else {
        cout << "-1";
    }

}
