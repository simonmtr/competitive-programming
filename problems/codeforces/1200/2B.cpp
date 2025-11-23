#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int alldays;
    int goal;
    cin >> alldays >> goal;
    int mintd, maxtd;
    vector<int> days;
    for (int i = 0; i < alldays; i++) {
        cin >> mintd >> maxtd;
        if (goal == 0) {
            days.push_back(0);
            continue;
        }
        if (mintd <= goal && goal <= maxtd) {
            days.push_back(goal);
            goal = 0;
        } else if (mintd <= goal) {
            goal -= max(mintd,goal);
            days.push_back(maxtd);
        }
    }
    if (goal > 0) {
        cout << "NO";
    } else {
        cout << "YES\n";
        for (int i = 0; i < alldays; i++) {
            cout << days[i] << " ";
        }
    }
}
