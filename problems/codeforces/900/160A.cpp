#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> coins(n);
    int sumcoins=0, mycoins=0, coincounter = 0;
    for (int i = 0; i<n; i++) {
        cin >> coins[i];
        sumcoins += coins[i];
    }
    sort(coins.begin(), coins.end(), greater{});
    for (int i = 0; i<n; i++) {
        if (sumcoins/2 < mycoins) {
            break;
        }
        mycoins += coins[i];
        coincounter++;
    }
    cout << coincounter;
}
