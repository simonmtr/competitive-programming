#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        set<int> seen;
        for (int i = 2; i*i<=n; ++i) {
            if (n%i == 0 && !seen.count(i)) {
                seen.insert(i);
                n /= i;
                break;
            }
        }
        for (int i = 2; i*i<=n; ++i) {
            if (n%i == 0 && !seen.count(i)) {
                seen.insert(i);
                n /= i;
                break;
            }
        }

        if (int(seen.size()) < 2 || seen.count(n) || n==1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            seen.insert(n);
            for (auto it : seen) {
                cout << it << ' ';
            }
            cout << endl;
        }
    }
}
