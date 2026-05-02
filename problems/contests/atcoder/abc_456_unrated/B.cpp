#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> d(3, vector<int>(3));
    for (int i = 0; i<3; ++i) {
        for (int j = 0; j<6; ++j) {
            int temp;
            cin >> temp;
            if (temp == 4) {
                d[i][0]++;
            } else if (temp == 5) {
                d[i][1]++;
            } else if (temp == 6) {
                d[i][2]++;
            }
        }
    }
    long double maxopt = 6 * 6 * 6;
    long double res = (d[0][0] * d[1][1] * d[2][2] + d[0][0] * d[2][1] * d[1][2] + d[1][0] * d[0][1] * d[2][2] + d[1][0] * d[2][1] * d[0][2] + d[2][0] * d[0][1] * d[1][2] + d[2][0] * d[1][1] * d[0][2]) / maxopt;

    cout << fixed << setprecision(10) << res << '\n';
}
