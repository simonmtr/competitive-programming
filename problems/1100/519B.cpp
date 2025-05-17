#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int prevsum = 0;
    int currentsum = 0;
    int arrsize = t;
    for (int i = 1; i<=3; i++) {
        for (int j = 0; j<arrsize; j++) {
            int temp;
            cin >> temp;
            currentsum += temp;
        }
        // cout << "i: " << i <<  " - prevsum: " << prevsum << " - cursum: " << currentsum << endl;

        if (i != 1) {
            cout << prevsum - currentsum << endl;
        }
        prevsum = currentsum;
        currentsum = 0;
        arrsize--;
    }
}
