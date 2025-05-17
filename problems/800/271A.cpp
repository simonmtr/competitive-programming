#include <iostream>
#include <bits/stdc++.h>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int y;
    cin >> y;
    set<int> digits;
    for (int i = y+1; i < 9013; i++) {
        int cur = i;
        for (int j = 0; j<4; j++){
            if (digits.count(cur%10)) {
                break;
            }
            digits.insert(cur%10);
            cur /= 10;
        }
        if (digits.size() == 4) {
            cout << i;
            return 0;
        }
        digits.clear();
    }
}
