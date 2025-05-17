#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, subs;
    cin >> s >> subs;
    int ssize = s.length(), subssize = subs.length();

    for (int i = 0; i<ssize; i++) {
        if(s[i] == '?' || s[i] == subs[0]) {
            bool works = true;
            for (int j = 0; j<subssize; j++) {
                if (s[i+j] == '?' || s[i+j] == subs[j]) {
                    continue;
                } else {
                    works = false;
                    break;
                }
            }
            if (works == true){
                cout << "Yes";
                return 0;
    
            }
        }
    }
    cout << "No";
}
