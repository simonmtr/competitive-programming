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
        vector<int> numbers(n);
        long long result = 0, negative_nums = 0;
        for (int i = 0; i<n; i++) {
            cin >> numbers[i];
            if (numbers[i] < 0) {
                negative_nums++;
                numbers[i] = -numbers[i];
            }
            result += numbers[i];
        }
        sort(numbers.begin(), numbers.end());
        if (negative_nums%2 != 0) {
            result -= 2 * numbers[0];
        }
        cout << result << endl;
    }

}
