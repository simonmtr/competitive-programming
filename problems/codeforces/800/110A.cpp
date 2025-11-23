#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    long long luckynumbers = 0;
    while(n > 0) {
        if (n%10 == 7 || n%10 == 4) {
            luckynumbers++;
        }
        n/=10;
    }
    if (luckynumbers == 0) {
        cout << "NO";
        return 0;
    }
    while(luckynumbers > 0) {
        if (luckynumbers%10 == 7 || luckynumbers%10 == 4) {
            luckynumbers/=10;
        } else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
