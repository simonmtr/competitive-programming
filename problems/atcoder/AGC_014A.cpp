#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    int changeamount = 0;
    while (a%2 == 0 && b%2==0 && c%2 == 0) {
        if (a == b && b == c) {
            cout << "-1";
            return 0;
        }
        int ahalf = a/2;
        int bhalf = b/2;
        int chalf = c/2;
        a = bhalf + chalf;
        b = ahalf + chalf;
        c = ahalf + bhalf;
        changeamount++;
    }

    cout << changeamount;
}
