#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n, c; 
    cin >> n >> c;
    vector<long long> pictures(n);
    for(long long i = 0; i < n; ++i) {
        cin >> pictures[i];
    }
    long long l = 1, r = 1e9;
    while(l <= r) {
        long long mid = l + (r - l) / 2;
        long long total = 0;
        for(long long i = 0; i < n; ++i) {
            total += (pictures[i] + 2 * mid) * (pictures[i] + 2 * mid);
            if(total > c){
                break;
            }
        }
        if(total == c) {
            cout << mid << endl;
            return;
        }
        if(total > c) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

}
