#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve() {
	cout << "test";
}


int main() {
    int t;
    string s;
    cin >> t;
    cin >> s;
    char last = s[0];
    int res = 0;
    for (int i = 1; i<s.length();i++){
         if (last && s[i]==last) {
            res++;
        }
        last = s[i];
    }
    cout << res;
}
