#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;
        vector<int> divisors;
        for (int i = d + 1; ; i++) {
            int temp = 1;
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    temp = 0;
                    break;
                }
            }
            if (temp){
                divisors.push_back(i);
                break;
            }
        }
        for (int i = divisors.back() + d; ; i++) {
            int temp = 1;
            for (int j = 2; j * j <= i; j++){
                if (i % j == 0) {
                    temp = 0;
                    break;
                }
            }
            if (temp) {
                divisors.push_back(i);
                break;
            }
        }
        long long min_number = min(1ll * divisors[0] * divisors[1], 1ll * divisors[0] * divisors[0] * divisors[0]);
        cout <<  min_number << endl;
    }
}
