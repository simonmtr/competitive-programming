#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    int res = 0;
    while (t) {
        res++;
        int temp = res;
        int temp_ans = 0;
        while (temp) {
            temp_ans += temp % 10;
            temp /= 10;
        }
        if (temp_ans == 10) {
            t--;
        }

    }
    cout << res << endl;

}
