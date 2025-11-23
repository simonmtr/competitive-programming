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
        long long lowest = 10000000005, secondlowest = 10000000005, sum_of_seconds = 0;
        for (int i = 0; i<n; i++) {
            int m;
            cin >> m;
            vector<long long> numbers(m);
            for (int j = 0; j<m; j++) {
                cin >> numbers[j];
            }
            sort(numbers.begin(), numbers.end());
            lowest = min(lowest, numbers[0]);
            sum_of_seconds += numbers[1];
            secondlowest = min(secondlowest, numbers[1]);
        }
        cout << (sum_of_seconds + lowest - secondlowest) << endl;
    }
}
