#include <iostream>
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
        string s;
        cin >> s;

        int count_to_twentysix = 4;
        for (int i = 0; i + 4 <= n; i++) {
            int cost = 0;
            if (s[i] != '2') cost++;
            if (s[i + 1] != '0') cost++;
            if (s[i + 2] != '2') cost++;
            if (s[i + 3] != '6') cost++;
            count_to_twentysix = min(count_to_twentysix, cost);
        }
        int count_to_remove_twentyfive = 0;
        for (int i = 0; i + 4 <= n; i++) {
            if (s[i] == '2' && s[i + 1] == '0' && 
                s[i + 2] == '2' && s[i + 3] == '5') {
                s[i + 3] = '6';
                count_to_remove_twentyfive++;
            }
        }

        int res = min(count_to_twentysix, count_to_remove_twentyfive);
        cout << res << "\n";
    }

    return 0;
}
