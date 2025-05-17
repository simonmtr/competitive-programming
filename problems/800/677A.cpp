#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, h;
    cin >> n >> h;
    int lenofroad = 0;
    for (int i = 0; i<n;i++) {
        int hei;
        cin >> hei;
        if (hei > h) {
            lenofroad+=2;
        } else {
            lenofroad++;
        }
    }
    cout << lenofroad;
}
