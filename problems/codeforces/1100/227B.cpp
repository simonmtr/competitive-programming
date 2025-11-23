#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> positions(n+1);

    for (int i = 0; i<n; i++) {
        int temp;
        cin >> temp;
        positions[temp] = i + 1;
    }
    long long sum_one = 0, sum_two = 0;
    int m;
    cin >> m;
    for (int i = 0; i<m; i++) {
        int temp_two;
        cin >> temp_two;
        sum_one += positions[temp_two];
        sum_two += n - positions[temp_two] + 1;
    }
    cout << sum_one << ' ' << sum_two << endl;
}
