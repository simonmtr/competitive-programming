#include <iostream>
#include <bits/stdc++.h>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    string res;
    map<string, pair<string, string>> words;
    for (int i = 0; i<m;i++) {
        string la, lb;
        cin >> la >> lb;
        words.insert({la, {la, lb}});
        words.insert({lb, {la, lb}});
    }
    for (int i = 0; i<n; i++) {
        string temp;
        cin >> temp;
        string la = words[temp].first, lb = words[temp].second;
        if (temp == la && la.length() <= lb.length()) {
            res += la;
        } else {
            res += lb;
        }
        if (i!=n-1) {
            res += " ";
        }
    }
    cout << res;
}
