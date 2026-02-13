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
        int b = n * (n-1)/2;
        int b_arr[b];
        for (int i = 0; i<b; ++i) {
            cin >> b_arr[i];
        }
        sort(b_arr, b_arr+b);
        for (int i = 0; i<b; i+=n) {
            cout << b_arr[i] << ' ';
            --n;
        }
        cout<<"1000000000\n";
    }
}
