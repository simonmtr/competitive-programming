#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int numbers[5] = {100, 20, 10, 5, 1};
    int m;
    cin >> m;
    int c=0;
    int i=0;
    while (m>0) {
        c+=m/numbers[i];
        m = m%numbers[i];
        i++;
    }
    cout << c;
}
