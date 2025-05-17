#include <iostream>
#include <bits/stdc++.h>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> nums(n+1), unique(n+1);
    set<int> all;
    for (int i = 1; i<=n; i++) {
        cin >> nums[i];
    }
    for(int i = n; i >= 1; i--) {
        all.insert(nums[i]);
        unique[i] = all.size();
    }
    while(m--) {
        int temp;
        cin >> temp;
        cout << unique[temp] << endl;
    }
}
