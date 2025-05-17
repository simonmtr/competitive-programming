#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    string b;
    cin >> b;
    int antonwins = 0;

    for (int i = 0; i< b.length(); i++) {
        if (b[i] == 'A') {
            antonwins++;
        }
    }

    if (antonwins > a/2.0) {
        cout << "Anton";
    } else if (antonwins == a/2.0) {
        cout << "Friendship";
    } else {
        cout << "Danik";
    }
}
