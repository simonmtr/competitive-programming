#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int onethree = 0;
        int res = 0;
        for (int i = 0; i<(int) s.size(); ++i) {
            if (s[i] == '1' || s[i] == '3') {
                onethree++;
            }
        }
        int twos = 0;
        for (int i = 0; i<=(int) s.size(); ++i) {
            res = max(res, twos + onethree);
            if ((int) s.size() == i) {
                break;
            }
            if (s[i] == '2') {
                twos++;
            }
            if (s[i] == '1' || s[i] == '3') {
                onethree--;
            }
        }


        cout << (int) s.size() - res << endl;
    }
}
