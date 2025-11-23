#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    string word;
    cin >> word;
    string res = "";
    for (int i = 0; i<word.length(); i++) {
        word[i]= tolower(word[i]);
        if (!((word[i] == 'a') || (word[i] == 'y') || (word[i] == 'e') || (word[i] == 'i') || (word[i] == 'o') || (word[i] == 'u'))) {
            res = res + "." + word[i];
        }
    }
    cout << res;
}
