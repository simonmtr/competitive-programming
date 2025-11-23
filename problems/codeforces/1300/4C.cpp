#include <iostream>
#include <bits/stdc++.h>
#include <map>

using namespace std;


int main() {
    int t;
    cin >> t;
    string name;
    std::map<string, int> names;
    while(t--) {
        cin >> name;
        if (names.count(name)) {
            names[name]+=1;
            cout << name << names[name] << "\n";
        } else {
            names[name];
            cout << "OK\n";
        }
    }
}
