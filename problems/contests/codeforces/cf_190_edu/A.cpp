#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;

        long long remain = n % 3;
        long long groups = n / 3;
        long long res = 0;

        if (remain == 1) {
            if (a < b) {
                res = a;
            } else {
                res = b;
            }
            if ((3 * a) < b) {
                res = res + (n - 1) * a;
            } else {
                res = res + groups * b;
            }
        } else if (remain == 2) {
            if ((2 * a) < b) {
                res = 2 * a;
            } else {
                res = b;
            }
            if ((3 * a) < b) {
                res = res + (n - 2) * a;
            } else {
                res = res + groups * b;
            }
        } else if (remain == 0) {
            if ((3 * a) < b) {
                res = n * a;
            } else {
                res = groups * b;
            }
        } else {
            cout << "error" << endl;
        }

        cout << res << endl;
    }
}
