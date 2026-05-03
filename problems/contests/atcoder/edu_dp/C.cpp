#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int prev_a = 0, prev_b = 0, prev_c = 0;
    cin >> prev_a >> prev_b >> prev_c;
    for (int i = 1; i<n; ++i) {
        int cur_a, cur_b, cur_c;
        cin >> cur_a >> cur_b >> cur_c;
        cur_a = cur_a + max(prev_b, prev_c);
        cur_b = cur_b + max(prev_a, prev_c);
        cur_c = cur_c + max(prev_a, prev_b);
        prev_a = cur_a;
        prev_b = cur_b;
        prev_c = cur_c;
    }

    cout << max({prev_a, prev_b, prev_c});
}
