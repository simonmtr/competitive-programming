#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t_c;
    cin >> t_c;
    while (t_c--) {

        string s, t;    
        cin >> s >> t;
        int counter = 0;
        for (int i = 0; i<(int) s.size(); i++) {
            if (s[i] == '?') {
                if (counter < (int) t.size()) {
                    s[i] = t[counter++];
                } else {
                    s[i] = 'a';
                }
            } else if (s[i] == t[counter]) {
                counter++;
            }
        }
        if (counter >= t.size()) {
            cout << "YES\n" << s << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
