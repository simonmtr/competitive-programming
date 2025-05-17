#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int comp(int a, int b) {
    if (a>b) return 1;
    if (a==b) return 0;
    return -1; // a<b
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, b1, b2, res=0;
        cin >> a1 >> a2 >> b1 >> b2;
        if (comp(a1, b1) + comp(a2, b2) > 0) res++;
        if (comp(a1, b2) + comp(a2, b1) > 0) res++;
        if (comp(a2, b1) + comp(a1, b2) > 0) res++;
        if (comp(a2, b2) + comp(a1, b1) > 0) res++;

        cout << res << endl;
    }
}
