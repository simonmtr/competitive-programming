#include <iostream>
#include <bits/stdc++.h>
#include <set>
#include <queue>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    queue<int> q;
    vector<int> visited(10002, -1);
    visited[n] = 0;
    q.push(n);
    int cur;
    while(!q.empty()) {
        cur = q.front();
        if (cur == m) {
            cout << visited[cur];
            return 0;
        }
        q.pop();
        if (cur*2 <= 10000) {
            if (visited[cur*2] == -1) {
                    q.push(cur*2);
                    visited[cur*2] = visited[cur] + 1;
                }
        }
        if (cur > 1 && visited[cur-1] == -1) {
            q.push(cur-1);
            visited[cur-1] = visited[cur] + 1;

        }
    }
}
