#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        long long white_choc, dark_choc;
        cin >> white_choc >> dark_choc;
        int res = 0;
        for (int k = 1; k <= 21; k++) {
            long long choc_a_needed = 0, choc_b_needed = 0;

            for (int i = 0; i < k; i++) {
                long long current_two_to_the_power = 1LL << i;
                if (i % 2 == 0) choc_a_needed += current_two_to_the_power;
                else choc_b_needed += current_two_to_the_power;
            }

            if ((choc_a_needed <= white_choc && choc_b_needed <= dark_choc) || (choc_b_needed <= white_choc && choc_a_needed <= dark_choc)) {
                res = k;
            }    
            else {
                break;
            }
        }
        cout << res << '\n';
    }
    return 0;
}
