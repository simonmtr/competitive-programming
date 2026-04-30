#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> divbytwo;
        vector<int> divbynone;
        vector<int> divbythree;
        vector<int> divbysix;
        for (int i=0; i<n; ++i) {
            int temp;
            cin >> temp;
            if (temp % 6 == 0) {
                divbysix.push_back(temp);
            } else if (temp % 2 == 0) {
                divbytwo.push_back(temp);
            } else if (temp % 3 == 0) {
                divbythree.push_back(temp);
            } else {
                divbynone.push_back(temp);
            }
        }
        vector<int> res;
        for (int i = 0; i<n; ++i) {
            int divbytwosize = divbytwo.size();
            int divbynonesize = divbynone.size();
            int divbythreesize = divbythree.size();
            if (divbytwosize > 0) {
                int temp = divbytwo.back();
                res.push_back(temp);
                divbytwo.pop_back();
            } else if (divbynonesize > 0) {
                int temp = divbynone.back();
                res.push_back(temp);
                divbynone.pop_back();
            } else if (divbythreesize > 0) {
                int temp = divbythree.back();
                res.push_back(temp);
                divbythree.pop_back();
            } else {
                int temp = divbysix.back();
                res.push_back(temp);
                divbysix.pop_back(); 
            }
        }

        for (int i = 0; i<n; ++i) {
            cout << res[i] << " ";
        }
        cout << endl;

    }
}
