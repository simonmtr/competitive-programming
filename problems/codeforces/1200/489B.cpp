#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int bn;
    cin >> bn;
    vector<int> boys(bn);
    for (int i = 0; i<bn; i++) {
        cin >> boys[i];
    }

    int gn;
    cin >> gn;
    vector<int> girls(gn);
    for (int i = 0; i<gn; i++) {
        cin >> girls[i];
    }
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());
    int res = 0;
    for (int i = 0; i < bn; i++) {
        for (int j = 0; j < gn; j++) {
            if (abs(boys[i] - girls[j]) <= 1) {
                girls[j] = 1005;
                res++;
                break;
            }
        }
    }
    cout << res;
}
