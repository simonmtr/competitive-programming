#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, g, cur = 0;
    cin >> n >> g;
    vector<int> graph(n);
    for (int i = 0; i<n-1; i++) {
        cin >> graph[i];
    }
    while (cur+1 <= g) {
        if (cur+1 == g){
            cout << "YES";
            return 0;
        }
        cur += graph[cur];
    }
    cout << "NO";
}
