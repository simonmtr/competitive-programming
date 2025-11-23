#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int f;
    cin >> f;
    int gifts[f];
    for (int i = 0; i<f;i++) {
        int j;
        cin >> j;
        gifts[j-1] = i+1;
    }
    string o;
    for (int i = 0; i<f;i++) {
        cout << gifts[i];
        if (i < f-1) {
            cout << " ";
        }
    }
}
