#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i<n; i++) {
        int am;
        vector<int> res;
        string biggersmaller;
        cin >> am;
        cin >> biggersmaller;
        int min=1, max=am;
        for (int j = biggersmaller.size()-1; j>=0; j--) {
            if (biggersmaller[j] == '<') {
                res.push_back(min);
                min++;
            } else {
                res.push_back(max);
                max--;
            }
        }
        res.push_back(max);

        
        for (int i = res.size()-1; i>=0; i--){
            cout << res[i] << " ";
        }
        cout << endl;
    }
}
