#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int p;
    cin >> p;
    vector<int> days(8);
    for (int i = 1; i<8; i++) {
        cin >> days[i];
    }
    int pointer = 0;
    while (p>0) {
        pointer++;
        if (pointer == 8) {
            pointer = 0;
        }
        p -= days[pointer];
    }
    cout << pointer;
}
