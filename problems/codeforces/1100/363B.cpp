#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int p[200005];
    p[0] = 0;
    for (int i = 1; i<=n; i++){
        cin >> p[i];
        p[i] += p[i - 1];
    }
    int min_v = 100000004, ind;
    for (int i = 0; i <= n - k; i++) {
        if (p[i + k] - p[i] < min_v)
        {
            min_v = p[i + k] - p[i];
            ind = i + 1;
        }
    }
    cout << ind << endl;

}
