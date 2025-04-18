#include <iostream>
#include <bits/stdc++.h>

using namespace std;



int main() {
    int64_t numbers[3];

    for (int i = 0; i<3; i++) {
        cin >> numbers[i];
    }
    int64_t res = ((numbers[0]+numbers[2]-1)/numbers[2]) * ((numbers[1]+numbers[2]-1)/numbers[2]);
    cout << res;
}
