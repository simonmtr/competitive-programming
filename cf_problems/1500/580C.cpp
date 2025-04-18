#include <iostream>
#include <bits/stdc++.h>
#include <set>
#include <map>
using namespace std;



long long v, max_cats, possible_paths;
long long cat_pointers[100003];
vector<long long> node_connections[100003];
bool visited[100003];

void DFS(long long to_visit, long long cat_count) {
    if (visited[to_visit]) return;
    visited[to_visit] = 1;
    if (cat_pointers[to_visit]==1) {
        cat_count++;
    } else {
        cat_count = 0;
    }
    if (cat_count > max_cats) {
        return ;
    }
    if (node_connections[to_visit].size() == 1 && to_visit != 1) {
        possible_paths++;
    }
    for (int i  = 0; i<node_connections[to_visit].size(); i++) {
        DFS(node_connections[to_visit][i], cat_count);
    }
}


int main() {
    cin >> v >> max_cats;
    for (long long i = 1; i<=v; i++) {
        cin >> cat_pointers[i];
    }
    for (long long i = 0; i<v-1; i++) {
        long long from, to;
        cin >> from >> to;
        node_connections[from].push_back(to);
        node_connections[to].push_back(from);
    }
    
    DFS(1, 0);
    cout << possible_paths;
}
