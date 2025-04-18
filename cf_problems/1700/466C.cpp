#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    
    long long sums[n+2], arr[n+2];
    sums[0] = 0;
    for (int i = 1;i<=n;i++) {
        cin >> arr[i];
        sums[i] = sums[i-1] + arr[i];
    }
    if (sums[n]%3!=0){
        cout << 0;
        return 0;
    }
    long long third = sums[n]/3;
    long long second = third + third;
    long long res = 0, count = 0;
    for (int i = 1; i<n; i++) {
        if (sums[i] == second) {
            res += count;
        }
        if (sums[i] == third) {
            count++;
        }
    }

    cout << res;
    return 0;


}
