#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int l;
    cin >> l;
    vector<int> cubes(l);
    for (int i = 0; i<l; i++) {
        cin >> cubes[i];
    }
    sort(cubes.begin(), cubes.end());
    for (int i = 0; i<l;i++){
        cout << cubes[i];
        if (i < l-1) {
            cout << " ";
        }
    }
}
