#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int mat[5][5];
    int max = 5;
    int row = 0, column = 0;
    for (int i = 0; i<max; i++) {
        for (int j = 0; j<max;j++) {
            int numb;
            cin >> numb;
            mat[j][i] = numb;
            if (mat[j][i] == 1) {
                row = j;
                column = i;
            }
        }
    }
    cout << (abs(2-row) + abs(2-column));
}
