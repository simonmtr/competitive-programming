#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> numbers(n);
        for (int i = 0; i<n; i++) {
            cin >> numbers[i];
        }
        bool found = false;
        for (int i = 0; i<n; i++) {
            for (int j = i + 2; j<n; j++){
                if (numbers[i] == numbers[j]) {
                    found = true;
                }
            }
        }
        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
