#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n < 5) {
        cout << n;
        return 0;
    } else if (n<9) {
        cout << 9-n;
        return 0;
    }
    long long tencounter=1;
    long long cur_number=0;
    while (n > 0) {
        long long temp = n%10;
        if (n!=9) {
            temp = min(temp, 9-temp);
        }
        cur_number = cur_number + tencounter*temp;
        tencounter*=10;
        n=n/10;
    }
    cout << cur_number;

}
