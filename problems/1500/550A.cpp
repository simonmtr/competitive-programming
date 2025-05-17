#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    string inputstring;
    cin >> inputstring;
    bool abfound = false;
    bool bafound = false;
    bool overlapping = false;
    for (int i = 0; i < inputstring.length(); i++) {
        if (i+2 <= inputstring.length() && ((inputstring[i] == 'B' && inputstring[i+1] == 'A' && inputstring[i+2] == 'B') || (inputstring[i] == 'A' && inputstring[i+1] == 'B' && inputstring[i+2] == 'A'))) {
            if (abfound && bafound) {
                cout << "YES";
                return 0;
            }
            abfound = true;
            bafound = true;
            overlapping = true;
            i+=2;
        }
        else if (i+1 <= inputstring.length() && inputstring[i] == 'A' && inputstring[i+1] == 'B') {
            abfound = true;
            if (overlapping && bafound) {
                overlapping = false;
            }
        }
        else if (i+1 <= inputstring.length() && inputstring[i] == 'B' && inputstring[i+1] == 'A') {
            bafound = true;
            if (overlapping && abfound) {
                overlapping = false;
            }
        }
        if (abfound && bafound && !overlapping) {
         cout << "YES";
         return 0;
        }
    }
    cout << "NO";
    return 0;
}
