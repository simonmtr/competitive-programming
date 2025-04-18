#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    int numbers[t];
    int countEven = 0, countOdd = 0;
    int even = 0, odd = 0;
    for (int i = 0; i<t; i++) {
        cin >> numbers[i];
        if (numbers[i] % 2 == 0) {
            countEven++;
            even = i + 1;
        } else {
            countOdd++;
            odd = i + 1;
        }
    }
    if (countEven > countOdd) {
        cout << odd;
    } else {
        cout << even;
    }
}
