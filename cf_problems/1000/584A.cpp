#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    cin >> n >> t;
    if (n==1 && t==10) {
        cout << -1;
        return 0;
    } else if (t==10 && n>1){
        for (int i = 1; i<n; i++){
            cout << 1;
        }
        cout << 0;
    } else {
        for (int i = 0; i<n; i++){
            cout << t;
        }
    }
}
