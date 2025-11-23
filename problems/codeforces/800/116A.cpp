#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int c;
    cin >> c;
    int max_c=0;
    int cap = 0;
    for (int i = 0; i<c; i++) {
        int a, b;
        cin >> a >> b;
        cap = cap - a + b;
        max_c = max(max_c, cap);
    }
    cout << max_c;
}
