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
        int even = 0, odd = 0;
        vector<int> numbers(n);
        for (int i = 0; i<n; i++) {
            cin >> numbers[i];
            if (numbers[i]%2 == 0) {
                even++;
            } else {
                odd++;
            }
        }

        if (even%2 != odd%2) {
            cout << "NO" << endl;
        } else {
            if (even % 2 == 0) {
                cout << "YES" << endl;
            } else {
                bool found = false;
                for (int i = 0; i < n; i++) {
                    for (int j = i + 1; j < n; j++) {
                        if (numbers[i] % 2 != numbers[j] % 2 && abs(numbers[i] - numbers[j]) == 1) {
                            if (!found) {
                                cout << "YES" << endl;
                                found = true;
                            }
                        }
                    }
                }
                if (!found) {
                    cout << "NO" << endl;
                }
            }
        }

    }

}
