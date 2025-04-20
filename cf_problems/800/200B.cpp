#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int d;
    float s=0.0;
    cin >> d;
    for (int i = 0; i<d; i++) {
        int p;
        cin >> p;
        s+=p;
    }
    cout << s/d;
}
