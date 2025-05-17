#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int b, ans = 0;
    cin >> b;
    while(b) {
        if (b%2==1) {
            ans++;
        }
        b>>=1;
    }
    cout << ans;
    
}
