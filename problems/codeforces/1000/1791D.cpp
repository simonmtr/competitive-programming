#include <iostream>
#include <bits/stdc++.h>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    int n;
    string s;
    cin >> t;
    while (t--) {
        vector<int> chars1(26, 0), chars2(26, 0);
        int res = 0;
        cin >> n >> s;
        for (auto c : s) {
            chars1[c-'a']++;
        }
        for (auto c : s){
            chars1[c-'a']--;
            chars2[c-'a']++;
            int temp = 0;
            for (int i = 0; i<26; i++) {
                temp += min(1, chars1[i]) + min(1, chars2[i]);
            }
            res = max(temp, res);

        }
        cout << res << endl;
    }
}
