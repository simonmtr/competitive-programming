#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string, int> edos = {
        {"Icosahedron",20},
        {"Cube",6},
        {"Tetrahedron",4},
        {"Dodecahedron",12}, 
        {"Octahedron",8}};
    int n;
    cin >> n;
    int res = 0;
    for (int i = 0; i<n;i++) {
        string e;
        cin >> e;
        res += edos.at(e);
    }
    cout << res;
}
