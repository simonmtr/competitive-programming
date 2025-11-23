#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, m, q;
    const int maxim = 1e6 + 10;
    int worms[maxim];
    cin >> n;
    int counter = 0;
    for (int i = 0; i<n; i++) { 
        cin >> a;
        while (a--) {
            worms[counter++] = i + 1;
        }
    }
    cin >> m;
    while (m--) {
        cin >> q;
        cout << worms[q-1] << '\n';
    }
}
