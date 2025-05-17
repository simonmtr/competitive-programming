#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    vector<long long> sorted;
    long long previous;
    long long yi, xi, zi;
    for(long long i = 1; i<=n; i++) {
        cin >> yi;
        if (i == 1) {
            zi = 0;
        } else {
            zi = previous;
        }
        xi = ((yi+zi) % 1000000000)+1;
        sorted.push_back(xi);
        sort(sorted.begin(), sorted.end());
        long long temp_sum = 0;
        for (long long j = 1; j<=sorted.size(); j++) {
            if (j%2 == 1) {
                temp_sum+=sorted[j-1];
            }
        }
        previous = temp_sum;
        cout << temp_sum << endl;
    }

}
