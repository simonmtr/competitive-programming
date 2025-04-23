#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int remaining, b, hours = 0, burnt = 0;
    cin >> remaining >> b;
    
    while (remaining > 0) {
        remaining--;
        burnt++;
        hours++;
        if (burnt%b == 0 && burnt != 0) {
            remaining++;
        }
    }
    cout << hours << endl;
}
