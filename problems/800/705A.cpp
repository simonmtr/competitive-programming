#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string res;
    if (n == 1) {
        cout << "I hate it";
        return 0;
    } else {
        res += "I hate";
    }
    for (int i = 1; i<n; i++) {
        if(i%2==1) {
            res += " that I love";
        } else {
            res += " that I hate";
        }
    }
    res += " it";
    cout << res;
}
