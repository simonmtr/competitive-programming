#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> v(3, vector<int>(3));
    bool bingo = false;
    for (int i = 0; i<9; ++i) {
        cin >> v[i/3][i%3];
    }
    int n;
    cin >> n;
    for (int i = 0; i<n; ++i) {
        int temp;
        cin >> temp;
        for (int j = 0; j<3; ++j) {
            for (int k = 0; k<3; ++k) {
                if (v[j][k] == temp) {
                    v[j][k] = -1;
                }
            }
        }
        for (int j = 0; j<3; ++j) {
            if (v[j][0] == -1 && v[j][1] == -1 && v[j][2] == -1) {
                bingo = true;
            }
            if (v[0][j] == -1 && v[1][j] == -1 && v[2][j] == -1) {
                bingo = true;
            }
        }
        if (v[0][0] == -1 && v[1][1] == -1 && v[2][2] == -1) {
            bingo = true;
        }
        if (v[0][2] == -1 && v[1][1] == -1 && v[2][0] == -1) {
            bingo = true;
        }
    }
    if (bingo) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
}
