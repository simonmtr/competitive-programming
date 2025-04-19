#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> line;
    int popped = 0; 
    for (int i = 0; i<n; i++) {
        int p, id;
        cin >> p;
        if (p == 2) {
            cout << line[popped] << endl;
            popped++;
        } else {
            cin >> id;
            line.push_back(id);
        }
    }
}
