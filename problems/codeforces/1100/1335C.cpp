#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> counts(n + 1);
		for (int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			++counts[x];
		}
		int max_v = *max_element(counts.begin(), counts.end());
		int diff = n + 1 - count(counts.begin(), counts.end(), 0);
		cout << max(min(max_v - 1, diff), min(max_v, diff - 1)) << endl;
    }
}
