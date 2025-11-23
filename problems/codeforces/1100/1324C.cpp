#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
		cin >> s;   
		vector<int> rights;
		rights.push_back(0);
		for (int i = 0; i < int(s.size()); ++i) {
			if (s[i] == 'R') rights.push_back(i + 1);
		}
		rights.push_back(s.size() + 1);
		int res = 0;
		for (int i = 0; i < int(rights.size()) - 1; ++i) {
			res = max(res, rights[i + 1] - rights[i]);
		}
		cout << res << endl;
    }
}
