#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    for (int i = 0; i<n; i++) {
        int rating;
        cin >> rating;
        if (rating == 1) {
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";
}
