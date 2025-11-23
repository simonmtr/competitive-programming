#include <bits/stdc++.h>
#include <set>
using namespace std;

int main() {
    string s;
    cin >> s;
    set<char> chars;

    for(std::string::size_type i = 0; i < s.size(); ++i) {
        if (!(chars.find(s[i]) != chars.end())) {
            chars.insert(s[i]);
        }
    }
        
    if (chars.size()%2 == 0) {
        cout << "CHAT WITH HER!\n";
    } else {
        cout << "IGNORE HIM!\n";
    }
    return 0;
}
