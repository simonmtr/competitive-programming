#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, news;
    cin >> s;
    news = toupper(s[0]);
    news += s.substr(1, s.length()-1);

    cout << news;
}
