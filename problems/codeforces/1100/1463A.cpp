#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int num1, num2, num3;
        cin >> num1 >> num2 >> num3;
        int total = num1 + num2 + num3;
        if (total % 9 != 0){
            cout << "NO" << endl;
            continue;
        }
        int minimum = total/9;
        if(num1 < minimum || num2 < minimum || num3 < minimum){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }


}
