#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i<n; ++i) cin >> v[i];
    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }
    int dpminustwo = 0;
    int dpminusone = abs(v[1] - v[0]);
    for (int i = 2; i<n; ++i) {
        int tempminusone = min(dpminustwo + abs(v[i] - v[i-2]), dpminusone + abs(v[i] - v[i-1]));
        dpminustwo = dpminusone;
        dpminusone = tempminusone;
    }
    cout << dpminusone << endl;
    return 0;
}
