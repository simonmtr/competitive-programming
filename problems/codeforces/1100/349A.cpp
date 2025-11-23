#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int twenty_fives = 0;
    int fifties = 0;
    for (int i = 0; i<n; i++) {
        int temp;
        cin >> temp;
        if (temp == 25) {
            twenty_fives++;
        } else if (temp == 50) {
            if (twenty_fives < 1) {
                cout << "NO" << endl;
                return 0;
            }
            twenty_fives--;
            fifties++;
        } else if (temp == 100) {
            if (twenty_fives > 0 && fifties > 0) {
                twenty_fives--;
                fifties--;
            } else if (twenty_fives > 2) {
                twenty_fives = twenty_fives - 3;
            } else {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;


}
