#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s;
    cin >> s;
    int counter = 1;
    set<int> seen;
    while (true) {
        if (seen.count(s)) {
            break;
        }
        seen.insert(s);
        if (s % 2) {
            s = 3*s + 1;
        } else {
            s /= 2;
        }
        counter++;
    }
    cout << counter;
    
}
