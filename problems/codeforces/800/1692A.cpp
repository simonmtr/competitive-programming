#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int higher = 0;
    if (a < b) higher++;
    if (a < c) higher++;
    if (a < d) higher++;
    cout << higher << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
