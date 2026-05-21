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
        vector<int> res;
        int added = 0;
        for (int i = 1; i<=2*n; ++i) {
            if (added != 2) {
                res.push_back(i);
                added++;
            } else if (added == 2) {
                added = 0;
            }
        }
        for (int i = 0; i<n; ++i) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
}
