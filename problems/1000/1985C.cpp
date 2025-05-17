#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> numbers(n);
        long long a_sum = 0, max_n = 0, res = 0;
        for (long long i = 0; i<n; i++) {
            cin >> numbers[i];
            a_sum+=numbers[i];
            max_n = max(max_n, numbers[i]);
            if (max_n == (a_sum-max_n)) {
                res++;
            }
            
        }
        cout << res << endl;
    }
}
