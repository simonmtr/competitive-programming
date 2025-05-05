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
        if (n == 1) {
            cout << 1 << endl;
            continue;
        }
        if (n == 2) {
            cout << -1 << endl;
            continue;
        }
        vector<int> nums(n*n);
        int count = 0;
        for(int i=1;i<=n*n;i+=2){
            nums[count] = i;
            count++;
        }
        for(int i=2;i<=n*n;i+=2) {
            nums[count] = i;
            count++;
        }
        cout << endl;

        for (int i = 0; i<n*n; i++) {
            cout << nums[i] << ' ';
            if ((i+1)%n == 0) {
                cout << endl;
            }
        }        
    }
}
