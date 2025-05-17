#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    int m, count = 0, l, r;
    int dp[100003];
    cin >> s >> m;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i-1]) {
            count++;
        }
        dp[i]= count;
    }
    while(m--) {
        cin>> l >> r;
        cout << dp[r-1] - dp[l-1] << endl;
    }
}
