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
        int result = 0, left = 0, right = n - 1, current_sum = 0;
        for (int i = 0; i<n; i++) {
            cin >> numbers[i];
        }
        while (left <= right) {
            if (current_sum > 0) {
                current_sum -= numbers[right--];
            } else {
                current_sum += numbers[left++];
            }
            if (current_sum == 0) {
                result = left + n - right - 1; 
            }
        }
        cout << result << endl;
        
    }
}
