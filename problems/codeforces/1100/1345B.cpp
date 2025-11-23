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
        int res = 0;

        while (n > 2) {
            long long sticks_needed_for_additional_house = 5;
            long long base_sticks_needed = 2;
            while (n>= sticks_needed_for_additional_house + base_sticks_needed) {
                base_sticks_needed = sticks_needed_for_additional_house + base_sticks_needed;
                sticks_needed_for_additional_house += 3;
            }
            n -= base_sticks_needed;
            res++;         
        }

        if (n >= 2) {
            res++;
        }
        cout << res << endl;
    }
}
