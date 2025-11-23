#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int groups = 0;
    string last;
    while(t--) {
        string current;
        cin >> current;
        if (current != last) {
            groups++;
        }
        last = current;
    }
    cout << groups;
}
