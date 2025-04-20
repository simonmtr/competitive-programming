#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> ni(n);
    int result = 0;
    for (int i = 0; i<n; i++) {
        cin >> ni[i];
    }
    int bound = ni[k-1];
    for (int i = 0; i<n; i++) {
        if (ni[i] >= 1 && ni[i] >= bound) {
            result++;
        }
    }
    cout << result;

}
